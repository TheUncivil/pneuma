/*
Author: TheUncivil
Licensed under Apache 2.0
*/

#include "pneuma_core/pneuma_core.hpp"


// constructor/destructor
////////////////////////////////////////////////////////////////////////////////////

pneuma::core::Core::Core(const rclcpp::NodeOptions & options)
 : rclcpp_lifecycle::LifecycleNode("pneuma_core", options)
{
    RCLCPP_INFO(get_logger(), "constructing");
}


pneuma::core::Core::~Core()
{
    RCLCPP_INFO(get_logger(), "deconstructing");
}

// lifecycle transition functions
////////////////////////////////////////////////////////////////////////////////////

roslf_callbackreturn pneuma::core::Core::on_configure(const rclcpp_lifecycle::State & state_prev)
{
    RCLCPP_INFO(get_logger(), "configuring");

    return roslf_callbackreturn::SUCCESS;
}


roslf_callbackreturn pneuma::core::Core::on_activate(const rclcpp_lifecycle::State & state_prev)
{
    RCLCPP_INFO(get_logger(), "activating");

    return roslf_callbackreturn::SUCCESS;
}


roslf_callbackreturn pneuma::core::Core::on_deactivate(const rclcpp_lifecycle::State & state_prev)
{
    RCLCPP_INFO(get_logger(), "deactivating");

    return roslf_callbackreturn::SUCCESS;
}


roslf_callbackreturn pneuma::core::Core::on_shutdown(const rclcpp_lifecycle::State & state_prev)
{
    RCLCPP_INFO(get_logger(), "shutting down");

    return roslf_callbackreturn::SUCCESS;
}


roslf_callbackreturn pneuma::core::Core::on_cleanup(const rclcpp_lifecycle::State & state_prev)
{
    RCLCPP_INFO(get_logger(), "cleaning up");

    return roslf_callbackreturn::SUCCESS;
}

////////////////////////////////////////////////////////////////////////////////////

#include "rclcpp_components/register_node_macro.hpp"
RCLCPP_COMPONENTS_REGISTER_NODE(pneuma::core::Core)