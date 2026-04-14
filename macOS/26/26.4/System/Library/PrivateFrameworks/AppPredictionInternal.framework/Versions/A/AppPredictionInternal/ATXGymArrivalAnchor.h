@interface ATXGymArrivalAnchor : ATXAnchor

+ (double)secondsOfInfluence;
+ (id)fetchAnchorOccurrencesBetweenStartDate:(id)a0 endDate:(id)a1;
+ (void)unregisterForNotificationsWithoutUsingContextStoreForObserver:(id)a0;
+ (id)longDescription;
+ (BOOL)isActive;
+ (id)duetEventsPredicates;
+ (id)sampleEvent;
+ (void)registerForNotificationsWithoutUsingContextStoreForObserver:(id)a0 enterSelector:(SEL)a1 exitSelector:(SEL)a2;
+ (BOOL)usesContextStoreForRealTimeNotifications;
+ (BOOL)shouldProcessContextStoreNotification;
+ (Class)supportedDuetDataProviderClass;
+ (long long)anchorType;
+ (BOOL)shouldPredicateOnStartDate;
+ (id)invalidationPredicateForContextStoreRegistration;

@end
