/*
Author: TheUncivil
Licensed under Apache 2.0
*/

#include <string>
#include <cstdint>

#include "lifecycle_msgs/msg/state.hpp"
// also depends on module_types.hpp, which is included via management_utils.cpp


namespace pneuma
{

struct module
{
    std::string name;
    uint8_t type = pneuma::eModuleType::UNDEFINED;
    uint8_t state = lifecycle_msgs::msg::State::PRIMARY_STATE_UNKNOWN;
};

}   // namespace pneuma