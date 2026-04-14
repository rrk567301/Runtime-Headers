@interface HDWorkoutBuilderActivityEntity : HDWorkoutActivityEntity

+ (id)databaseTable;
+ (long long)protectionClass;
+ (BOOL)supportsNullableEndDate;
+ (Class)ownerEntityClass;
+ (id)_statisticsForWorkoutActivityWithPersistentId:(unsigned long long)a0 workoutActivity:(id)a1 database:(id)a2 error:(id *)a3;

@end
