@interface SYDUserNotifications : NSObject

+ (id)userNotificationCenter;
+ (id)queue;
+ (void)requestAuthorizationIfNecessary;
+ (BOOL)shouldShowNotifications;
+ (void)showNotificationWithTitle:(id)a0 body:(id)a1 threadIdentifier:(id)a2;
+ (void)showUserNotificationIfEnabledForStoreIdentifier:(id)a0 format:(id)a1;

@end
