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

- (void)stop;
- (id)copyDisplayList;
- (BOOL)setInternalPropertyWithKey:(id)a0 property:(id)a1;
- (BOOL)setPropertyWithSimpleKey:(id)a0 property:(id)a1 client:(id)a2;
- (BOOL)_setPropertyWithKey:(id)a0 property:(id)a1 client:(id)a2;
- (void)clearDisplaySet;
- (void)callBlockWithProperty:(id)a0 value:(id)a1;
- (void)openSKLClient;
- (void)handleSkyLightOffline;
- (void)displayLogicalStateUpdate:(long long)a0;
- (id)copyPropertyWithKey:(id)a0 client:(id)a1;
- (id)copyIdentifiers;
- (void)closeSKLClient;
- (void)handleSKLClientNotificationWithType:(unsigned long long)a0 andPayload:(id)a1;
- (void)displayPowerStateUpdate:(unsigned char)a0;
- (id)copyStatusInfo;
- (id)copyPropertyWithSimpleKey:(id)a0 client:(id)a1;
- (id)copyPropertyInternalForKey:(id)a0;
- (id)init;
- (BOOL)setPropertyWithKey:(id)a0 property:(id)a1 client:(id)a2;
- (BOOL)start;
- (void)handleSkyLightOnline;
- (id)copyDisplayInfo;
- (void)registerNotificationBlock:(id /* block */)a0;
- (void)dealloc;
- (BOOL)addDisplayModuleForBrightnessControl:(id)a0;
- (BOOL)addDisplayModuleForBrightnessControlProxy:(id)a0;
- (BOOL)handleDisplayModeUpdatePropertyHandler:(id)a0;
- (void)handleNotificationInternalForKey:(id)a0 withValue:(id)a1;
- (BOOL)removeDisplayModuleWithID:(int)a0;
- (void)sendNotificationFor:(id)a0 withValue:(id)a1;
- (void)sendSyncNotificationFor:(id)a0 withValue:(id)a1;

@end
