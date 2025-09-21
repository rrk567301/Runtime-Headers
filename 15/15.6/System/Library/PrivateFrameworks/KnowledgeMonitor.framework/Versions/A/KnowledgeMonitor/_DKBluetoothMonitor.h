@class BMSource, NSMutableDictionary, NSDictionary, BMPruner, NSString, NSObject, NSLock;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface _DKBluetoothMonitor : _DKMonitor <_DKNotificationReceiver, _DKHistoricalDeletingMonitor> {
    BMSource *_source;
    char _enabled;
}

@property (retain, nonatomic) NSMutableDictionary *activeConnections;
@property (retain, nonatomic) NSMutableDictionary *inactiveConnections;
@property (retain, nonatomic) NSMutableDictionary *previousVendorIDs;
@property (retain, nonatomic) BMPruner *pruner;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *batteryLevelPollingQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *batteryLevelPollingTimer;
@property (retain) NSDictionary *batteryLevels;
@property (retain, nonatomic) NSLock *connectionUpdateLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ historicalDeletingHandler;

+ (id)entitlements;
+ (id)log;
+ (id)eventStream;
+ (int)BMDeviceBluetoothDeviceTypeFromBTDeviceType:(int)a0;
+ (id)_BMEventFromDKEvent:(id)a0 starting:(char)a1 vendorID:(id)a2;
+ (id)_eventWithState:(char)a0 name:(id)a1 address:(id)a2 type:(int)a3 isAppleAudioDevice:(char)a4 isUserWearing:(char)a5 productID:(unsigned int)a6 accessoryBatteryLevels:(id)a7;
+ (id)audioProductsBatteryLevels;
+ (id)contextValueForBluetoothConnectionStatus:(char)a0 name:(id)a1 address:(id)a2 deviceType:(int)a3 isAppleAudioDevice:(char)a4 isUserWearing:(char)a5 productID:(unsigned int)a6;
+ (char)writeToBiome;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (void)deactivate;
- (void)receiveNotificationEvent:(id)a0;
- (id)loadState;
- (void)saveState;
- (char)_inEarStatusForDevice:(id)a0;
- (void)handleUnpairingEvent:(id)a0;
- (void)updateCurrentBatteryLevels;

@end
