#include "pxt.h"
namespace ext_irq {
static volatile int medalCount = 0;
void onP0Rise(MicroBitEvent e) {
    medalCount++;
}

//% block="get medal count native"
int medalCountNative() {
    return medalCount;
}

//% block="init irq native"
void initNative() {
    uBit.messageBus.listen(MICROBIT_ID_IO_P0, MICROBIT_PIN_EVT_RISE, onP0Rise);
}
