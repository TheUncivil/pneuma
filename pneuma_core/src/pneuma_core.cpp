/*
Author: TheUncivil
Licensed under Apache 2.0
*/

#include "pneuma_core/pneuma_core.hpp"


namespace pneuma
{

// constructor/destructor
////////////////////////////////////////////////////////////////////////////////////

core::Core::Core(const rclcpp::NodeOptions & options)
 : rclcpp::Node("pneuma_core_default_name", options)
{
    RCLCPP_INFO(get_logger(), "constructing");
}


core::Core::~Core()
{
    RCLCPP_INFO(get_logger(), "deconstructing");
}

////////////////////////////////////////////////////////////////////////////////////

} // namespace pneuma

#include "rclcpp_components/register_node_macro.hpp"
RCLCPP_COMPONENTS_REGISTER_NODE(pneuma::core::Core)