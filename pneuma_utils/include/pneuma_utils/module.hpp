/*
Author: TheUncivil
Licensed under Apache 2.0
*/

#include <string>
#include <cstdint>

#include "lifecycle_msgs/msg/state.hpp"


namespace pneuma
{

struct module
{
    std::string name;
    uint8_t state = lifecycle_msgs::msg::State::PRIMARY_STATE_UNKNOWN;
};

}   // namespace pneuma