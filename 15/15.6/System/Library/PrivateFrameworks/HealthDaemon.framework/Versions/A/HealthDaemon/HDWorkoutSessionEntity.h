@interface HDWorkoutSessionEntity : HDHealthEntity

+ (long long)protectionClass;
+ (id)foreignKeys;
+ (id)databaseTable;
+ (id)sessionIdentifierForRecoveryInProfile:(id)a0 expirationInterval:(double)a1 error:(id *)a2;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)createSessionWithIdentifier:(id)a0 source:(id)a1 configuration:(id)a2 state:(long long)a3 profile:(id)a4 error:(id *)a5;
+ (id)lookupSessionWithIdentifier:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)privateSubEntities;
+ (id)sessionsExcludingIdentifiers:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)sessionsForSource:(id)a0 profile:(id)a1 error:(id *)a2;

- (char)setStartDate:(id)a0 transaction:(id)a1 error:(id *)a2;
- (id)isMirroringInTransaction:(id)a0 error:(id *)a1;
- (char)setHasFailed:(char)a0 transaction:(id)a1 error:(id *)a2;
- (id)activityConfigurationsWithTransaction:(id)a0 error:(id *)a1;
- (id)associatedBuilderWithTransaction:(id)a0 error:(id *)a1;
- (id)clientApplicationIdentifier:(id)a0 error:(id *)a1;
- (id)clientBundleIdentifier:(id)a0 error:(id *)a1;
- (id)currentActivityWithTransaction:(id)a0 error:(id *)a1;
- (id)endDateInTransaction:(id)a0 error:(id *)a1;
- (char)finishWithTransaction:(id)a0 error:(id *)a1;
- (id)firstActivityConfigurationWithTransaction:(id)a0 error:(id *)a1;
- (id)hasFailedInTransaction:(id)a0 error:(id *)a1;
- (char)insertWorkoutEvent:(id)a0 transaction:(id)a1 error:(id *)a2;
- (id)latestActivityDateInTransaction:(id)a0 error:(id *)a1;
- (id)requestedEndDateInTransaction:(id)a0 error:(id *)a1;
- (id)requestedStartDateInTransaction:(id)a0 error:(id *)a1;
- (id)requestedTargetStateWithTransaction:(id)a0 error:(id *)a1;
- (id)sessionIdentifierWithTransaction:(id)a0 error:(id *)a1;
- (char)setActivityConfigurations:(id)a0 transaction:(id)a1 error:(id *)a2;
- (char)setAssociatedBuilder:(id)a0 transaction:(id)a1 error:(id *)a2;
- (char)setClientApplicationIdentifier:(id)a0 transaction:(id)a1 error:(id *)a2;
- (char)setClientBundleIdentifier:(id)a0 transaction:(id)a1 error:(id *)a2;
- (char)setCurrentActivity:(id)a0 transaction:(id)a1 error:(id *)a2;
- (char)setEndDate:(id)a0 transaction:(id)a1 error:(id *)a2;
- (char)setFirstActivityConfiguration:(id)a0 transaction:(id)a1 error:(id *)a2;
- (char)setIsMirroring:(char)a0 transaction:(id)a1 error:(id *)a2;
- (char)setRequestedEndDate:(id)a0 transaction:(id)a1 error:(id *)a2;
- (char)setRequestedStartDate:(id)a0 transaction:(id)a1 error:(id *)a2;
- (char)setRequestedTargetState:(long long)a0 transaction:(id)a1 error:(id *)a2;
- (char)setSource:(id)a0 transaction:(id)a1 error:(id *)a2;
- (char)setState:(long long)a0 transaction:(id)a1 error:(id *)a2;
- (char)setWorkoutConfiguration:(id)a0 transaction:(id)a1 error:(id *)a2;
- (id)sourceWithTransaction:(id)a0 error:(id *)a1;
- (id)startDateInTransaction:(id)a0 error:(id *)a1;
- (id)stateWithTransaction:(id)a0 error:(id *)a1;
- (char)updateLatestActivityDate:(id)a0 transaction:(id)a1 error:(id *)a2;
- (char)updateLatestActivityDateWithTransaction:(id)a0 error:(id *)a1;
- (id)workoutConfigurationWithTransaction:(id)a0 error:(id *)a1;
- (id)workoutEventsInTransaction:(id)a0 error:(id *)a1;

@end
