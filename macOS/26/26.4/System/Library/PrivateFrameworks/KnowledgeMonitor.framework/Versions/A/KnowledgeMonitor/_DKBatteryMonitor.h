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
+ (id)eventStream;
+ (void)setCurrentBatteryPercentage:(double)a0;
+ (id)entitlements;
+ (id)_BMEventWithBatteryPercentage:(double)a0 isFullyCharged:(BOOL)a1;

- (void)stop;
- (void)synchronouslyReflectCurrentValue;
- (BOOL)adapterType:(id)a0 differsFrom:(id)a1;
- (void)postImminentShutdownNotification:(double)a0;
- (void)_handleBatteryNotification;
- (void)batteryStateChangeHandler;
- (void)_queue_handleNotification;
- (void)deactivate;
- (BOOL)externalConnected:(id)a0 differsFrom:(id)a1;
- (void).cxx_destruct;
- (BOOL)fullyCharged:(id)a0 differsFrom:(id)a1;
- (BOOL)percentage:(double)a0 differsFrom:(double)a1;
- (id)getBatteryProperties;
- (BOOL)fullyChargedFromPowerSourceDictionary:(id)a0;
- (void)completeStart;
- (void)start;
- (BOOL)voltage:(id)a0 differsFrom:(id)a1;
- (BOOL)isCharging:(id)a0 differsFrom:(id)a1;
- (double)batteryPercentageFromPowerSourceDictionary:(id)a0;
- (BOOL)newBatteryState:(id)a0 differsSignificantlyFromState:(id)a1 currentBatteryPercentage:(double)a2 previousBatteryPercentage:(double)a3;
- (double)currentBatteryPercentage;
- (void)updateBatteryStateDictionary:(id)a0 currentBatteryPercentage:(double)a1;
- (void)dealloc;
- (BOOL)temperature:(id)a0 differsFrom:(id)a1;
- (void)_registerIOPSNotifyAttachListener;

@end
