@class BrightnessSystemClientInternal, NSObject;
@protocol OS_dispatch_queue, OS_os_log;

@interface CBTrueToneClient : NSObject {
    BrightnessSystemClientInternal *_bsci;
    id /* block */ _notificationBlock;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSObject<OS_os_log> *_logHandle;
}

- (BOOL)setWeakestAdaptationModeFromArray:(unsigned long long *)a0 withLength:(unsigned long long)a1 andPeriod:(float)a2;
- (BOOL)supported;
- (BOOL)enabled;
- (BOOL)setEnabled:(BOOL)a0;
- (id)init;
- (void)unregisterNotificationForType:(unsigned long long)a0;
- (void)unregisterNotificationCallbackBlock;
- (void)dealloc;
- (void)handleBrightnessSystemNotificationForKey:(id)a0 withValue:(id)a1;
- (void)deactivate;
- (BOOL)registerNotificationForType:(unsigned long long)a0;
- (BOOL)activate;
- (unsigned long long)mode;
- (BOOL)available;
- (BOOL)registerNotificationCallbackBlock:(id /* block */)a0 withQueue:(id)a1;
- (BOOL)setMode:(unsigned long long)a0 withPeriod:(float)a1;
- (BOOL)supportIntegrated;

@end
