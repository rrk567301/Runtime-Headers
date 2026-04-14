@interface ATXLocationExitAnchor : ATXAnchor

+ (id)duetEventsPredicates;
+ (id)sampleEvent;
+ (BOOL)shouldPredicateOnStartDate;
+ (BOOL)isActive;
+ (Class)supportedDuetDataProviderClass;
+ (double)secondsOfInfluence;
+ (long long)anchorType;
+ (id)predicateForContextStoreRegistration;
+ (id)longDescription;
+ (BOOL)usesContextStoreForRealTimeNotifications;
+ (BOOL)shouldProcessContextStoreNotification;
+ (void)registerForNotificationsWithoutUsingContextStoreForObserver:(id)a0 enterSelector:(SEL)a1 exitSelector:(SEL)a2;
+ (id)keyPathForContextStore;
+ (void)unregisterForNotificationsWithoutUsingContextStoreForObserver:(id)a0;

@end
