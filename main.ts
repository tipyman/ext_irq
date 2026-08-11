namespace ext_irq {
    //% block="get medal count"
    export function getMedalCount(): number {
        return medalCountNative();
    }

    //% block="init irq"
    export function init() {
        initNative();
    }
}
