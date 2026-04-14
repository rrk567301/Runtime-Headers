@class NSTimer, NSDateComponents, NSDate, BU_TRunAfterHelper;

@interface BU_TMidnightTimer : NSObject {
    NSTimer *_midnightTimer;
    NSDate *_midnightFireDate;
    NSDateComponents *_dateComponents;
    struct vector<TNotificationCenterObserver, std::allocator<TNotificationCenterObserver>> { struct TNotificationCenterObserver *__begin_; struct TNotificationCenterObserver *__end_; struct { struct TNotificationCenterObserver *__cap_; } ; } _observers;
    struct TNSWeakPtr<BU_TRunAfterHelper> { BU_TRunAfterHelper *fWeakObject; } _checkTimerAndFireDateToken;
}

- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)aboutToTearDown;
- (void)_checkTimerAndFireDate;
- (void)_midnightPassed;
- (void)_setUpMidnightTimer;
- (void)_systemTimeChanged;
- (void)checkTimersAfterSleeping:(id)a0;
- (void)postNotificationIfDayChanged;

@end
