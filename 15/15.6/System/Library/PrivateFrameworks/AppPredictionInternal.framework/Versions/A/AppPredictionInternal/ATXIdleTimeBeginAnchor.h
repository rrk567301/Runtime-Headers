@interface ATXIdleTimeBeginAnchor : ATXAnchor

+ (char)isActive;
+ (id)longDescription;
+ (id)keyPathForContextStore;
+ (id)predicateForContextStoreRegistration;
+ (id)predictNextAnchorOccurrenceDate;
+ (id)anchorOccurenceDateFromDuetEvent:(id)a0;
+ (long long)anchorType;
+ (id)duetEventsPredicates;
+ (id)fetchAnchorOccurrencesBetweenStartDate:(id)a0 endDate:(id)a1;
+ (id)invalidationPredicateForContextStoreRegistration;
+ (double)minimumSecondsForBeingIdle;
+ (void)registerForNotificationsWithoutUsingContextStoreForObserver:(id)a0 enterSelector:(SEL)a1 exitSelector:(SEL)a2;
+ (id)sampleEvent;
+ (double)secondsOfInfluence;
+ (char)shouldPredicateOnStartDate;
+ (char)shouldProcessContextStoreNotification;
+ (Class)supportedDuetDataProviderClass;
+ (char)usesContextStoreForRealTimeNotifications;
+ (double)weightedAverageOfHoursFromDates:(id)a0;

@end
