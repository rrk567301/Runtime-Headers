@class NSTimer, FI_TRunAfterHelper, NSDateComponents, NSDate;

@interface FI_TMidnightTimer : NSObject {
    NSTimer *_midnightTimer;
    NSDate *_midnightFireDate;
    NSDateComponents *_dateComponents;
    struct vector<TNotificationCenterObserver, std::allocator<TNotificationCenterObserver>> { struct TNotificationCenterObserver *__begin_; struct TNotificationCenterObserver *__end_; struct TNotificationCenterObserver *__cap_; } _observers;
    struct TNSWeakPtr<FI_TRunAfterHelper> { FI_TRunAfterHelper *fWeakObject; } _checkTimerAndFireDateToken;
}

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)aboutToTearDown;
- (void)_checkTimerAndFireDate;
- (void)_midnightPassed;
- (void)_setUpMidnightTimer;
- (void)_systemTimeChanged;
- (void)checkTimersAfterSleeping:(id)a0;
- (void)postNotificationIfDayChanged;

@end
