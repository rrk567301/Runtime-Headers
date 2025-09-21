@class CBCentralManager, NSString, NSTimer, NSMutableArray;
@protocol BTLEConnectionTable;

@interface AMSBTLEConnectionManager : NSObject <CBCentralManagerDelegate, CBPeripheralDelegate> {
    CBCentralManager *centralManager;
    NSMutableArray *connectedBTPeripherals;
    NSMutableArray *connectedAMSPeripherals;
    NSTimer *refreshTimer;
    NSTimer *connectionTimer;
    id<BTLEConnectionTable> controller;
    long long centralState;
    char isAdvertising;
}

@property (readonly) NSMutableArray *peripheralList;
@property char checked32BitStatus;
@property char server32Bit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)startTimer;
- (void)peripheral:(id)a0 didDiscoverServices:(id)a1;
- (long long)bluetoothState;
- (void)centralManager:(id)a0 didConnectPeripheral:(id)a1;
- (void)centralManager:(id)a0 didDisconnectPeripheral:(id)a1 error:(id)a2;
- (void)centralManager:(id)a0 didDiscoverPeripheral:(id)a1 advertisementData:(id)a2 RSSI:(id)a3;
- (void)centralManager:(id)a0 didFailToConnectPeripheral:(id)a1 error:(id)a2;
- (void)centralManagerDidUpdateState:(id)a0;
- (void)peripheral:(id)a0 didDiscoverCharacteristicsForService:(id)a1 error:(id)a2;
- (void)peripheral:(id)a0 didUpdateValueForCharacteristic:(id)a1 error:(id)a2;
- (void)stopScan;
- (void)centralManager:(id)a0 didRetrievePeripherals:(id)a1;
- (void)startScan;
- (unsigned int)midiDeviceForUUID:(id)a0;
- (void)timerFired:(id)a0;
- (id)amsPeripheralForCBPeripheral:(id)a0;
- (void)checkAlreadyConnectedPeripherals;
- (void)connectionTimerFired:(id)a0;
- (void)createPeripheralList;
- (id)get32BitPluginList;
- (id)initWithUIController:(id)a0;
- (char)is32BitPlugin;
- (char)isLECapableHardware;
- (void)killTimer;
- (char)peripheralIsConnectedCentral:(id)a0;
- (void)removeAMSPeripheralForCBPeripheral:(id)a0;
- (void)setUIController:(id)a0;
- (void)updateAdvertisingState:(id)a0;

@end
