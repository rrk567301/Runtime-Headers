@class NSTimer;

@interface CUIKTodayInvalidationTimerWrapper : NSObject {
    NSTimer *_tzSupportDayRolloverTimer;
}

- (void).cxx_destruct;
- (id)initWithCalendar:(id)a0;
- (void)dealloc;
- (void)_killTimeZoneTimer;
- (void)_setupTimeZoneTimerWithCalendar:(id)a0;
- (void)invalidateTodayAndNotifyIfChanged;
- (BOOL)todayChangedAfterInvalidation;

@end
