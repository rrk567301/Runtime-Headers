@interface ATXLocationEnterAnchor : ATXAnchor

+ (BOOL)shouldProcessContextStoreNotification;
+ (void)registerForNotificationsWithoutUsingContextStoreForObserver:(id)a0 enterSelector:(SEL)a1 exitSelector:(SEL)a2;
+ (long long)anchorType;
+ (Class)supportedDuetDataProviderClass;
+ (id)duetEventsPredicates;
+ (BOOL)shouldPredicateOnStartDate;
+ (BOOL)isActive;
+ (id)sampleEvent;
+ (id)predicateForContextStoreRegistration;
+ (id)keyPathForContextStore;
+ (id)longDescription;
+ (double)secondsOfInfluence;
+ (void)unregisterForNotificationsWithoutUsingContextStoreForObserver:(id)a0;
+ (BOOL)usesContextStoreForRealTimeNotifications;

@end
