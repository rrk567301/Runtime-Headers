@interface HDWorkoutBuilderEntity : HDHealthEntity

+ (long long)protectionClass;
+ (id)foreignKeys;
+ (id)databaseTable;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)createEntityForBuilderConfiguration:(id)a0 profile:(id)a1 error:(id *)a2;
+ (char)discardBuilderWithIdentifier:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)finishWorkoutBuilderWithIdentifier:(id)a0 dateInterval:(id)a1 profile:(id)a2 error:(id *)a3;
+ (id)privateSubEntities;
+ (id)workoutBuilderEntitiesExcludingSessions:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)workoutBuilderEntitiesForSource:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)workoutBuilderEntityWithIdentifier:(id)a0 profile:(id)a1 error:(id *)a2;

- (char)setStartDate:(id)a0 transaction:(id)a1 error:(id *)a2;
- (long long)associateObject:(id)a0 timestamp:(double)a1 transaction:(id)a2 error:(id *)a3;
- (id)configurationWithTransaction:(id)a0 error:(id *)a1;
- (id)dataIntervalInTransaction:(id)a0 error:(id *)a1;
- (id)endDateInTransaction:(id)a0 error:(id *)a1;
- (char)enumerateAssociatedSampleValuesOfType:(id)a0 interval:(id)a1 profile:(id)a2 error:(id *)a3 sampleHandler:(id /* block */)a4;
- (char)enumerateAssociatedSamplesOfTypes:(id)a0 interval:(id)a1 profile:(id)a2 error:(id *)a3 sampleHandler:(id /* block */)a4;
- (char)enumerateAssociatedUUIDsWithTransaction:(id)a0 error:(id *)a1 block:(id /* block */)a2;
- (char)enumerateDataSourcesForProfile:(id)a0 error:(id *)a1 block:(id /* block */)a2;
- (char)enumerateStatisticsInTransaction:(id)a0 error:(id *)a1 block:(id /* block */)a2;
- (char)insertPrimaryWorkoutActivity:(id)a0 transaction:(id)a1 error:(id *)a2;
- (char)insertWorkoutActivity:(id)a0 transaction:(id)a1 error:(id *)a2;
- (char)insertWorkoutEvent:(id)a0 transaction:(id)a1 error:(id *)a2;
- (id)metadataWithTransaction:(id)a0 error:(id *)a1;
- (char)pruneAssociatedSamplesToDateInterval:(id)a0 transaction:(id)a1 error:(id *)a2 zonesHandler:(id /* block */)a3;
- (id)quantityTypesIncludedWhilePausedInTransaction:(id)a0 error:(id *)a1;
- (char)removeDataSourceWithIdentifier:(id)a0 profile:(id)a1 error:(id *)a2;
- (id)sessionIdentifierWithTransaction:(id)a0 error:(id *)a1;
- (char)setArchivedState:(id)a0 forDataSourceIdentifier:(id)a1 profile:(id)a2 error:(id *)a3;
- (char)setDataInterval:(id)a0 transaction:(id)a1 error:(id *)a2;
- (char)setDeviceEntity:(id)a0 transaction:(id)a1 error:(id *)a2;
- (char)setEndDate:(id)a0 transaction:(id)a1 error:(id *)a2;
- (char)setMetadata:(id)a0 transaction:(id)a1 error:(id *)a2;
- (char)setQuantityTypesIncludedWhilePaused:(id)a0 transaction:(id)a1 error:(id *)a2;
- (char)setSessionIdentifier:(id)a0 transaction:(id)a1 error:(id *)a2;
- (char)setWorkoutConfiguration:(id)a0 transaction:(id)a1 error:(id *)a2;
- (id)startDateInTransaction:(id)a0 error:(id *)a1;
- (char)storeStatisticsCalculator:(id)a0 anchor:(id)a1 activityUUID:(id)a2 transaction:(id)a3 error:(id *)a4;
- (char)updateWorkoutActivityEndDate:(id)a0 transaction:(id)a1 error:(id *)a2;
- (char)updateWorkoutActivityMetadata:(id)a0 transaction:(id)a1 error:(id *)a2;
- (id)workoutActivitiesInTransaction:(id)a0 error:(id *)a1;
- (id)workoutEventsInTransaction:(id)a0 error:(id *)a1;

@end
