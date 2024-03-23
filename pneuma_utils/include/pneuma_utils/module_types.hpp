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
    UNDEFINED = 0,
    CORE,
    IO,
    LIM,
    OUT_OF_RANGE
};
}

}   // namespace