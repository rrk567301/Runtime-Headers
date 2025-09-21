@interface HDWorkoutActivityEntity : HDHealthEntity

+ (id)_allProperties;
+ (long long)protectionClass;
+ (id)foreignKeys;
+ (id)indices;
+ (id)databaseTable;
+ (char)_insertOrReplaceWorkoutActivity:(id)a0 shouldReplace:(char)a1 ownerID:(unsigned long long)a2 isPrimaryActivity:(char)a3 database:(id)a4 error:(id *)a5;
+ (id)_numberProperty:(id)a0 primaryActivityOwnerID:(unsigned long long)a1 transaction:(id)a2 error:(id *)a3;
+ (id)_primaryActivityPredicateForOwnerID:(unsigned long long)a0;
+ (id)_statisticsForWorkoutActivityWithPersistentId:(unsigned long long)a0 workoutActivity:(id)a1 database:(id)a2 error:(id *)a3;
+ (id)_workoutActivityFromRow:(struct HDSQLiteRow { } *)a0;
+ (id)activityEntityWithUUID:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (id)activityTypeForPrimaryActivityOwnerID:(unsigned long long)a0 transaction:(id)a1 error:(id *)a2;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)durationForPrimaryActivityOwnerID:(unsigned long long)a0 transaction:(id)a1 error:(id *)a2;
+ (char)enumerateActivityEntitiesForOwnerID:(unsigned long long)a0 transaction:(id)a1 error:(id *)a2 enumerationHandler:(id /* block */)a3;
+ (char)insertPrimaryActivity:(id)a0 ownerID:(unsigned long long)a1 database:(id)a2 error:(id *)a3;
+ (char)insertSubActivities:(id)a0 ownerID:(unsigned long long)a1 database:(id)a2 error:(id *)a3;
+ (Class)ownerEntityClass;
+ (id)primaryWorkoutActivityForOwnerID:(unsigned long long)a0 database:(id)a1 error:(id *)a2;
+ (id)subActivitiesWithOwnerID:(unsigned long long)a0 database:(id)a1 error:(id *)a2;
+ (id)subActivityEntityWithUUID:(id)a0 ownerID:(unsigned long long)a1 database:(id)a2 error:(id *)a3;
+ (char)supportsNullableEndDate;

- (id)UUIDInTransaction:(id)a0 error:(id *)a1;
- (char)setDuration:(double)a0 transaction:(id)a1 error:(id *)a2;
- (char)setEndDate:(id)a0 transaction:(id)a1 error:(id *)a2;
- (char)setMetadata:(id)a0 transaction:(id)a1 error:(id *)a2;
- (char)unitTest_validateInTransaction:(id)a0 error:(id *)a1;

@end
