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
+ (id)entryEventBackwardDefinitionMaxDutyCycle;
+ (id)entryEventBackwardDefinitionEnhancedPowerProfileStats;
+ (id)getScanCoreKeys;
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
- (BOOL)modulePowered;
- (void)logwithBTOnCheck;
- (void)logEventForwardDeviceState;
- (void)logEventForwardPairedDevices;
- (void)logEventIntervalLeConnectedDevices:(id)a0 withRequest:(BOOL)a1;
- (void)logEventIntervalHCIRawData:(id)a0;
- (id)advertisingDataDescription:(const char *)a0 :(unsigned long long)a1;
- (void)logEventIntervalWakeVSE:(id)a0;
- (void)logEventIntervalConnectedDevices;
- (void)logEventBackwardPowerProfileStats;
- (void)logEventBackwardWirelessProximity:(id)a0;
- (void)modelBluetoothPower:(id)a0;
- (void)modelBluetoothOffPower;
- (id)getCurrentPairedBTDevices;
- (void)refreshBTPairedDevicesWithNewDevices:(id)a0;
- (void)refreshBTPairedDevices;

@end
