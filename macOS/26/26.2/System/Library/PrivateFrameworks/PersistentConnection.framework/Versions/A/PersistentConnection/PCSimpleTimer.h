@class NSString, PCDispatchTimer, NSDate, NSRunLoop, NSObject;
@protocol OS_dispatch_queue;

@interface PCSimpleTimer : NSObject {
    double _fireTime;
    double _startTime;
    double _lastUpdateTime;
    double _earlyFireDelta;
    BOOL _triggerOnGMTChange;
    NSDate *_scheduledWakeDate;
    NSString *_serviceIdentifier;
    id _target;
    SEL _selector;
    id _userInfo;
    BOOL _userVisible;
    PCDispatchTimer *_preventSleepTimer;
    PCDispatchTimer *_fireTimer;
    BOOL _sleepIsImminent;
    unsigned int _powerAssertionID;
    id _timeChangeSource;
    NSRunLoop *_timerRunLoop;
    NSString *_timerMode;
    int _significantTimeChangeToken;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (nonatomic) BOOL disableSystemWaking;
@property (nonatomic, getter=isUserVisible) BOOL userVisible;

+ (double)currentMachTimeInterval;
+ (id)lastSystemWakeDate;

- (void)invalidate;
- (id)initWithFireDate:(id)a0 serviceIdentifier:(id)a1 target:(id)a2 selector:(SEL)a3 userInfo:(id)a4;
- (id)initWithTimeInterval:(double)a0 serviceIdentifier:(id)a1 target:(id)a2 selector:(SEL)a3 userInfo:(id)a4;
- (void)_setSignificantTimeChangeMonitoringEnabled:(BOOL)a0;
- (void)_preventSleepFired;
- (void)_significantTimeChange;
- (void)_invalidateAllowAsync:(BOOL)a0;
- (BOOL)firingIsImminent;
- (id)_getTimerRunLoop;
- (id)debugDescription;
- (void)_fireTimerFired;
- (void)updateFireTime:(double)a0 triggerOnGMTChange:(BOOL)a1;
- (id)userInfo;
- (void).cxx_destruct;
- (void)scheduleInRunLoop:(id)a0 inMode:(id)a1;
- (BOOL)isValid;
- (void)_powerNotificationSleepIsNotImminent;
- (void)_scheduleTimer;
- (void)_powerNotificationSleepIsImminent;
- (void)_setPowerMonitoringEnabled:(BOOL)a0;
- (void)scheduleInRunLoop:(id)a0;
- (void)scheduleInQueue:(id)a0;
- (id)_getTimerMode;
- (void)_performBlockOnQueue:(id /* block */)a0;
- (id)initWithAbsoluteTime:(double)a0 serviceIdentifier:(id)a1 target:(id)a2 selector:(SEL)a3 userInfo:(id)a4 triggerOnGMTChange:(BOOL)a5;
- (void)_updateTimers;
- (void)dealloc;

@end
