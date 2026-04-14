@interface ATXIdleTimeBeginAnchor : ATXAnchor

+ (double)secondsOfInfluence;
+ (id)fetchAnchorOccurrencesBetweenStartDate:(id)a0 endDate:(id)a1;
+ (id)longDescription;
+ (BOOL)isActive;
+ (id)predicateForContextStoreRegistration;
+ (id)predictNextAnchorOccurrenceDate;
+ (id)duetEventsPredicates;
+ (id)sampleEvent;
+ (void)registerForNotificationsWithoutUsingContextStoreForObserver:(id)a0 enterSelector:(SEL)a1 exitSelector:(SEL)a2;
+ (BOOL)usesContextStoreForRealTimeNotifications;
+ (BOOL)shouldProcessContextStoreNotification;
+ (Class)supportedDuetDataProviderClass;
+ (long long)anchorType;
+ (id /* block */)filterBlock;
+ (id)keyPathForContextStore;
+ (double)weightedAverageOfHoursFromDates:(id)a0;
+ (id)anchorOccurenceDateFromDuetEvent:(id)a0;
+ (BOOL)shouldPredicateOnStartDate;
+ (double)minimumSecondsForBeingIdle;
+ (id)invalidationPredicateForContextStoreRegistration;

@end
