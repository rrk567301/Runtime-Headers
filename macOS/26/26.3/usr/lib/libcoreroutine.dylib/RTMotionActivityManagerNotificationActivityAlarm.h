@interface RTMotionActivityManagerNotificationActivityAlarm : RTNotification

@property (readonly, nonatomic) long long trigger;

- (id)description;
- (id)initWithActivityAlarmTrigger:(long long)a0;
- (id)init;

@end
