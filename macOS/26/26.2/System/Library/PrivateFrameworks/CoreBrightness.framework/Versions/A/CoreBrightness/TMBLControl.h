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

- (void)openSKLClient;
- (void)displayLogicalStateUpdate:(long long)a0;
- (void)handleSkyLightOnline;
- (void)clearDisplaySet;
- (void)stop;
- (BOOL)setPropertyWithSimpleKey:(id)a0 property:(id)a1 client:(id)a2;
- (BOOL)setInternalPropertyWithKey:(id)a0 property:(id)a1;
- (void)closeSKLClient;
- (void)handleSkyLightOffline;
- (BOOL)_setPropertyWithKey:(id)a0 property:(id)a1 client:(id)a2;
- (BOOL)start;
- (id)copyPropertyWithKey:(id)a0 client:(id)a1;
- (id)copyPropertyWithSimpleKey:(id)a0 client:(id)a1;
- (void)callBlockWithProperty:(id)a0 value:(id)a1;
- (id)copyDisplayInfo;
- (id)copyIdentifiers;
- (void)displayPowerStateUpdate:(unsigned char)a0;
- (BOOL)setPropertyWithKey:(id)a0 property:(id)a1 client:(id)a2;
- (id)copyPropertyInternalForKey:(id)a0;
- (void)handleSKLClientNotificationWithType:(unsigned long long)a0 andPayload:(id)a1;
- (id)init;
- (id)copyStatusInfo;
- (void)registerNotificationBlock:(id /* block */)a0;
- (id)copyDisplayList;
- (void)dealloc;
- (BOOL)addDisplayModuleForBrightnessControl:(id)a0;
- (BOOL)addDisplayModuleForBrightnessControlProxy:(id)a0;
- (BOOL)handleDisplayModeUpdatePropertyHandler:(id)a0;
- (void)handleNotificationInternalForKey:(id)a0 withValue:(id)a1;
- (BOOL)removeDisplayModuleWithID:(int)a0;
- (void)sendNotificationFor:(id)a0 withValue:(id)a1;
- (void)sendSyncNotificationFor:(id)a0 withValue:(id)a1;

@end
