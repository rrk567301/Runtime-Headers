@interface HDWorkoutActivityEntity : HDHealthEntity

+ (id)_allProperties;
+ (id)foreignKeys;
+ (long long)protectionClass;
+ (id)indices;
+ (id)databaseTable;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (Class)ownerEntityClass;
+ (BOOL)supportsNullableEndDate;
+ (id)_statisticsForWorkoutActivityWithPersistentId:(unsigned long long)a0 workoutActivity:(id)a1 database:(id)a2 error:(id *)a3;
+ (BOOL)insertSubActivities:(id)a0 ownerID:(unsigned long long)a1 database:(id)a2 error:(id *)a3;
+ (BOOL)insertPrimaryActivity:(id)a0 ownerID:(unsigned long long)a1 database:(id)a2 error:(id *)a3;
+ (id)subActivitiesWithOwnerID:(unsigned long long)a0 database:(id)a1 error:(id *)a2;
+ (id)primaryWorkoutActivityForOwnerID:(unsigned long long)a0 database:(id)a1 error:(id *)a2;
+ (id)subActivityEntityWithUUID:(id)a0 ownerID:(unsigned long long)a1 database:(id)a2 error:(id *)a3;
+ (id)activityEntityWithUUID:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (BOOL)enumerateActivityEntitiesForOwnerID:(unsigned long long)a0 transaction:(id)a1 error:(id *)a2 enumerationHandler:(id /* block */)a3;
+ (id)activityTypeForPrimaryActivityOwnerID:(unsigned long long)a0 transaction:(id)a1 error:(id *)a2;
+ (id)durationForPrimaryActivityOwnerID:(unsigned long long)a0 transaction:(id)a1 error:(id *)a2;
+ (BOOL)_insertOrReplaceWorkoutActivity:(id)a0 shouldReplace:(BOOL)a1 ownerID:(unsigned long long)a2 isPrimaryActivity:(BOOL)a3 database:(id)a4 error:(id *)a5;
+ (id)_workoutActivityFromRow:(struct HDSQLiteRow { } *)a0;
+ (id)_primaryActivityPredicateForOwnerID:(unsigned long long)a0;
+ (id)_numberProperty:(id)a0 primaryActivityOwnerID:(unsigned long long)a1 transaction:(id)a2 error:(id *)a3;

- (id)UUIDInTransaction:(id)a0 error:(id *)a1;
- (BOOL)setEndDate:(id)a0 transaction:(id)a1 error:(id *)a2;
- (BOOL)setDuration:(double)a0 transaction:(id)a1 error:(id *)a2;
- (BOOL)setMetadata:(id)a0 transaction:(id)a1 error:(id *)a2;
- (BOOL)unitTest_validateInTransaction:(id)a0 error:(id *)a1;

@end
