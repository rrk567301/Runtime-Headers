@interface HDWorkoutClusterComponentEntity : HDHealthEntity

+ (long long)protectionClass;
+ (id)foreignKeys;
+ (id)databaseTable;
+ (char)associateWorkout:(id)a0 withCluster:(id)a1 transaction:(id)a2 error:(id *)a3;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (char)enumerateWorkoutsForCluster:(id)a0 transaction:(id)a1 error:(id *)a2 block:(id /* block */)a3;
+ (id)numberOfWorkoutsInCluster:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (char)removeWorkout:(id)a0 fromCluster:(id)a1 transaction:(id)a2 error:(id *)a3;
+ (id)uniquedColumns;

@end
