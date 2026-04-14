@interface ATXUpcomingCommuteToWorkAnchor : ATXAnchor

+ (double)secondsOfInfluence;
+ (id)fetchAnchorOccurrencesBetweenStartDate:(id)a0 endDate:(id)a1;
+ (id)longDescription;
+ (BOOL)isActive;
+ (id)predicateForContextStoreRegistration;
+ (id)duetEventsPredicates;
+ (id)sampleEvent;
+ (BOOL)usesContextStoreForRealTimeNotifications;
+ (BOOL)shouldProcessContextStoreNotification;
+ (Class)supportedDuetDataProviderClass;
+ (long long)anchorType;
+ (id)candidateQueryStartDateFromDuetEvent:(id)a0;
+ (id)keyPathForContextStore;
+ (id)anchorOccurenceDateFromDuetEvent:(id)a0;
+ (BOOL)shouldPredicateOnStartDate;
+ (id)invalidationPredicateForContextStoreRegistration;

@end
