@class NSTimer;

@interface CUIKTodayInvalidationTimerWrapper : NSObject {
    NSTimer *_tzSupportDayRolloverTimer;
}

- (id)initWithCalendar:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_killTimeZoneTimer;
- (void)_setupTimeZoneTimerWithCalendar:(id)a0;
- (void)invalidateTodayAndNotifyIfChanged;
- (BOOL)todayChangedAfterInvalidation;

@end
