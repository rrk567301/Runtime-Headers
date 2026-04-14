@interface ATXUpcomingCommuteFromWorkAnchor : ATXAnchor

+ (id)fetchAnchorOccurrencesBetweenStartDate:(id)a0 endDate:(id)a1;
+ (id)duetEventsPredicates;
+ (id)sampleEvent;
+ (BOOL)shouldPredicateOnStartDate;
+ (BOOL)isActive;
+ (Class)supportedDuetDataProviderClass;
+ (double)secondsOfInfluence;
+ (long long)anchorType;
+ (id)anchorOccurenceDateFromDuetEvent:(id)a0;
+ (id)predicateForContextStoreRegistration;
+ (id)longDescription;
+ (BOOL)usesContextStoreForRealTimeNotifications;
+ (BOOL)shouldProcessContextStoreNotification;
+ (id)candidateQueryStartDateFromDuetEvent:(id)a0;
+ (id)keyPathForContextStore;
+ (id)invalidationPredicateForContextStoreRegistration;

@end
