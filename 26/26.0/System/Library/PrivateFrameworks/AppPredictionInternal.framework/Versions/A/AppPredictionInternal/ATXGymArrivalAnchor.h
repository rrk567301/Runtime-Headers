@interface ATXGymArrivalAnchor : ATXAnchor

+ (BOOL)shouldProcessContextStoreNotification;
+ (void)registerForNotificationsWithoutUsingContextStoreForObserver:(id)a0 enterSelector:(SEL)a1 exitSelector:(SEL)a2;
+ (long long)anchorType;
+ (Class)supportedDuetDataProviderClass;
+ (id)duetEventsPredicates;
+ (BOOL)shouldPredicateOnStartDate;
+ (id)fetchAnchorOccurrencesBetweenStartDate:(id)a0 endDate:(id)a1;
+ (BOOL)isActive;
+ (id)sampleEvent;
+ (id)longDescription;
+ (id)invalidationPredicateForContextStoreRegistration;
+ (double)secondsOfInfluence;
+ (void)unregisterForNotificationsWithoutUsingContextStoreForObserver:(id)a0;
+ (BOOL)usesContextStoreForRealTimeNotifications;

@end
