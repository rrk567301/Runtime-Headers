@class CBCentralManager, NSString, NSMutableDictionary, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SCROBrailleDisplayAutoDetector : NSObject <CBCentralManagerDelegate, CBPeripheralDelegate> {
    NSObject<OS_dispatch_source> *_serialSource;
    char _isDetectingDisplays;
    struct IONotificationPort { } *_notificationPort;
    NSMutableDictionary *_iteratorDict;
    NSMutableArray *_connectedPeripherals;
    NSMutableArray *_bleIdentifiers;
}

@property (retain) CBCentralManager *centralManager;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)initialize;
+ (id)sharedDetector;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)peripheral:(id)a0 didDiscoverServices:(id)a1;
- (void)centralManager:(id)a0 didConnectPeripheral:(id)a1;
- (void)centralManager:(id)a0 didDisconnectPeripheral:(id)a1 error:(id)a2;
- (void)centralManager:(id)a0 didDiscoverPeripheral:(id)a1 advertisementData:(id)a2 RSSI:(id)a3;
- (void)centralManagerDidUpdateState:(id)a0;
- (void)peripheral:(id)a0 didDiscoverCharacteristicsForService:(id)a1 error:(id)a2;
- (void)peripheral:(id)a0 didUpdateValueForCharacteristic:(id)a1 error:(id)a2;
- (void)_addBLEPeripheral:(id)a0 central:(id)a1;
- (void)_autodetectIOServices:(id)a0;
- (void)_detectSerialPorts:(id)a0;
- (id)_driverBundleIdentifiers;
- (void)_initializeAutodetectSerialPorts:(id)a0;
- (void)_openSerialPortService:(id)a0 sortedDriverBundleIdentifiers:(id)a1;
- (void)_registerForSerialPortNotifications;
- (char)_serialDataMatchesDriver:(id)a0 driverBundleIdentifiers:(id)a1 fileDescriptor:(int)a2;
- (id)_serialPortMatchingDictionary;
- (void)addAutodetectBLEIdentifier:(id)a0;
- (void)detectDisplays;
- (char)isAutoDetectEnabled;
- (void)removeAutodetectBLEIdentifier:(id)a0;
- (void)serialPortsWerePublished:(unsigned int)a0;
- (void)startBLEAutodetect;
- (void)stopDetectingDisplays;

@end
