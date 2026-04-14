@interface ATXLocationEnterAnchor : ATXAnchor

+ (id)sampleEvent;
+ (id)longDescription;
+ (BOOL)shouldProcessContextStoreNotification;
+ (BOOL)shouldPredicateOnStartDate;
+ (id)duetEventsPredicates;
+ (Class)supportedDuetDataProviderClass;
+ (BOOL)usesContextStoreForRealTimeNotifications;
+ (void)registerForNotificationsWithoutUsingContextStoreForObserver:(id)a0 enterSelector:(SEL)a1 exitSelector:(SEL)a2;
+ (id)predicateForContextStoreRegistration;
+ (double)secondsOfInfluence;
+ (void)unregisterForNotificationsWithoutUsingContextStoreForObserver:(id)a0;
+ (id)keyPathForContextStore;
+ (long long)anchorType;
+ (BOOL)isActive;

@end
