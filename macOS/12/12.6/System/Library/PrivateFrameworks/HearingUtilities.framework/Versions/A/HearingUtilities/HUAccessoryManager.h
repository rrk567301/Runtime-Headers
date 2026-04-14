@class CBCentralManager, NSArray, NSMutableDictionary, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface HUAccessoryManager : NSObject <CBCentralManagerDelegate, CBPeripheralDelegate> {
    BOOL _centralIsOn;
    BOOL _bluetoothAvailable;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _syncLock;
}

@property (retain, nonatomic) CBCentralManager *centralManager;
@property (retain, nonatomic) NSArray *peripherals;
@property (retain, nonatomic) NSMutableDictionary *uuidToAddress;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *bluetoothCentralQueue;
@property (retain, nonatomic) NSMutableDictionary *loggingUpdates;
@property (retain, nonatomic) NSMutableDictionary *updateUpdates;
@property (retain, nonatomic) NSMutableDictionary *discoveryUpdates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)logMessage:(id)a0;
- (void)centralManagerDidUpdateState:(id)a0;
- (void)centralManager:(id)a0 didConnectPeripheral:(id)a1;
- (void)centralManager:(id)a0 connectionEventDidOccur:(long long)a1 forPeripheral:(id)a2;
- (void)peripheral:(id)a0 didDiscoverServices:(id)a1;
- (void)peripheral:(id)a0 didDiscoverCharacteristicsForService:(id)a1 error:(id)a2;
- (void)peripheral:(id)a0 didUpdateValueForCharacteristic:(id)a1 error:(id)a2;
- (void)peripheral:(id)a0 didWriteValueForCharacteristic:(id)a1 error:(id)a2;
- (id)sharedQueue;
- (void)discoverAccessories;
- (void)registerLoggingBlock:(id /* block */)a0 withListener:(id)a1;
- (void)registerDiscoveryBlock:(id /* block */)a0 withListener:(id)a1;
- (void)registerUpdateBlock:(id /* block */)a0 withListener:(id)a1;
- (void)updateBluetoothAvailability;
- (void)bluetoothAvailabilityDidChange:(id)a0;
- (id)availableAddresses;
- (void)readValueForCharacteristicUUID:(id)a0;
- (void)writeValue:(id)a0 forCharacteristicUUID:(id)a1 andAddress:(id)a2;
- (id)characteristicWithUUID:(id)a0 forPeripheral:(id)a1;

@end
