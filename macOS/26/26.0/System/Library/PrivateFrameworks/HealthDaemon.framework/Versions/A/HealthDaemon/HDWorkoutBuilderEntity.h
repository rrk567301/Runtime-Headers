@class NSString;

@interface HDWorkoutBuilderEntity : HDHealthEntity {
    BOOL _isFinishing;
    NSString *_finishingTemporaryTableName;
}

+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)foreignKeys;
+ (long long)protectionClass;
+ (id)databaseTable;
+ (id)workoutBuilderEntitiesForSource:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)finishWorkoutBuilderWithIdentifier:(id)a0 dateInterval:(id)a1 profile:(id)a2 error:(id *)a3;
+ (BOOL)discardBuilderWithIdentifier:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)createEntityForBuilderConfiguration:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)privateSubEntities;
+ (id)workoutBuilderEntitiesExcludingSessions:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)workoutBuilderEntityWithIdentifier:(id)a0 profile:(id)a1 error:(id *)a2;

- (void).cxx_destruct;
- (BOOL)setStartDate:(id)a0 transaction:(id)a1 error:(id *)a2;
- (long long)associateObject:(id)a0 code:(long long)a1 timestamp:(double)a2 transaction:(id)a3 error:(id *)a4;
- (id)configurationWithTransaction:(id)a0 error:(id *)a1;
- (id)dataIntervalInTransaction:(id)a0 error:(id *)a1;
- (BOOL)dropFinalTemporaryTableWithTransaction:(id)a0 error:(id *)a1;
- (id)endDateInTransaction:(id)a0 error:(id *)a1;
- (BOOL)enumerateAssociatedSampleValuesOfType:(id)a0 interval:(id)a1 profile:(id)a2 error:(id *)a3 handler:(id /* block */)a4;
- (BOOL)enumerateAssociatedSampleValuesOfType:(id)a0 interval:(id)a1 profile:(id)a2 error:(id *)a3 sampleHandler:(id /* block */)a4;
- (BOOL)enumerateAssociatedSampleValuesWithCustomQueryOfType:(id)a0 interval:(id)a1 profile:(id)a2 error:(id *)a3 handler:(id /* block */)a4;
- (BOOL)enumerateAssociatedSamplesOfTypes:(id)a0 interval:(id)a1 profile:(id)a2 error:(id *)a3 sampleHandler:(id /* block */)a4;
- (BOOL)enumerateAssociatedUUIDsWithTransaction:(id)a0 error:(id *)a1 block:(id /* block */)a2;
- (BOOL)enumerateDataSourcesForProfile:(id)a0 error:(id *)a1 block:(id /* block */)a2;
- (BOOL)enumerateStatisticsInTransaction:(id)a0 error:(id *)a1 block:(id /* block */)a2;
- (BOOL)insertPrimaryWorkoutActivity:(id)a0 transaction:(id)a1 error:(id *)a2;
- (BOOL)insertWorkoutActivity:(id)a0 transaction:(id)a1 error:(id *)a2;
- (BOOL)insertWorkoutEvent:(id)a0 transaction:(id)a1 error:(id *)a2;
- (BOOL)insertZones:(id)a0 transaction:(id)a1 error:(id *)a2;
- (id)metadataWithTransaction:(id)a0 error:(id *)a1;
- (id)primaryActivityInTransaction:(id)a0 error:(id *)a1;
- (BOOL)pruneAssociatedSamplesToDateInterval:(id)a0 transaction:(id)a1 error:(id *)a2 zonesHandler:(id /* block */)a3 sampleHandler:(id /* block */)a4;
- (id)quantityTypesIncludedWhilePausedInTransaction:(id)a0 error:(id *)a1;
- (BOOL)removeDataSourceWithIdentifier:(id)a0 profile:(id)a1 error:(id *)a2;
- (id)sessionIdentifierWithTransaction:(id)a0 error:(id *)a1;
- (BOOL)setArchivedState:(id)a0 forDataSourceIdentifier:(id)a1 profile:(id)a2 error:(id *)a3;
- (BOOL)setDataInterval:(id)a0 transaction:(id)a1 error:(id *)a2;
- (BOOL)setDeviceEntity:(id)a0 transaction:(id)a1 error:(id *)a2;
- (BOOL)setEndDate:(id)a0 transaction:(id)a1 error:(id *)a2;
- (void)setIsFinishingBuilder;
- (BOOL)setMetadata:(id)a0 transaction:(id)a1 error:(id *)a2;
- (BOOL)setQuantityTypesIncludedWhilePaused:(id)a0 transaction:(id)a1 error:(id *)a2;
- (BOOL)setSessionIdentifier:(id)a0 transaction:(id)a1 error:(id *)a2;
- (BOOL)setWorkoutConfiguration:(id)a0 transaction:(id)a1 error:(id *)a2;
- (id)startDateInTransaction:(id)a0 error:(id *)a1;
- (BOOL)storeStatisticsCalculator:(id)a0 anchor:(id)a1 activityUUID:(id)a2 transaction:(id)a3 error:(id *)a4;
- (BOOL)updateTimeInZone:(id)a0 transaction:(id)a1 error:(id *)a2;
- (BOOL)updateWorkoutActivityEndDate:(id)a0 transaction:(id)a1 error:(id *)a2;
- (BOOL)updateWorkoutActivityMetadata:(id)a0 transaction:(id)a1 error:(id *)a2;
- (id)workoutActivitiesInTransaction:(id)a0 error:(id *)a1;
- (id)workoutEventsInTransaction:(id)a0 error:(id *)a1;
- (id)zonesInTransaction:(id)a0 error:(id *)a1;

@end
