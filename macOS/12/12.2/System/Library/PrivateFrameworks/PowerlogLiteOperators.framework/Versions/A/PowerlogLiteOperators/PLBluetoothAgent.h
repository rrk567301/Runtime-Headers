@class NSArray, NSSet, PLEntryNotificationOperatorComposition, NSDate, IOBluetoothUserNotification, IOBluetoothHostController;

@interface PLBluetoothAgent : PLAgent

@property (retain) PLEntryNotificationOperatorComposition *batteryLevelChanged;
@property (retain) PLEntryNotificationOperatorComposition *sbcChanged;
@property (readonly) PLEntryNotificationOperatorComposition *wakeEntryNotifications;
@property (retain) NSDate *lastPowerEntryDate;
@property unsigned char logCount;
@property (retain) IOBluetoothHostController *ioBTController;
@property (retain) NSArray *cachedPairedDevices;
@property (retain) NSSet *cachedPairedDevicesAddresses;
@property unsigned char scanState;
@property (retain) IOBluetoothUserNotification *btConnectionNotification;

+ (void)load;
+ (id)defaults;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryAggregateDefinitions;
+ (id)entryEventPointDefinitionMagnet;
+ (id)entryEventPointDefinitionMagnetOperation;
+ (id)getScanCoreKeys;
+ (id)entryEventBackwardDefinitionMaxDutyCycle;
+ (id)entryEventBackwardDefinitionEnhancedPowerProfileStats;
+ (BOOL)shouldLogEnhancedStats;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isConnected;
- (void)log;
- (BOOL)isDiscoverable;
- (void)initOperatorDependancies;
- (BOOL)isConnectable;
- (void)btDeviceConnectionNotification:(id)a0 forDevice:(id)a1;
- (void)logConnectedDevicesOSX:(id)a0;
- (void)logPairedDevicesOSX:(id)a0;
- (void)logDeviceStateOSX:(id)a0;
- (void)receivedBTStatusUpdateOSX:(id)a0;
- (void)logwithBTOnCheck;
- (void)logEventIntervalConnectedDevices;
- (void)logEventForwardDeviceState;
- (BOOL)modulePowered;
- (void)modelBluetoothOffPower;
- (void)refreshBTPairedDevicesWithNewDevices:(id)a0;
- (id)getCurrentPairedBTDevices;
- (void)logEventForwardPairedDevices;
- (void)refreshBTPairedDevices;
- (void)logEventIntervalLeConnectedDevices:(id)a0 withRequest:(BOOL)a1;
- (void)logEventIntervalHCIRawData:(id)a0;
- (id)advertisingDataDescription:(const char *)a0 :(unsigned long long)a1;
- (void)logEventIntervalWakeVSE:(id)a0;
- (void)logEventBackwardPowerProfileStats;
- (void)logEventBackwardWirelessProximity:(id)a0;
- (void)modelBluetoothPower:(id)a0;

@end
