@interface RTUserSessionMonitorNotificationConsoleUserDidChange : RTNotification

@property (readonly, nonatomic, getter=activeUser) char activeUser;

- (id)init;
- (id)initWithactiveUser:(char)a0;

@end
