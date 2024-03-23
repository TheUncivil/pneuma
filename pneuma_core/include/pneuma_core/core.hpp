/*
Author: TheUncivil
Licensed under Apache 2.0
*/

#ifndef PNEUMA_CORE__PNEUMA_CORE_HPP_
#define PNEUMA_CORE__PNEUMA_CORE_HPP_

#include "rclcpp/rclcpp.hpp"


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
        // declare/get parameters
        void getParam();
        void declareParam();

        std::map<std::string, int32_t> registered_nodes_;
};

} // namespace core
} // namespace pneuma

#endif