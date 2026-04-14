@interface ATXIdleTimeBeginAnchor : ATXAnchor

+ (id /* block */)filterBlock;
+ (id)fetchAnchorOccurrencesBetweenStartDate:(id)a0 endDate:(id)a1;
+ (id)duetEventsPredicates;
+ (id)sampleEvent;
+ (BOOL)shouldPredicateOnStartDate;
+ (BOOL)isActive;
+ (Class)supportedDuetDataProviderClass;
+ (double)secondsOfInfluence;
+ (double)minimumSecondsForBeingIdle;
+ (long long)anchorType;
+ (id)predictNextAnchorOccurrenceDate;
+ (id)anchorOccurenceDateFromDuetEvent:(id)a0;
+ (id)predicateForContextStoreRegistration;
+ (id)longDescription;
+ (BOOL)usesContextStoreForRealTimeNotifications;
+ (double)weightedAverageOfHoursFromDates:(id)a0;
+ (BOOL)shouldProcessContextStoreNotification;
+ (void)registerForNotificationsWithoutUsingContextStoreForObserver:(id)a0 enterSelector:(SEL)a1 exitSelector:(SEL)a2;
+ (id)keyPathForContextStore;
+ (id)invalidationPredicateForContextStoreRegistration;

@end
