@interface PLTimeReferenceSystem : PLTimeReferenceDynamic

- (void)timeZoneChangedNotificationReceived:(id)a0;
- (void)dayChangedNotificationReceived:(id)a0;
- (void)registerForTimeZoneChangedNotification;
- (id)currentTime;
- (void)registerForDayChangedNotification;
- (void)registerForTimeChangedNotification;
- (void)registerForClockSetNotification;
- (void)dealloc;
- (void)timeChangedToMidnightLocalTime;

@end
