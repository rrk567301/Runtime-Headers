@class SLSBrightnessControlClient, NSMutableDictionary, NSObject;
@protocol OS_os_log, OS_dispatch_queue;

@interface TMBLControl : BLControl {
    NSObject<OS_os_log> *_logHandle;
    NSObject<OS_dispatch_queue> *_queue;
    id /* block */ _callback;
    NSMutableDictionary *_displays;
    SLSBrightnessControlClient *_SLSClient;
    long long _displayState;
    unsigned char _displayPowerState;
}

+ (long long)getCBDisplaysLogicalStateForSLSLogicalState:(long long)a0;
+ (unsigned long long)getCBPowerEventForSLSPowerEvent:(unsigned char)a0;

- (BOOL)start;
- (id)copyDisplayList;
- (id)copyPropertyWithSimpleKey:(id)a0 client:(id)a1;
- (void)displayPowerStateUpdate:(unsigned char)a0;
- (id)copyPropertyWithKey:(id)a0 client:(id)a1;
- (id)copyStatusInfo;
- (void)callBlockWithProperty:(id)a0 value:(id)a1;
- (void)displayLogicalStateUpdate:(long long)a0;
- (void)handleSkyLightOffline;
- (BOOL)setPropertyWithSimpleKey:(id)a0 property:(id)a1 client:(id)a2;
- (id)copyDisplayInfo;
- (void)dealloc;
- (BOOL)setPropertyWithKey:(id)a0 property:(id)a1 client:(id)a2;
- (void)handleSkyLightOnline;
- (void)stop;
- (id)copyIdentifiers;
- (void)openSKLClient;
- (BOOL)_setPropertyWithKey:(id)a0 property:(id)a1 client:(id)a2;
- (void)closeSKLClient;
- (BOOL)setInternalPropertyWithKey:(id)a0 property:(id)a1;
- (void)registerNotificationBlock:(id /* block */)a0;
- (void)clearDisplaySet;
- (id)copyPropertyInternalForKey:(id)a0;
- (void)handleSKLClientNotificationWithType:(unsigned long long)a0 andPayload:(id)a1;
- (id)init;
- (BOOL)addDisplayModuleForBrightnessControl:(id)a0;
- (BOOL)addDisplayModuleForBrightnessControlProxy:(id)a0;
- (BOOL)handleDisplayModeUpdatePropertyHandler:(id)a0;
- (void)handleNotificationInternalForKey:(id)a0 withValue:(id)a1;
- (BOOL)removeDisplayModuleWithID:(int)a0;
- (void)sendNotificationFor:(id)a0 withValue:(id)a1;
- (void)sendSyncNotificationFor:(id)a0 withValue:(id)a1;

@end
