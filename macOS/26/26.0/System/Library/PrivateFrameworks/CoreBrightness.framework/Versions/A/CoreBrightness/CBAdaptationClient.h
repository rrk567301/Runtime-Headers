@class NSObject, BrightnessSystemClient;
@protocol OS_dispatch_queue, OS_os_log;

@interface CBAdaptationClient : NSObject {
    BrightnessSystemClient *bsc;
    BOOL ownsClient;
    int _mode;
    BOOL _modeSet;
    id /* block */ _notificationBlock;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSObject<OS_os_log> *_logHandle;
}

@property BOOL supported;

+ (BOOL)supportsAdaptation;

- (int)getAdaptationMode;
- (BOOL)animateFromWeakestAdaptationModeInArray:(int *)a0 withLength:(int)a1 toWeakestInArray:(int *)a2 withLength:(int)a3 withProgress:(float)a4 andPeriod:(float)a5;
- (void)dealloc;
- (BOOL)overrideStrengths:(float *)a0 forModes:(int *)a1 nModes:(int)a2;
- (BOOL)setEnabled:(BOOL)a0;
- (void)unregisterNotificationForType:(unsigned long long)a0;
- (BOOL)setAdaptationMode:(int)a0 withPeriod:(float)a1;
- (BOOL)getEnabled;
- (id)init;
- (BOOL)registerNotificationCallbackBlock:(id /* block */)a0 withQueue:(id)a1;
- (id)initWithClientObj:(id)a0;
- (BOOL)registerNotificationForType:(unsigned long long)a0;
- (BOOL)getStrengths:(float *)a0 nStrengths:(int)a1;
- (void)unregisterNotificationCallbackBlock;
- (BOOL)setWeakestAdaptationModeFromArray:(int *)a0 withLength:(int)a1 andPeriod:(float)a2;
- (void)handleBrightnessSystemNotificationForKey:(id)a0 withValue:(id)a1;
- (BOOL)available;

@end
