@interface PLTimeReferenceSystem : PLTimeReferenceDynamic

- (id)currentTime;
- (void)timeZoneChangedNotificationReceived:(id)a0;
- (void)registerForDayChangedNotification;
- (void)registerForTimeChangedNotification;
- (void)timeChangedToMidnightLocalTime;
- (void)registerForClockSetNotification;
- (void)dealloc;
- (void)registerForTimeZoneChangedNotification;
- (void)dayChangedNotificationReceived:(id)a0;

@end
