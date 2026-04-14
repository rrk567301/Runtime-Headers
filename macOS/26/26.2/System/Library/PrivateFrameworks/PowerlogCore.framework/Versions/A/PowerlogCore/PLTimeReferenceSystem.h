@interface PLTimeReferenceSystem : PLTimeReferenceDynamic

- (void)registerForTimeZoneChangedNotification;
- (void)registerForDayChangedNotification;
- (id)currentTime;
- (void)registerForTimeChangedNotification;
- (void)registerForClockSetNotification;
- (void)dayChangedNotificationReceived:(id)a0;
- (void)timeChangedToMidnightLocalTime;
- (void)dealloc;
- (void)timeZoneChangedNotificationReceived:(id)a0;

@end
