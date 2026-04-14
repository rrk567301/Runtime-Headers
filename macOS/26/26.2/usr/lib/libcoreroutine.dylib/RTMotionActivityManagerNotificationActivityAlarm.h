@interface RTMotionActivityManagerNotificationActivityAlarm : RTNotification

@property (readonly, nonatomic) long long trigger;

- (id)initWithActivityAlarmTrigger:(long long)a0;
- (id)description;
- (id)init;

@end
