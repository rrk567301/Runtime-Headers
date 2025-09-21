@class BrightnessSystemClientInternal, NSObject;
@protocol OS_dispatch_queue, OS_os_log;

@interface CBTrueToneClient : NSObject {
    BrightnessSystemClientInternal *_bsci;
    id /* block */ _notificationBlock;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSObject<OS_os_log> *_logHandle;
}

- (BOOL)supported;
- (unsigned long long)mode;
- (void)dealloc;
- (BOOL)setEnabled:(BOOL)a0;
- (void)unregisterNotificationForType:(unsigned long long)a0;
- (BOOL)enabled;
- (id)init;
- (BOOL)registerNotificationCallbackBlock:(id /* block */)a0 withQueue:(id)a1;
- (BOOL)registerNotificationForType:(unsigned long long)a0;
- (void)unregisterNotificationCallbackBlock;
- (void)deactivate;
- (BOOL)setWeakestAdaptationModeFromArray:(unsigned long long *)a0 withLength:(unsigned long long)a1 andPeriod:(float)a2;
- (BOOL)activate;
- (void)handleBrightnessSystemNotificationForKey:(id)a0 withValue:(id)a1;
- (BOOL)available;
- (BOOL)setMode:(unsigned long long)a0 withPeriod:(float)a1;
- (BOOL)supportIntegrated;

@end
