@interface ATXLocationEnterAnchor : ATXAnchor

+ (double)secondsOfInfluence;
+ (void)unregisterForNotificationsWithoutUsingContextStoreForObserver:(id)a0;
+ (id)longDescription;
+ (BOOL)isActive;
+ (id)predicateForContextStoreRegistration;
+ (id)duetEventsPredicates;
+ (id)sampleEvent;
+ (void)registerForNotificationsWithoutUsingContextStoreForObserver:(id)a0 enterSelector:(SEL)a1 exitSelector:(SEL)a2;
+ (BOOL)usesContextStoreForRealTimeNotifications;
+ (BOOL)shouldProcessContextStoreNotification;
+ (Class)supportedDuetDataProviderClass;
+ (long long)anchorType;
+ (id)keyPathForContextStore;
+ (BOOL)shouldPredicateOnStartDate;

@end
