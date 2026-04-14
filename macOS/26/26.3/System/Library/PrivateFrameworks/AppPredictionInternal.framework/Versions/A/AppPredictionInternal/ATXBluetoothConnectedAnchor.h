@interface ATXBluetoothConnectedAnchor : ATXAnchor

+ (id)sampleEvent;
+ (id)longDescription;
+ (id)fetchAnchorOccurrencesBetweenStartDate:(id)a0 endDate:(id)a1;
+ (BOOL)shouldProcessContextStoreNotification;
+ (BOOL)shouldPredicateOnStartDate;
+ (id)duetEventsPredicates;
+ (Class)supportedDuetDataProviderClass;
+ (BOOL)usesContextStoreForRealTimeNotifications;
+ (void)registerForNotificationsWithoutUsingContextStoreForObserver:(id)a0 enterSelector:(SEL)a1 exitSelector:(SEL)a2;
+ (id)invalidationPredicateForContextStoreRegistration;
+ (id)predicateForContextStoreRegistration;
+ (id /* block */)filterBlock;
+ (double)secondsOfInfluence;
+ (id)keyPathForContextStore;
+ (long long)anchorType;
+ (BOOL)isActive;

@end
