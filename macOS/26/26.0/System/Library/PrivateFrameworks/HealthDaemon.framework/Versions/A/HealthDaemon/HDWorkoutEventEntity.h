@interface HDWorkoutEventEntity : HDHealthEntity

+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)indices;
+ (id)foreignKeys;
+ (long long)protectionClass;
+ (id)databaseTable;
+ (id)deleteStatementForWorkoutEventsWithTransaction:(id)a0;
+ (id)insertPersistableWorkoutEvent:(id)a0 ownerID:(id)a1 database:(id)a2 error:(id *)a3;
+ (id)workoutEventsForOwner:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (Class)ownerEntityClass;
+ (BOOL)insertWorkoutEventsFromWorkout:(id)a0 ownerID:(id)a1 transaction:(id)a2 error:(id *)a3;
+ (id)ownerEntityReferenceColumn;
+ (Class)workoutEventClass;
+ (BOOL)enumerateEventsForOwner:(long long)a0 withStatement:(id)a1 error:(id *)a2 eventHandler:(id /* block */)a3;
+ (id)statementForEnumeratingEventsForOwnerInDatabase:(id)a0 error:(id *)a1;
+ (id)workoutEventsWithOwnerID:(id)a0 database:(id)a1 error:(id *)a2;

@end
