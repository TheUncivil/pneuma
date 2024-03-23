/*
Author: TheUncivil
Licensed under Apache 2.0
*/

#ifndef PNEUMA_CORE__PNEUMA_CORE_HPP_
#define PNEUMA_CORE__PNEUMA_CORE_HPP_

#include "rclcpp/rclcpp.hpp"

#include "pneuma_utils/module.hpp"
#include "pneuma_utils/module_types.hpp"


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
        // handle module parameters
        void moduleParam();
        
        // declare/get basic parameters
        void getParam();
        void declareParam();

        std::vector<std::vector<pneuma::module>> module_registry_;
};

} // namespace core
} // namespace pneuma

#endif