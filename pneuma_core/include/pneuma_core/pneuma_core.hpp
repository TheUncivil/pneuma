/*
Author: TheUncivil
Licensed under Apache 2.0
*/

#ifndef PNEUMA_CORE__PNEUMA_CORE_HPP_
#define PNEUMA_CORE__PNEUMA_CORE_HPP_

#include "rclcpp/rclcpp.hpp"
#include "rclcpp_lifecycle/lifecycle_node.hpp"

using roslf_callbackreturn = rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn;


namespace pneuma
{
namespace core
{

class Core : public rclcpp_lifecycle::LifecycleNode
{
    public:
        // constructor
        explicit Core(const rclcpp::NodeOptions & options);
        ~Core();
        
    private:
        // lifecycle transition functions
        roslf_callbackreturn on_configure(const rclcpp_lifecycle::State & state_prev);
        roslf_callbackreturn on_activate(const rclcpp_lifecycle::State & state_prev);
        roslf_callbackreturn on_deactivate(const rclcpp_lifecycle::State & state_prev);
        roslf_callbackreturn on_cleanup(const rclcpp_lifecycle::State & state_prev);
        roslf_callbackreturn on_shutdown(const rclcpp_lifecycle::State & state_prev);
};

} // namespace core
} // namespace pneuma

#endif