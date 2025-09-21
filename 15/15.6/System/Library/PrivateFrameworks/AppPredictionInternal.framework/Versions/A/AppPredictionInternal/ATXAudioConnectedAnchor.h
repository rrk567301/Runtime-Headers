@interface ATXAudioConnectedAnchor : ATXAnchor

+ (char)isActive;
+ (id)longDescription;
+ (id)keyPathForContextStore;
+ (id)predicateForContextStoreRegistration;
+ (long long)anchorType;
+ (id)duetEventsPredicates;
+ (id)invalidationPredicateForContextStoreRegistration;
+ (void)registerForNotificationsWithoutUsingContextStoreForObserver:(id)a0 enterSelector:(SEL)a1 exitSelector:(SEL)a2;
+ (id)sampleEvent;
+ (double)secondsOfInfluence;
+ (char)shouldPredicateOnStartDate;
+ (char)shouldProcessContextStoreNotification;
+ (Class)supportedDuetDataProviderClass;
+ (char)usesContextStoreForRealTimeNotifications;

@end
