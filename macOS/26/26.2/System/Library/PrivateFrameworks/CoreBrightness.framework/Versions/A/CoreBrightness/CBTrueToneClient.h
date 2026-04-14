@class BrightnessSystemClientInternal, NSObject;
@protocol OS_dispatch_queue, OS_os_log;

@interface CBTrueToneClient : NSObject {
    BrightnessSystemClientInternal *_bsci;
    id /* block */ _notificationBlock;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSObject<OS_os_log> *_logHandle;
}

- (BOOL)supported;
- (BOOL)available;
- (void)unregisterNotificationForType:(unsigned long long)a0;
- (BOOL)setEnabled:(BOOL)a0;
- (void)unregisterNotificationCallbackBlock;
- (BOOL)activate;
- (void)handleBrightnessSystemNotificationForKey:(id)a0 withValue:(id)a1;
- (BOOL)setWeakestAdaptationModeFromArray:(unsigned long long *)a0 withLength:(unsigned long long)a1 andPeriod:(float)a2;
- (BOOL)registerNotificationForType:(unsigned long long)a0;
- (id)init;
- (BOOL)registerNotificationCallbackBlock:(id /* block */)a0 withQueue:(id)a1;
- (void)deactivate;
- (unsigned long long)mode;
- (BOOL)enabled;
- (void)dealloc;
- (BOOL)setMode:(unsigned long long)a0 withPeriod:(float)a1;
- (BOOL)supportIntegrated;

@end
