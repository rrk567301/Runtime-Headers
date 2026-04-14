@interface ATXAudioDisconnectedAnchor : ATXAnchor

+ (BOOL)isActive;
+ (id)invalidationPredicateForContextStoreRegistration;
+ (BOOL)shouldPredicateOnStartDate;
+ (BOOL)usesContextStoreForRealTimeNotifications;
+ (id)predicateForContextStoreRegistration;
+ (long long)anchorType;
+ (id)sampleEvent;
+ (void)registerForNotificationsWithoutUsingContextStoreForObserver:(id)a0 enterSelector:(SEL)a1 exitSelector:(SEL)a2;
+ (id /* block */)filterBlock;
+ (id)longDescription;
+ (double)secondsOfInfluence;
+ (Class)supportedDuetDataProviderClass;
+ (id)keyPathForContextStore;
+ (id)duetEventsPredicates;
+ (BOOL)shouldProcessContextStoreNotification;
+ (id)fetchAnchorOccurrencesBetweenStartDate:(id)a0 endDate:(id)a1;

@end
