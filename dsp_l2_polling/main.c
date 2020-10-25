#include <ti/devices/msp432p4xx/driverlib/driverlib.h>
#include "msp432_boostxl_init.h"

uint16_t processSample(uint16_t x) {
    __delay_cycles(800);
    return x;
}

#include <stdio.h>

int main(void) {
    WDT_A_hold(WDT_A_BASE);

    msp432_boostxl_init_poll(BOOSTXL_J1_2_IN, processSample);
    msp432_boostxl_run();

    return 1;
}
