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
    // P0をデジタル入力に設定
    uBit.io.P0.setPull(PullNone);
    uBit.io.P0.getDigitalValue();
    // ピンイベントを有効化
    uBit.io.P0.eventOn(DEVICE_PIN_EVENT_ON_EDGE);
    // 立ち上がりイベントを監視
    uBit.messageBus.listen(MICROBIT_ID_IO_P0, MICROBIT_PIN_EVT_RISE, onP0Rise);
}

}
