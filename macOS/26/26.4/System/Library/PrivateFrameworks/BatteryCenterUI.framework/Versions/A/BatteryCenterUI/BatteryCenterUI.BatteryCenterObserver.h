@interface BatteryCenterUI.BatteryCenterObserver : NSObject <BCBatteryDeviceObserving> {
    void /* unknown type, empty encoding */ dispatchQueue;
    void /* unknown type, empty encoding */ batteryController;
    void /* unknown type, empty encoding */ subject;
}

- (void).cxx_destruct;
- (id)init;
- (void)connectedDevicesDidChange:(id)a0;

@end
