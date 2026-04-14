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
    BOOL isAdvertising;
}

@property (readonly) NSMutableArray *peripheralList;
@property BOOL checked32BitStatus;
@property BOOL server32Bit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)startTimer;
- (void)stopScan;
- (void)centralManagerDidUpdateState:(id)a0;
- (void)centralManager:(id)a0 didDiscoverPeripheral:(id)a1 advertisementData:(id)a2 RSSI:(id)a3;
- (void)centralManager:(id)a0 didConnectPeripheral:(id)a1;
- (void)centralManager:(id)a0 didFailToConnectPeripheral:(id)a1 error:(id)a2;
- (void)centralManager:(id)a0 didDisconnectPeripheral:(id)a1 error:(id)a2;
- (void)peripheral:(id)a0 didDiscoverServices:(id)a1;
- (void)peripheral:(id)a0 didDiscoverCharacteristicsForService:(id)a1 error:(id)a2;
- (void)peripheral:(id)a0 didUpdateValueForCharacteristic:(id)a1 error:(id)a2;
- (long long)bluetoothState;
- (void)centralManager:(id)a0 didRetrievePeripherals:(id)a1;
- (void)startScan;
- (unsigned int)midiDeviceForUUID:(id)a0;
- (void)timerFired:(id)a0;
- (void)updateAdvertisingState:(id)a0;
- (void)connectionTimerFired:(id)a0;
- (id)initWithUIController:(id)a0;
- (void)setUIController:(id)a0;
- (void)createPeripheralList;
- (void)checkAlreadyConnectedPeripherals;
- (BOOL)isLECapableHardware;
- (void)killTimer;
- (id)amsPeripheralForCBPeripheral:(id)a0;
- (void)removeAMSPeripheralForCBPeripheral:(id)a0;
- (BOOL)peripheralIsConnectedCentral:(id)a0;
- (BOOL)is32BitPlugin;
- (id)get32BitPluginList;

@end
