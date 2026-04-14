@interface PLTimeReferenceSystem : PLTimeReferenceDynamic

- (void)dealloc;
- (id)currentTime;
- (void)registerForTimeChangedNotification;
- (void)registerForClockSetNotification;
- (void)registerForDayChangedNotification;
- (void)registerForTimeZoneChangedNotification;
- (void)dayChangedNotificationReceived:(id)a0;
- (void)timeZoneChangedNotificationReceived:(id)a0;
- (void)timeChangedToMidnightLocalTime;

@end
