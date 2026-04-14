@class IOBluetoothUserNotification, NSArray, NSSet, PLXPCListenerOperatorComposition, NSDate, PLEntryNotificationOperatorComposition, IOBluetoothHostController;

@interface PLBluetoothAgent : PLAgent

@property (retain) PLEntryNotificationOperatorComposition *batteryLevelChanged;
@property (retain) PLEntryNotificationOperatorComposition *sbcChanged;
@property (retain) PLXPCListenerOperatorComposition *btHCIVSEListener;
@property (readonly) PLEntryNotificationOperatorComposition *wakeEntryNotifications;
@property (retain) NSDate *lastPowerEntryDate;
@property unsigned char logCount;
@property (retain) IOBluetoothHostController *ioBTController;
@property (retain) NSArray *cachedPairedDevices;
@property (retain) NSSet *cachedPairedDevicesAddresses;
@property unsigned char scanState;
@property (retain) IOBluetoothUserNotification *btConnectionNotification;

+ (void)load;
+ (BOOL)areBluetooth5GAndThreadRadioLoggingEnabled;
+ (id)entryEventBackwardDefinitionDetailedPowerProfileStats;
+ (BOOL)shouldLogEnhancedStatsPerCore;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventBackwardDefinitionPowerProfileStats;
+ (id)entryEventBackwardDefinitionThreadRadioPowerProfileStats;
+ (id)entryEventForwardDefinitions;
+ (BOOL)shouldLogEnhancedStats;
+ (id)entryEventNoneDefinitions;
+ (id)defaults;
+ (BOOL)shouldLogMarconi;
+ (id)entryEventBackwardWakeupVSE;
+ (id)getBluetooth5GKeys;
+ (id)entryEventPointDefinitionMagnet;
+ (id)getScanCoreKeys;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventBackwardDefinitionEnhancedPowerProfileStats;
+ (id)entryEventPointDefinitionMagnetOperation;
+ (id)entryEventPointDefinitions;
+ (id)entryEventBackwardDefinitionMaxDutyCycle;
+ (id)entryAggregateDefinitions;

- (void)initOperatorDependancies;
- (id)advertisingDataDescription:(const char *)a0 :(unsigned long long)a1;
- (void)refreshBTPairedDevices;
- (void)modelBluetoothPower:(id)a0;
- (BOOL)isConnected;
- (void)dealloc;
- (void)log;
- (void)logEventForwardDeviceState;
- (void)btDeviceConnectionNotification:(id)a0 forDevice:(id)a1;
- (void)modelBluetoothOffPower;
- (void)logEventBackwardPowerProfileStats;
- (id)init;
- (void)logEventIntervalLeConnectedDevices:(id)a0 withRequest:(BOOL)a1;
- (void)logPairedDevicesOSX:(id)a0;
- (void)logEventIntervalConnectedDevices;
- (void)refreshBTPairedDevicesWithNewDevices:(id)a0;
- (void)logDeviceStateOSX:(id)a0;
- (void)logEventBackwardCBDiscovery:(id)a0;
- (void)logConnectedDevicesOSX:(id)a0;
- (BOOL)modulePowered;
- (void)logEventIntervalWakeVSE:(id)a0;
- (void)logEventIntervalHCIRawData:(id)a0;
- (BOOL)isDiscoverable;
- (BOOL)isConnectable;
- (void)logEventBackwardWirelessProximity:(id)a0;
- (void)logEventForwardPairedDevices;
- (void)receivedBTStatusUpdateOSX:(id)a0;
- (void)logwithBTOnCheck;
- (void).cxx_destruct;
- (id)getCurrentPairedBTDevices;

@end
