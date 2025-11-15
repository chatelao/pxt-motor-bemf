#include "motor.h"

namespace motor {
    //%
    int sum(int a, int b) {
#if defined(TARGET_NRF51_MICROBIT) || defined(TARGET_NRF52_MICROBIT)
    // TODO: Add micro:bit V1 and V2 specific code.
    // Using default implementation for now.
    // Note: Assumed preprocessor macros.
#elif defined(TARGET_SAMD21_CPX)
    // TODO: Add Adafruit Circuit Playground Express specific code.
    // Using default implementation for now.
    // Note: Assumed preprocessor macro.
#endif
        return a + b;
    }
}
