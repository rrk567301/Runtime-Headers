@class NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface VCPowerManager : NSObject {
    unsigned int _currentFeatures;
    NSObject<OS_dispatch_queue> *_powerManagerQueue;
    int _thermalNotificationToken;
    NSMutableSet *_thermalDelegates;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    BOOL _forceDisableThermal;
}

@property (readonly, nonatomic) int thermalLevel;
@property (readonly, nonatomic) BOOL lowPowerModeEnabled;
@property (readonly, nonatomic) unsigned char mode;

- (id)autorelease;
- (void)updateLowPowerMode;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)retain;
- (id)init;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)allocWithZone:(struct _NSZone { } *)a0;
- (BOOL)isFeatureEnabled:(unsigned int)a0;
- (void)registerForThermalNotifications;
- (void)deregisterForThermalNotifications;
- (void)didChangeThermalLevel:(int)a0;
- (void)dispatchedSetFeature:(unsigned int)a0 enable:(BOOL)a1;
- (id)featureName:(unsigned int)a0;
- (void)notifyDelegatesDidChangeThermalLevel:(int)a0;
- (void)notifyDelegatesDidEnableLowPowerMode:(BOOL)a0;
- (void)registerForThermalEvents:(id)a0;
- (void)setFeature:(unsigned int)a0 enable:(BOOL)a1;
- (void)unregisterForThermalEvents:(id)a0;
- (void)updateThermalMitigationEnablement;

@end
