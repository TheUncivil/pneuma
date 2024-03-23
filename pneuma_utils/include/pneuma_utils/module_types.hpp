/*
Author: TheUncivil
Licensed under Apache 2.0
*/

#include <cstdint>


namespace pneuma
{

namespace eModuleType
{
enum eModuleType : uint8_t
{
    CORE = 0,
    IO,
    LIM,
    OUT_OF_RANGE
};
}

}   // namespace