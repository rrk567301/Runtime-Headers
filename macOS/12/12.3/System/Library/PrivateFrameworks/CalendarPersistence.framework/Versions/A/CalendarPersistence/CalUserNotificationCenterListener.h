@class NSString;

@interface CalUserNotificationCenterListener : NSObject <NSUserNotificationCenterDelegate, CLLocationManagerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultListener;

- (void)userNotificationCenter:(id)a0 didDeliverNotification:(id)a1;
- (void)userNotificationCenter:(id)a0 didActivateNotification:(id)a1;
- (void)userNotificationCenter:(id)a0 didDismissAlert:(id)a1;
- (void)userNotificationCenter:(id)a0 didRemoveDeliveredNotifications:(id)a1;
- (void)userNotificationCenter:(id)a0 didExpireNotifications:(id)a1;
- (BOOL)userNotificationCenter:(id)a0 shouldPresentNotification:(id)a1;
- (void)locationManager:(id)a0 didEnterRegion:(id)a1;
- (void)locationManager:(id)a0 didExitRegion:(id)a1;
- (BOOL)_isRemindersNotification:(id)a0;
- (id)_getIntervalForReminderSnoozeNotification:(id)a0;
- (void)dismissNotificationHelper:(id)a0;
- (void)_performAction:(id)a0 forNotification:(id)a1;
- (void)openURLForInfo:(id)a0;
- (void)userNotificationCenter:(id)a0 didSnoozeAlert:(id)a1 withSnoozeInterval:(id)a2;
- (void)userNotificationCenter:(id)a0 didSnoozeAlert:(id)a1 withTriggerDate:(id)a2;
- (void)_userNotificationCenter:(id)a0 didSnoozeAlert:(id)a1 withSnoozeInterval:(id)a2 triggerDate:(id)a3;
- (BOOL)_isRedeliveredSnoozedNotification:(id)a0;

@end
