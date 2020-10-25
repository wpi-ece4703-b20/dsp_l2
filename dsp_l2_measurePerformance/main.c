#include <ti/devices/msp432p4xx/driverlib/driverlib.h>
#include "msp432_boostxl_init.h"

uint16_t processSample(uint16_t x) {
    __delay_cycles(1800);
    return x*x;
}

#include <stdio.h>

int main(void) {
    WDT_A_hold(WDT_A_BASE);

    uint32_t c = measurePerfSample(processSample);
    printf("Perf processSampleDirectFolded: %d\n", c);

    return 1;
}
