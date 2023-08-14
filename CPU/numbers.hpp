#include <cstdint>

using byte = std::uint8_t;
using hword = std::uint16_t;
using word = std::uint32_t;

static constexpr hword MEM_SIZE = 2048 * 8;
static constexpr hword BUS_SIZE = 0xFFFF; 