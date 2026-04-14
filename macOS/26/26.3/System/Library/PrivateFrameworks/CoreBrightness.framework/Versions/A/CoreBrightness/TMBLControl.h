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
- (BOOL)setPropertyWithKey:(id)a0 property:(id)a1 client:(id)a2;
- (void)stop;
- (id)copyIdentifiers;
- (id)init;
- (id)copyDisplayList;
- (void)closeSKLClient;
- (BOOL)setPropertyWithSimpleKey:(id)a0 property:(id)a1 client:(id)a2;
- (void)handleSKLClientNotificationWithType:(unsigned long long)a0 andPayload:(id)a1;
- (void)registerNotificationBlock:(id /* block */)a0;
- (void)handleSkyLightOffline;
- (id)copyPropertyWithKey:(id)a0 client:(id)a1;
- (void)handleSkyLightOnline;
- (id)copyDisplayInfo;
- (BOOL)_setPropertyWithKey:(id)a0 property:(id)a1 client:(id)a2;
- (BOOL)setInternalPropertyWithKey:(id)a0 property:(id)a1;
- (void)dealloc;
- (void)callBlockWithProperty:(id)a0 value:(id)a1;
- (id)copyPropertyInternalForKey:(id)a0;
- (void)displayPowerStateUpdate:(unsigned char)a0;
- (id)copyPropertyWithSimpleKey:(id)a0 client:(id)a1;
- (void)displayLogicalStateUpdate:(long long)a0;
- (void)openSKLClient;
- (id)copyStatusInfo;
- (void)clearDisplaySet;
- (BOOL)addDisplayModuleForBrightnessControl:(id)a0;
- (BOOL)addDisplayModuleForBrightnessControlProxy:(id)a0;
- (BOOL)handleDisplayModeUpdatePropertyHandler:(id)a0;
- (void)handleNotificationInternalForKey:(id)a0 withValue:(id)a1;
- (BOOL)removeDisplayModuleWithID:(int)a0;
- (void)sendNotificationFor:(id)a0 withValue:(id)a1;
- (void)sendSyncNotificationFor:(id)a0 withValue:(id)a1;

@end
