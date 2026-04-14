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

- (BOOL)setWeakestAdaptationModeFromArray:(int *)a0 withLength:(int)a1 andPeriod:(float)a2;
- (BOOL)animateFromWeakestAdaptationModeInArray:(int *)a0 withLength:(int)a1 toWeakestInArray:(int *)a2 withLength:(int)a3 withProgress:(float)a4 andPeriod:(float)a5;
- (BOOL)overrideStrengths:(float *)a0 forModes:(int *)a1 nModes:(int)a2;
- (int)getAdaptationMode;
- (BOOL)setEnabled:(BOOL)a0;
- (id)init;
- (void)unregisterNotificationForType:(unsigned long long)a0;
- (BOOL)setAdaptationMode:(int)a0 withPeriod:(float)a1;
- (BOOL)getEnabled;
- (BOOL)getStrengths:(float *)a0 nStrengths:(int)a1;
- (void)unregisterNotificationCallbackBlock;
- (void)dealloc;
- (void)handleBrightnessSystemNotificationForKey:(id)a0 withValue:(id)a1;
- (BOOL)registerNotificationForType:(unsigned long long)a0;
- (BOOL)available;
- (id)initWithClientObj:(id)a0;
- (BOOL)registerNotificationCallbackBlock:(id /* block */)a0 withQueue:(id)a1;

@end
