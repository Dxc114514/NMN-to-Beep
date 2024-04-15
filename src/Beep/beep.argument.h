#include <cstdint>


struct beep_argument {
    // beep frequency with uint32_t, unit: Hz
    uint32_t freqency;
    // beep time with with uint32_t, unit: ms
    uint32_t time;
};