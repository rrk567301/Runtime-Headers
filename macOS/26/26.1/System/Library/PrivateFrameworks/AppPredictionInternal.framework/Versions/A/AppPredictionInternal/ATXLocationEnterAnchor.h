@interface ATXLocationEnterAnchor : ATXAnchor

+ (BOOL)isActive;
+ (BOOL)shouldPredicateOnStartDate;
+ (BOOL)usesContextStoreForRealTimeNotifications;
+ (id)predicateForContextStoreRegistration;
+ (void)unregisterForNotificationsWithoutUsingContextStoreForObserver:(id)a0;
+ (long long)anchorType;
+ (id)sampleEvent;
+ (void)registerForNotificationsWithoutUsingContextStoreForObserver:(id)a0 enterSelector:(SEL)a1 exitSelector:(SEL)a2;
+ (id)longDescription;
+ (double)secondsOfInfluence;
+ (Class)supportedDuetDataProviderClass;
+ (id)keyPathForContextStore;
+ (id)duetEventsPredicates;
+ (BOOL)shouldProcessContextStoreNotification;

@end
