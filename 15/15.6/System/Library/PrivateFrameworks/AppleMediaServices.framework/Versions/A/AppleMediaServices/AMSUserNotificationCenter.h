@protocol AMSUserNotificationStrategy;

@interface AMSUserNotificationCenter : NSObject

@property (readonly) id<AMSUserNotificationStrategy> strategy;

+ (Class)_determineStrategyForBundleId:(id)a0;
+ (id)activeNotificationsWithCenterBundleId:(id)a0;
+ (char)badgeBundleId:(id)a0 badgeId:(id)a1 enabled:(char)a2 error:(id *)a3;
+ (id)postNotification:(id)a0 bag:(id)a1 centerBundleId:(id)a2;
+ (id)removeNotification:(id)a0 centerBundleId:(id)a1;
+ (id)removeNotificationWithIdentifier:(id)a0 centerBundleId:(id)a1 logKey:(id)a2 scheduledOnly:(char)a3;

- (void).cxx_destruct;

@end
