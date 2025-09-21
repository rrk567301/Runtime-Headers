@interface STAppAndWebsiteActivityEnabledUserNotificationContext : STUserNotificationContext

+ (BOOL)supportsSecureCoding;

- (id)notificationBundleIdentifier;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)customizeNotificationContent:(id)a0 withCompletionBlock:(id /* block */)a1;

@end
