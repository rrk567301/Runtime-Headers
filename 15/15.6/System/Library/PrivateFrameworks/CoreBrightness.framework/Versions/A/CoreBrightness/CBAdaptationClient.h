@class NSObject, BrightnessSystemClient;
@protocol OS_dispatch_queue, OS_os_log;

@interface CBAdaptationClient : NSObject {
    BrightnessSystemClient *bsc;
    char ownsClient;
    int _mode;
    char _modeSet;
    id /* block */ _notificationBlock;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSObject<OS_os_log> *_logHandle;
}

@property char supported;

+ (char)supportsAdaptation;

- (void)dealloc;
- (id)init;
- (char)setEnabled:(char)a0;
- (char)available;
- (char)animateFromWeakestAdaptationModeInArray:(int *)a0 withLength:(int)a1 toWeakestInArray:(int *)a2 withLength:(int)a3 withProgress:(float)a4 andPeriod:(float)a5;
- (int)getAdaptationMode;
- (char)getEnabled;
- (char)getStrengths:(float *)a0 nStrengths:(int)a1;
- (void)handleBrightnessSystemNotificationForKey:(id)a0 withValue:(id)a1;
- (id)initWithClientObj:(id)a0;
- (char)overrideStrengths:(float *)a0 forModes:(int *)a1 nModes:(int)a2;
- (char)registerNotificationCallbackBlock:(id /* block */)a0 withQueue:(id)a1;
- (char)registerNotificationForType:(unsigned long long)a0;
- (char)setAdaptationMode:(int)a0 withPeriod:(float)a1;
- (char)setWeakestAdaptationModeFromArray:(int *)a0 withLength:(int)a1 andPeriod:(float)a2;
- (void)unregisterNotificationCallbackBlock;
- (void)unregisterNotificationForType:(unsigned long long)a0;

@end
