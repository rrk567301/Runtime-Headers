@interface DistributedNotificationPoster : NSObject

+ (void)postNotificationForAlarmsEdited;
+ (void)postNotificationForAlarmActiveChanged;
+ (void)postNotificationForUserPreferences:(char)a0 localNotifications:(char)a1;

@end
