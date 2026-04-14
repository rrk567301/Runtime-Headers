@class NSTimer, NSValue, NSDateComponents, NSDate;

@interface BU_TMidnightTimer : NSObject {
    NSTimer *_midnightTimer;
    NSDate *_midnightFireDate;
    NSDateComponents *_dateComponents;
    struct vector<TNotificationCenterObserver, std::allocator<TNotificationCenterObserver>> { struct TNotificationCenterObserver *__begin_; struct TNotificationCenterObserver *__end_; struct __compressed_pair<TNotificationCenterObserver *, std::allocator<TNotificationCenterObserver>> { struct TNotificationCenterObserver *__value_; } __end_cap_; } _observers;
    struct TNSWeakPtr<BU_TRunAfterHelper> { NSValue *fWeakObject; } _checkTimerAndFireDateToken;
}

- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)aboutToTearDown;
- (void)postNotificationIfDayChanged;
- (void)_systemTimeChanged;
- (void)_midnightPassed;
- (void)_setUpMidnightTimer;
- (void)_checkTimerAndFireDate;
- (void)checkTimersAfterSleeping:(id)a0;

@end
