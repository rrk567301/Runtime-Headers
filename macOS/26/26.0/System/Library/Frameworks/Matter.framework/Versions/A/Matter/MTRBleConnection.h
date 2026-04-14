@class CBCentralManager, NSMutableDictionary, CBPeripheral, NSString, CBUUID, NSObject, NSNumber;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface MTRBleConnection : NSObject <CBCentralManagerDelegate, CBPeripheralDelegate> {
    CBUUID *_chipServiceUUID;
}

@property (readonly, nonatomic) int totalDevicesAdded;
@property (readonly, nonatomic) int totalDevicesRemoved;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) CBCentralManager *centralManager;
@property (retain, nonatomic) CBPeripheral *peripheral;
@property (retain, nonatomic) NSNumber *matchedLongDiscriminator;
@property (readonly, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (readonly, nonatomic) unsigned char currentMode;
@property (retain, nonatomic) NSMutableDictionary *cachedPeripherals;
@property (nonatomic) BOOL found;
@property (nonatomic) struct vector<chip::SetupDiscriminator, std::allocator<chip::SetupDiscriminator>> { struct SetupDiscriminator *__begin_; struct SetupDiscriminator *__end_; struct SetupDiscriminator *__cap_; } desiredDiscriminators;
@property (nonatomic) void *appState;
@property (nonatomic) void /* function */ *onConnectionComplete;
@property (nonatomic) void /* function */ *onConnectionCompleteWithDiscriminator;
@property (nonatomic) void /* function */ *onConnectionError;
@property (nonatomic) struct BleScannerDelegate { void /* function */ **x0; } *scannerDelegate;
@property (nonatomic) struct BleLayer { int x0; void *x1; struct BleLayerDelegate *x2; struct BleConnectionDelegate *x3; struct BlePlatformDelegate *x4; struct BleApplicationDelegate *x5; struct Layer *x6; } *bleLayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clearTimer;
- (void)start;
- (void)startScanning;
- (void)stop;
- (void)stopScanning;
- (void)centralManager:(id)a0 didDiscoverPeripheral:(id)a1 advertisementData:(id)a2 RSSI:(id)a3;
- (id)init;
- (void)centralManager:(id)a0 didConnectPeripheral:(id)a1;
- (void)centralManagerDidUpdateState:(id)a0;
- (id).cxx_construct;
- (void)_resetCounters;
- (BOOL)isConnecting;
- (void).cxx_destruct;
- (void)peripheral:(id)a0 didDiscoverServices:(id)a1;
- (void)peripheral:(id)a0 didDiscoverCharacteristicsForService:(id)a1 error:(id)a2;
- (void)peripheral:(id)a0 didUpdateNotificationStateForCharacteristic:(id)a1 error:(id)a2;
- (void)peripheral:(id)a0 didUpdateValueForCharacteristic:(id)a1 error:(id)a2;
- (void)peripheral:(id)a0 didWriteValueForCharacteristic:(id)a1 error:(id)a2;
- (void)updateWithPeripheral:(id)a0;
- (void)addPeripheralToCache:(id)a0 data:(id)a1;
- (BOOL)checkDiscriminator:(unsigned short)a0;
- (void)clearConnectionCallbacks;
- (void)connect:(id)a0 withLongDiscriminator:(id)a1;
- (void)detachScannerDelegate;
- (void)dispatchConnectionComplete:(id)a0;
- (void)dispatchConnectionError:(struct ChipError { unsigned int x0; char *x1; unsigned int x2; })a0;
- (id)initWithDelegate:(struct BleScannerDelegate { void /* function */ **x0; } *)a0 prewarm:(BOOL)a1;
- (id)initWithDiscriminators:(const void *)a0;
- (void)removePeripheralFromCache:(id)a0;
- (void)removePeripheralsFromCache;
- (void)setupTimer:(unsigned long long)a0;
- (void)updateWithDelegate:(struct BleScannerDelegate { void /* function */ **x0; } *)a0 prewarm:(BOOL)a1;
- (void)updateWithDiscriminators:(const void *)a0;

@end
