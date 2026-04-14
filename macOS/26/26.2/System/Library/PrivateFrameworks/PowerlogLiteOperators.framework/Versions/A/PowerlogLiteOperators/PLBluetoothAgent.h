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

+ (id)entryAggregateDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventForwardDefinitions;
+ (void)load;
+ (BOOL)shouldLogMarconi;
+ (id)defaults;
+ (id)getScanCoreKeys;
+ (id)entryEventBackwardDefinitionThreadRadioPowerProfileStats;
+ (id)entryEventPointDefinitions;
+ (id)entryEventPointDefinitionMagnet;
+ (BOOL)areBluetooth5GAndThreadRadioLoggingEnabled;
+ (id)entryEventPointDefinitionMagnetOperation;
+ (id)entryEventBackwardDefinitionMaxDutyCycle;
+ (BOOL)shouldLogEnhancedStatsPerCore;
+ (id)entryEventBackwardWakeupVSE;
+ (id)entryEventBackwardDefinitionEnhancedPowerProfileStats;
+ (id)getBluetooth5GKeys;
+ (id)entryEventBackwardDefinitionDetailedPowerProfileStats;
+ (id)entryEventBackwardDefinitionPowerProfileStats;
+ (BOOL)shouldLogEnhancedStats;

- (BOOL)isConnected;
- (void)logEventForwardDeviceState;
- (void)initOperatorDependancies;
- (void)receivedBTStatusUpdateOSX:(id)a0;
- (void)logEventIntervalConnectedDevices;
- (void)log;
- (id)getCurrentPairedBTDevices;
- (void)logwithBTOnCheck;
- (void)logEventBackwardWirelessProximity:(id)a0;
- (void)logEventIntervalHCIRawData:(id)a0;
- (void)logEventBackwardPowerProfileStats;
- (void)logEventBackwardCBDiscovery:(id)a0;
- (void)btDeviceConnectionNotification:(id)a0 forDevice:(id)a1;
- (void)modelBluetoothPower:(id)a0;
- (void)logEventForwardPairedDevices;
- (void)logEventIntervalLeConnectedDevices:(id)a0 withRequest:(BOOL)a1;
- (void)modelBluetoothOffPower;
- (void).cxx_destruct;
- (void)refreshBTPairedDevices;
- (void)logEventIntervalWakeVSE:(id)a0;
- (void)logDeviceStateOSX:(id)a0;
- (BOOL)isDiscoverable;
- (void)logConnectedDevicesOSX:(id)a0;
- (BOOL)modulePowered;
- (id)advertisingDataDescription:(const char *)a0 :(unsigned long long)a1;
- (id)init;
- (void)refreshBTPairedDevicesWithNewDevices:(id)a0;
- (void)dealloc;
- (BOOL)isConnectable;
- (void)logPairedDevicesOSX:(id)a0;

@end
