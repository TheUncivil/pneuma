/*
Author: TheUncivil
Licensed under Apache 2.0
*/

#include "pneuma_core/core.hpp"


namespace pneuma
{

    void core::Core::srv_register(const std::shared_ptr<pneuma_interfaces::srv::Register::Request> request,
        std::shared_ptr<pneuma_interfaces::srv::Register::Response> response)
    {
        if (registered_nodes_.count(request->node_name) == 0)
        {

        }
    }

} // namespace pneuma