@interface HDWorkoutBuilderActivityEntity : HDWorkoutActivityEntity

+ (long long)protectionClass;
+ (Class)ownerEntityClass;
+ (id)databaseTable;
+ (id)_statisticsForWorkoutActivityWithPersistentId:(unsigned long long)a0 workoutActivity:(id)a1 database:(id)a2 error:(id *)a3;
+ (BOOL)supportsNullableEndDate;

@end
