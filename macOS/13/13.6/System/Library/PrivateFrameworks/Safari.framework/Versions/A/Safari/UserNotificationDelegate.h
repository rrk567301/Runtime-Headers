@class NSString;

@interface UserNotificationDelegate : NSObject <_NSUserNotificationCenterDelegatePrivate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerUserNotificationDelegate;

- (void)userNotificationCenter:(id)a0 didActivateNotification:(id)a1;
- (void)userNotificationCenter:(id)a0 didDeliverNotification:(id)a1;
- (void)userNotificationCenter:(id)a0 didDismissAlert:(id)a1;
- (void)userNotificationCenter:(id)a0 didRemoveDeliveredNotifications:(id)a1;
- (BOOL)userNotificationCenter:(id)a0 shouldPresentNotification:(id)a1;

@end
