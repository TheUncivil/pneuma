/*
Author: TheUncivil
Licensed under Apache 2.0
*/

#ifndef PNEUMA_CORE__PNEUMA_CORE_HPP_
#define PNEUMA_CORE__PNEUMA_CORE_HPP_

#include "rclcpp/rclcpp.hpp"

#include "pneuma_interfaces/srv/register.hpp"


namespace pneuma
{
namespace core
{

class Core : public rclcpp::Node
{
    public:
        // constructor
        explicit Core(const rclcpp::NodeOptions & options);
        ~Core();
        
    private:
        // service functions
        void srv_register(const std::shared_ptr<pneuma_interfaces::srv::Register::Request> request,
            std::shared_ptr<pneuma_interfaces::srv::Register::Response> response);

        // declare/get parameters
        void getParam();
        void declareParam();

        // ROS objects
        rclcpp::Service<pneuma_interfaces::srv::Register>::SharedPtr srv_register_;

        std::map<std::string, int32_t> registered_nodes_;

        // parameters
        std::string par_srv_register_name_; // the id string is used to detect other nodes
};

} // namespace core
} // namespace pneuma

#endif