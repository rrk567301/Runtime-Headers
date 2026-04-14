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
+ (BOOL)shouldLogMarconi;
+ (BOOL)areBluetooth5GAndThreadRadioLoggingEnabled;
+ (id)entryEventPointDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventBackwardDefinitionDetailedPowerProfileStats;
+ (id)getScanCoreKeys;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventBackwardWakeupVSE;
+ (id)getBluetooth5GKeys;
+ (id)entryEventPointDefinitionMagnet;
+ (id)entryEventIntervalDefinitions;
+ (id)entryAggregateDefinitions;
+ (id)entryEventPointDefinitionMagnetOperation;
+ (id)entryEventBackwardDefinitionMaxDutyCycle;
+ (id)entryEventBackwardDefinitionThreadRadioPowerProfileStats;
+ (BOOL)shouldLogEnhancedStatsPerCore;
+ (BOOL)shouldLogEnhancedStats;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventBackwardDefinitionEnhancedPowerProfileStats;
+ (id)defaults;
+ (id)entryEventBackwardDefinitionPowerProfileStats;

- (void)initOperatorDependancies;
- (void)refreshBTPairedDevicesWithNewDevices:(id)a0;
- (id)advertisingDataDescription:(const char *)a0 :(unsigned long long)a1;
- (void)logEventBackwardCBDiscovery:(id)a0;
- (void)logEventBackwardWirelessProximity:(id)a0;
- (void)logConnectedDevicesOSX:(id)a0;
- (void)btDeviceConnectionNotification:(id)a0 forDevice:(id)a1;
- (void)logEventBackwardPowerProfileStats;
- (void)logEventIntervalHCIRawData:(id)a0;
- (BOOL)modulePowered;
- (BOOL)isConnectable;
- (void)logPairedDevicesOSX:(id)a0;
- (void)logEventIntervalLeConnectedDevices:(id)a0 withRequest:(BOOL)a1;
- (void)logDeviceStateOSX:(id)a0;
- (void)logEventForwardDeviceState;
- (void)log;
- (BOOL)isConnected;
- (void)logEventIntervalConnectedDevices;
- (void)logEventForwardPairedDevices;
- (void)dealloc;
- (void)logwithBTOnCheck;
- (void)refreshBTPairedDevices;
- (void)logEventIntervalWakeVSE:(id)a0;
- (void).cxx_destruct;
- (void)receivedBTStatusUpdateOSX:(id)a0;
- (BOOL)isDiscoverable;
- (id)getCurrentPairedBTDevices;
- (void)modelBluetoothOffPower;
- (void)modelBluetoothPower:(id)a0;
- (id)init;

@end
