@interface PLTimeReferenceSystem : PLTimeReferenceDynamic

- (void)registerForTimeZoneChangedNotification;
- (void)registerForDayChangedNotification;
- (id)currentTime;
- (void)dayChangedNotificationReceived:(id)a0;
- (void)timeChangedToMidnightLocalTime;
- (void)timeZoneChangedNotificationReceived:(id)a0;
- (void)dealloc;
- (void)registerForClockSetNotification;
- (void)registerForTimeChangedNotification;

@end
