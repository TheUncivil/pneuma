/*
Author: TheUncivil
Licensed under Apache 2.0
*/

#include "pneuma_core/core.hpp"


namespace pneuma
{

void core::Core::declareParam()
{
    if (!has_parameter("srv.register_name"))
    { declare_parameter("srv.register_name", rclcpp::ParameterValue(get_name()+'register')); } // causes annoying compiler warnings, but works TODO find a better way
}

void core::Core::getParam()
{
    par_srv_register_name_ = get_parameter("srv.register_name").as_string();   
}

} // namespace pneuma