@interface HDRaceRouteWorkoutEntity : HDHealthEntity

+ (long long)protectionClass;
+ (id)databaseTable;
+ (char)insertCodableRoutePoints:(id)a0 workoutPersistentID:(long long)a1 transaction:(id)a2 error:(id *)a3;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)createRaceRouteWorkoutFromWorkout:(id)a0 transaction:(id)a1 profile:(id)a2 error:(id *)a3;
+ (id)entityForWorkoutUUID:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (char)enumerateRoutePointsForWorkoutPersistentID:(long long)a0 timestampAnchor:(double)a1 limit:(unsigned long long)a2 startDuration:(double)a3 finishDuration:(double)a4 transaction:(id)a5 error:(id *)a6 handler:(id /* block */)a7;
+ (char)enumerateRoutePointsForWorkoutUUID:(id)a0 timestampAnchor:(double)a1 limit:(unsigned long long)a2 profile:(id)a3 error:(id *)a4 dataHandler:(id /* block */)a5;
+ (id)insertCodableRacingMetrics:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (char)markForDeletionWorkoutDataWithPersistentID:(long long)a0 transaction:(id)a1 error:(id *)a2;
+ (id)privateSubEntities;
+ (char)pruneWorkoutsMarkedForDeletionInTransaction:(id)a0 error:(id *)a1;
+ (id)startingPointForWorkoutWithPersistentID:(long long)a0 transaction:(id)a1 error:(id *)a2;

- (id)dateToDeleteInTransaction:(id)a0 error:(id *)a1;
- (char)setDateToDelete:(id)a0 transaction:(id)a1 error:(id *)a2;

@end
