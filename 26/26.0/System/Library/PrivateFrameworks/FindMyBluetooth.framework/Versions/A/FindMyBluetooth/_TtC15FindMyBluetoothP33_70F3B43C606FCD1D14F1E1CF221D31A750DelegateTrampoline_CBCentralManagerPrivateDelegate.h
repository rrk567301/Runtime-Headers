@interface _TtC15FindMyBluetoothP33_70F3B43C606FCD1D14F1E1CF221D31A750DelegateTrampoline_CBCentralManagerPrivateDelegate : NSObject <CBCentralManagerPrivateDelegate> {
    void /* unknown type, empty encoding */ delegateQueue;
    void /* unknown type, empty encoding */ centralManager;
}

- (void)centralManager:(id)a0 didFailToConnectPeripheral:(id)a1 error:(id)a2;
- (void)centralManager:(id)a0 didDiscoverPeripheral:(id)a1 advertisementData:(id)a2 RSSI:(id)a3;
- (id)init;
- (void)centralManager:(id)a0 didConnectPeripheral:(id)a1;
- (void)centralManagerDidUpdateState:(id)a0;
- (void)centralManager:(id)a0 didDisconnectPeripheral:(id)a1 error:(id)a2;
- (void).cxx_destruct;
- (void)centralManager:(id)a0 connectionEventDidOccur:(long long)a1 forPeripheral:(id)a2;

@end
