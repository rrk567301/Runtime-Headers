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

+ (id)entryEventBackwardWakeupVSE;
+ (id)entryEventNoneDefinitions;
+ (void)load;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventBackwardDefinitionDetailedPowerProfileStats;
+ (BOOL)areBluetooth5GAndThreadRadioLoggingEnabled;
+ (id)getBluetooth5GKeys;
+ (id)entryEventPointDefinitionMagnet;
+ (id)entryEventBackwardDefinitionThreadRadioPowerProfileStats;
+ (id)entryEventBackwardDefinitionPowerProfileStats;
+ (id)getScanCoreKeys;
+ (BOOL)shouldLogEnhancedStatsPerCore;
+ (BOOL)shouldLogMarconi;
+ (id)entryAggregateDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventBackwardDefinitionEnhancedPowerProfileStats;
+ (id)entryEventPointDefinitionMagnetOperation;
+ (id)entryEventBackwardDefinitionMaxDutyCycle;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)defaults;
+ (BOOL)shouldLogEnhancedStats;

- (void)logEventIntervalLeConnectedDevices:(id)a0 withRequest:(BOOL)a1;
- (void)log;
- (void)modelBluetoothPower:(id)a0;
- (BOOL)isConnected;
- (void)logPairedDevicesOSX:(id)a0;
- (id)init;
- (void)logDeviceStateOSX:(id)a0;
- (void)initOperatorDependancies;
- (void)logEventBackwardCBDiscovery:(id)a0;
- (BOOL)modulePowered;
- (BOOL)isDiscoverable;
- (void)refreshBTPairedDevices;
- (void)logEventIntervalWakeVSE:(id)a0;
- (void).cxx_destruct;
- (void)logEventForwardPairedDevices;
- (void)modelBluetoothOffPower;
- (void)btDeviceConnectionNotification:(id)a0 forDevice:(id)a1;
- (void)logEventIntervalConnectedDevices;
- (void)dealloc;
- (BOOL)isConnectable;
- (void)logEventBackwardWirelessProximity:(id)a0;
- (void)logEventIntervalHCIRawData:(id)a0;
- (void)logwithBTOnCheck;
- (void)logEventBackwardPowerProfileStats;
- (id)getCurrentPairedBTDevices;
- (void)logEventForwardDeviceState;
- (void)refreshBTPairedDevicesWithNewDevices:(id)a0;
- (void)receivedBTStatusUpdateOSX:(id)a0;
- (id)advertisingDataDescription:(const char *)a0 :(unsigned long long)a1;
- (void)logConnectedDevicesOSX:(id)a0;

@end
