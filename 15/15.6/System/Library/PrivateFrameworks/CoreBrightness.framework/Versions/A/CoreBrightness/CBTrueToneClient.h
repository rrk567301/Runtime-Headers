@class BrightnessSystemClientInternal, NSObject;
@protocol OS_dispatch_queue, OS_os_log;

@interface CBTrueToneClient : NSObject {
    BrightnessSystemClientInternal *_bsci;
    id /* block */ _notificationBlock;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSObject<OS_os_log> *_logHandle;
}

- (void)dealloc;
- (id)init;
- (char)enabled;
- (char)setEnabled:(char)a0;
- (char)activate;
- (void)deactivate;
- (unsigned long long)mode;
- (char)available;
- (char)supported;
- (void)handleBrightnessSystemNotificationForKey:(id)a0 withValue:(id)a1;
- (char)registerNotificationCallbackBlock:(id /* block */)a0 withQueue:(id)a1;
- (char)registerNotificationForType:(unsigned long long)a0;
- (char)setMode:(unsigned long long)a0 withPeriod:(float)a1;
- (char)setWeakestAdaptationModeFromArray:(unsigned long long *)a0 withLength:(unsigned long long)a1 andPeriod:(float)a2;
- (char)supportIntegrated;
- (void)unregisterNotificationCallbackBlock;
- (void)unregisterNotificationForType:(unsigned long long)a0;

@end
