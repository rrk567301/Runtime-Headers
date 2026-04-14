@interface ATXUpcomingCommuteToWorkAnchor : ATXAnchor

+ (id)sampleEvent;
+ (id)longDescription;
+ (id)fetchAnchorOccurrencesBetweenStartDate:(id)a0 endDate:(id)a1;
+ (BOOL)shouldProcessContextStoreNotification;
+ (BOOL)shouldPredicateOnStartDate;
+ (id)duetEventsPredicates;
+ (Class)supportedDuetDataProviderClass;
+ (BOOL)usesContextStoreForRealTimeNotifications;
+ (id)invalidationPredicateForContextStoreRegistration;
+ (id)predicateForContextStoreRegistration;
+ (double)secondsOfInfluence;
+ (id)keyPathForContextStore;
+ (id)candidateQueryStartDateFromDuetEvent:(id)a0;
+ (long long)anchorType;
+ (BOOL)isActive;
+ (id)anchorOccurenceDateFromDuetEvent:(id)a0;

@end
