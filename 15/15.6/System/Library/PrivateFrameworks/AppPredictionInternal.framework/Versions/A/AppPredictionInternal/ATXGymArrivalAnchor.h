@interface ATXGymArrivalAnchor : ATXAnchor

+ (char)isActive;
+ (id)longDescription;
+ (long long)anchorType;
+ (id)duetEventsPredicates;
+ (id)fetchAnchorOccurrencesBetweenStartDate:(id)a0 endDate:(id)a1;
+ (id)invalidationPredicateForContextStoreRegistration;
+ (void)registerForNotificationsWithoutUsingContextStoreForObserver:(id)a0 enterSelector:(SEL)a1 exitSelector:(SEL)a2;
+ (id)sampleEvent;
+ (double)secondsOfInfluence;
+ (char)shouldPredicateOnStartDate;
+ (char)shouldProcessContextStoreNotification;
+ (Class)supportedDuetDataProviderClass;
+ (void)unregisterForNotificationsWithoutUsingContextStoreForObserver:(id)a0;
+ (char)usesContextStoreForRealTimeNotifications;

@end
