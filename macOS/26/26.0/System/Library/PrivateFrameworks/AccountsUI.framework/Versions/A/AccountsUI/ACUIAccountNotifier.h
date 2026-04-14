@class NSUserNotificationCenter;

@interface ACUIAccountNotifier : NSObject

@property (retain) NSUserNotificationCenter *notificationCenter;

+ (id)sharedNotifier;

- (id)init;
- (void)userNotificationCenter:(id)a0 didActivateNotification:(id)a1;
- (void).cxx_destruct;
- (void)_initNotificationCenterIfNeeded;
- (id)_getACUINotificationForAccount:(id)a0;
- (void)dismissNotificationsForAccount:(id)a0;
- (void)postInvalidCredentialNotificationForAccount:(id)a0;
- (void)postNewAddNotificationForAccount:(id)a0;
- (void)postNewMultipleAddNotificationForAccount;
- (void)registerNotificationCenter;

@end
