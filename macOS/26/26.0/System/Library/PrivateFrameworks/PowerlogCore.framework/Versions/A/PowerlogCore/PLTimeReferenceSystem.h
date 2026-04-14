@interface PLTimeReferenceSystem : PLTimeReferenceDynamic

- (void)dayChangedNotificationReceived:(id)a0;
- (void)dealloc;
- (void)timeChangedToMidnightLocalTime;
- (id)currentTime;
- (void)registerForTimeZoneChangedNotification;
- (void)registerForTimeChangedNotification;
- (void)registerForDayChangedNotification;
- (void)registerForClockSetNotification;
- (void)timeZoneChangedNotificationReceived:(id)a0;

@end
