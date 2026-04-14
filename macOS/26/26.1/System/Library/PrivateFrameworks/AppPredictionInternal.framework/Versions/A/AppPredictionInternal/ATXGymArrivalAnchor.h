@interface ATXGymArrivalAnchor : ATXAnchor

+ (BOOL)isActive;
+ (id)invalidationPredicateForContextStoreRegistration;
+ (BOOL)shouldPredicateOnStartDate;
+ (BOOL)usesContextStoreForRealTimeNotifications;
+ (void)unregisterForNotificationsWithoutUsingContextStoreForObserver:(id)a0;
+ (long long)anchorType;
+ (id)sampleEvent;
+ (void)registerForNotificationsWithoutUsingContextStoreForObserver:(id)a0 enterSelector:(SEL)a1 exitSelector:(SEL)a2;
+ (id)longDescription;
+ (double)secondsOfInfluence;
+ (Class)supportedDuetDataProviderClass;
+ (id)duetEventsPredicates;
+ (BOOL)shouldProcessContextStoreNotification;
+ (id)fetchAnchorOccurrencesBetweenStartDate:(id)a0 endDate:(id)a1;

@end
