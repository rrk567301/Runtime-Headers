@class NSDictionary, BMSource, NSObject;
@protocol OS_dispatch_source;

@interface _DKBatteryMonitor : _DKMonitor {
    unsigned int _powerService;
    unsigned int _batteryNotification;
    struct IONotificationPort { } *_notifyPort;
    BMSource *_source;
}

@property (nonatomic) int immediateShutdownThreshold;
@property (nonatomic) BOOL hasInternalBattery;
@property (retain, nonatomic) NSDictionary *previousBatteryState;
@property (nonatomic) double previousPercentage;
@property (nonatomic) BOOL previouslyFullyCharged;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *coalescingTimer;
@property (nonatomic) int percentageChangeToken;
@property (nonatomic) BOOL waiting;

+ (id)_eventWithBatteryPercentage:(double)a0 isFullyCharged:(BOOL)a1;
+ (id)_BMEventWithBatteryPercentage:(double)a0 isFullyCharged:(BOOL)a1;
+ (id)entitlements;
+ (id)eventStream;
+ (void)setCurrentBatteryPercentage:(double)a0;

- (BOOL)fullyCharged:(id)a0 differsFrom:(id)a1;
- (void)synchronouslyReflectCurrentValue;
- (void)start;
- (void)dealloc;
- (BOOL)fullyChargedFromPowerSourceDictionary:(id)a0;
- (void)stop;
- (BOOL)adapterType:(id)a0 differsFrom:(id)a1;
- (BOOL)externalConnected:(id)a0 differsFrom:(id)a1;
- (void)completeStart;
- (void)batteryStateChangeHandler;
- (BOOL)isCharging:(id)a0 differsFrom:(id)a1;
- (BOOL)newBatteryState:(id)a0 differsSignificantlyFromState:(id)a1 currentBatteryPercentage:(double)a2 previousBatteryPercentage:(double)a3;
- (id)getBatteryProperties;
- (double)currentBatteryPercentage;
- (void)_handleBatteryNotification;
- (BOOL)temperature:(id)a0 differsFrom:(id)a1;
- (BOOL)percentage:(double)a0 differsFrom:(double)a1;
- (void)_queue_handleNotification;
- (double)batteryPercentageFromPowerSourceDictionary:(id)a0;
- (void)deactivate;
- (void)_registerIOPSNotifyAttachListener;
- (void)postImminentShutdownNotification:(double)a0;
- (BOOL)voltage:(id)a0 differsFrom:(id)a1;
- (void).cxx_destruct;
- (void)updateBatteryStateDictionary:(id)a0 currentBatteryPercentage:(double)a1;

@end
