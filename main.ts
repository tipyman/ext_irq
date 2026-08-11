namespace ext_irq {
    //% block="get medal count"
    //% shim=ext_irq::medalCountNative
    export function getMedalCount(): number {
        return 0;
    }
    //% block="init irq"
    //% shim=ext_irq::initNative
    export function init(): void {
        return;
    }
}
