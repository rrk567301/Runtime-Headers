@interface ATXUpcomingCommuteToWorkAnchor : ATXAnchor

+ (BOOL)shouldProcessContextStoreNotification;
+ (long long)anchorType;
+ (Class)supportedDuetDataProviderClass;
+ (id)candidateQueryStartDateFromDuetEvent:(id)a0;
+ (id)anchorOccurenceDateFromDuetEvent:(id)a0;
+ (id)duetEventsPredicates;
+ (BOOL)shouldPredicateOnStartDate;
+ (id)fetchAnchorOccurrencesBetweenStartDate:(id)a0 endDate:(id)a1;
+ (BOOL)isActive;
+ (id)sampleEvent;
+ (id)predicateForContextStoreRegistration;
+ (id)keyPathForContextStore;
+ (id)longDescription;
+ (id)invalidationPredicateForContextStoreRegistration;
+ (double)secondsOfInfluence;
+ (BOOL)usesContextStoreForRealTimeNotifications;

@end
