/*
Author: TheUncivil
Licensed under Apache 2.0
*/

#include "pneuma_core/core.hpp"


namespace pneuma
{

namespace core
{

void Core::moduleParam()
{
    if (!has_parameter("modules.list"))
    {
        declare_parameter("modules.list", rclcpp::ParameterValue(std::vector<std::string>()));
    }

    std::vector<std::string> module_names = get_parameter("modules.list").as_string_array();

    for (std::string mod_name : module_names)
    {
        pneuma::module module;
        module.name = mod_name;

        std::string prefix = "modules." + mod_name;
        
        if (!has_parameter(prefix+".type"))
        {
            declare_parameter(prefix+".type", rclcpp::ParameterValue(pneuma::eModuleType::OUT_OF_RANGE));
        }
        uint8_t mod_type = get_parameter(prefix+".type").as_int();

        module_registry_[mod_type].push_back(module);
    }
}

void Core::declareParam()
{

}

void Core::getParam()
{

}

} // namespace core
} // namespace pneuma