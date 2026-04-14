@interface PLTimeReferenceSystem : PLTimeReferenceDynamic

- (void)dealloc;
- (id)currentTime;
- (void)registerForClockSetNotification;
- (void)dayChangedNotificationReceived:(id)a0;
- (void)registerForDayChangedNotification;
- (void)registerForTimeChangedNotification;
- (void)registerForTimeZoneChangedNotification;
- (void)timeChangedToMidnightLocalTime;
- (void)timeZoneChangedNotificationReceived:(id)a0;

@end
