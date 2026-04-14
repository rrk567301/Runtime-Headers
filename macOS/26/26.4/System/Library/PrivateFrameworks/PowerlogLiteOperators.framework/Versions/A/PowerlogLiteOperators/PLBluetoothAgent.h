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

+ (id)defaults;
+ (id)entryEventBackwardDefinitionMaxDutyCycle;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventBackwardDefinitionPowerProfileStats;
+ (BOOL)shouldLogMarconi;
+ (id)entryEventNoneDefinitions;
+ (id)getScanCoreKeys;
+ (id)entryEventPointDefinitionMagnetOperation;
+ (id)entryEventBackwardWakeupVSE;
+ (void)load;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventBackwardDefinitionThreadRadioPowerProfileStats;
+ (BOOL)shouldLogEnhancedStatsPerCore;
+ (id)entryAggregateDefinitions;
+ (id)entryEventPointDefinitionMagnet;
+ (BOOL)isEnabled;
+ (BOOL)areBluetooth5GAndThreadRadioLoggingEnabled;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventBackwardDefinitionEnhancedPowerProfileStats;
+ (id)entryEventBackwardDefinitionDetailedPowerProfileStats;
+ (id)getBluetooth5GKeys;
+ (BOOL)shouldLogEnhancedStats;

- (void)initOperatorDependancies;
- (void)log;
- (void)logEventIntervalLeConnectedDevices:(id)a0 withRequest:(BOOL)a1;
- (void)refreshBTPairedDevicesWithNewDevices:(id)a0;
- (void)modelBluetoothPower:(id)a0;
- (void)logEventBackwardWirelessProximity:(id)a0;
- (BOOL)isConnected;
- (void)logEventBackwardPowerProfileStats;
- (void)btDeviceConnectionNotification:(id)a0 forDevice:(id)a1;
- (void)logEventIntervalConnectedDevices;
- (void)modelBluetoothOffPower;
- (void)logEventForwardDeviceState;
- (BOOL)modulePowered;
- (void)logEventIntervalHCIRawData:(id)a0;
- (BOOL)isConnectable;
- (void)logConnectedDevicesOSX:(id)a0;
- (void)receivedBTStatusUpdateOSX:(id)a0;
- (void).cxx_destruct;
- (BOOL)isDiscoverable;
- (id)init;
- (void)refreshBTPairedDevices;
- (void)logwithBTOnCheck;
- (id)getCurrentPairedBTDevices;
- (void)logPairedDevicesOSX:(id)a0;
- (void)logEventForwardPairedDevices;
- (void)logDeviceStateOSX:(id)a0;
- (id)advertisingDataDescription:(const char *)a0 :(unsigned long long)a1;
- (void)logEventIntervalWakeVSE:(id)a0;
- (void)dealloc;
- (void)logEventBackwardCBDiscovery:(id)a0;

@end
