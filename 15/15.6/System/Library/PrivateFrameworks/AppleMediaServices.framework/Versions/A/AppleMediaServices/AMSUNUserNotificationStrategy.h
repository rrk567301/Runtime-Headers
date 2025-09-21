@interface AMSUNUserNotificationStrategy : NSObject <AMSUserNotificationStrategy>

+ (char)_badgeBundleId:(id)a0 increment:(char)a1 error:(id *)a2;
+ (id)_activeNotificationsWithCenterBundleId:(id)a0;
+ (id)_centerForBundleId:(id)a0;
+ (id)_postNotification:(id)a0 bag:(id)a1 centerBundleId:(id)a2;
+ (id)_removeNotification:(id)a0 centerBundleId:(id)a1;
+ (id)_removeNotificationWithIdentifier:(id)a0 centerBundleId:(id)a1 logKey:(id)a2 scheduledOnly:(char)a3;

@end
