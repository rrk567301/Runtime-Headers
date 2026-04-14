@interface ATXUpcomingCommuteFromWorkAnchor : ATXAnchor

+ (BOOL)isActive;
+ (id)invalidationPredicateForContextStoreRegistration;
+ (BOOL)shouldPredicateOnStartDate;
+ (BOOL)usesContextStoreForRealTimeNotifications;
+ (id)predicateForContextStoreRegistration;
+ (long long)anchorType;
+ (id)sampleEvent;
+ (id)longDescription;
+ (double)secondsOfInfluence;
+ (id)candidateQueryStartDateFromDuetEvent:(id)a0;
+ (id)anchorOccurenceDateFromDuetEvent:(id)a0;
+ (Class)supportedDuetDataProviderClass;
+ (id)keyPathForContextStore;
+ (id)duetEventsPredicates;
+ (BOOL)shouldProcessContextStoreNotification;
+ (id)fetchAnchorOccurrencesBetweenStartDate:(id)a0 endDate:(id)a1;

@end
