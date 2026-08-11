#include "pxt.h"

static volatile int medalCount = 0;

// 割り込みハンドラ（P0立ち上がり）
void onP0Rise(MicroBitEvent e) {
    medalCount++;
}

// TypeScript から呼び出す関数
//%
int medalCountNative() {
    return medalCount;
}

// 初期化関数
//%
void initNative() {
    uBit.messageBus.listen(MICROBIT_ID_IO_P0, MICROBIT_PIN_EVT_RISE, onP0Rise);
}
