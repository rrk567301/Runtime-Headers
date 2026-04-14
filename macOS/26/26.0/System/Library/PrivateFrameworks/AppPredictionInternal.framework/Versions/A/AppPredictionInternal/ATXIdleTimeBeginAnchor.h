@interface ATXIdleTimeBeginAnchor : ATXAnchor

+ (BOOL)shouldProcessContextStoreNotification;
+ (void)registerForNotificationsWithoutUsingContextStoreForObserver:(id)a0 enterSelector:(SEL)a1 exitSelector:(SEL)a2;
+ (long long)anchorType;
+ (Class)supportedDuetDataProviderClass;
+ (id)anchorOccurenceDateFromDuetEvent:(id)a0;
+ (id)duetEventsPredicates;
+ (BOOL)shouldPredicateOnStartDate;
+ (id)predictNextAnchorOccurrenceDate;
+ (id /* block */)filterBlock;
+ (id)fetchAnchorOccurrencesBetweenStartDate:(id)a0 endDate:(id)a1;
+ (BOOL)isActive;
+ (id)sampleEvent;
+ (id)predicateForContextStoreRegistration;
+ (id)keyPathForContextStore;
+ (id)longDescription;
+ (double)minimumSecondsForBeingIdle;
+ (id)invalidationPredicateForContextStoreRegistration;
+ (double)weightedAverageOfHoursFromDates:(id)a0;
+ (double)secondsOfInfluence;
+ (BOOL)usesContextStoreForRealTimeNotifications;

@end
