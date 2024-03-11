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
};

} // namespace core
} // namespace pneuma

#endif