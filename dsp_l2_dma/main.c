#include <ti/devices/msp432p4xx/driverlib/driverlib.h>
#include "msp432_boostxl_init.h"

void processBuffer(uint16_t x[32], uint16_t y[32]) {
    uint16_t i;
    for (i=0; i<16; i++) {
        y[i] = x[i];
    }
}

#include <stdio.h>

int main(void) {
    WDT_A_hold(WDT_A_BASE);

    msp432_boostxl_init_dma(FS_32000_HZ, BOOSTXL_J1_2_IN, BUFLEN_32, processBuffer);
    msp432_boostxl_run();

    return 1;
}
