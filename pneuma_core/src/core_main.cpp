/*
Author: TheUncivil
Licensed under Apache 2.0
*/

#include "pneuma_core/core.hpp"


namespace pneuma
{

core::Core::Core(const rclcpp::NodeOptions & options)
 : rclcpp::Node("pneuma_core_default_name", options)
{
    RCLCPP_INFO(get_logger(), "constructing");

    module_registry_.resize(pneuma::eModuleType::OUT_OF_RANGE);

    moduleParam();
    declareParam();
    getParam();
}


core::Core::~Core()
{
    RCLCPP_INFO(get_logger(), "deconstructing");
}

} // namespace pneuma


#include "rclcpp_components/register_node_macro.hpp"
RCLCPP_COMPONENTS_REGISTER_NODE(pneuma::core::Core)