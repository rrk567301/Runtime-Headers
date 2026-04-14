@interface HDWorkoutEntity : HDSampleEntity

+ (BOOL)addCodableObject:(id)a0 toCollection:(id)a1;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)mergeDataObject:(id)a0 provenance:(id)a1 profile:(id)a2 transaction:(id)a3 error:(id *)a4 insertHandler:(id /* block */)a5;
+ (id)entityEncoderForProfile:(id)a0 transaction:(id)a1 purpose:(long long)a2 encodingOptions:(id)a3 authorizationFilter:(id /* block */)a4;
+ (BOOL)supportsObjectMerging;
+ (BOOL)isConcreteEntity;
+ (id)databaseTable;
+ (id)codableObjectsFromObjectCollection:(id)a0;
+ (id)insertDataObject:(id)a0 withProvenance:(id)a1 inDatabase:(id)a2 persistentID:(id)a3 error:(id *)a4;
+ (BOOL)workoutActivityType:(unsigned long long *)a0 associatedWithRouteUUID:(id)a1 transaction:(id)a2 error:(id *)a3;
+ (id)maxValueForProperty:(id)a0 predicate:(id)a1 database:(id)a2 error:(id *)a3;
+ (BOOL)copySampleAssociationsFromWorkout:(id)a0 toWorkout:(id)a1 profile:(id)a2 error:(id *)a3;
+ (BOOL)replaceExistingObject:(id)a0 existingObjectID:(id)a1 replacementObject:(id)a2 replacementObjectID:(id)a3 profile:(id)a4 transaction:(id)a5 error:(id *)a6;
+ (id)joinClausesForProperty:(id)a0;
+ (id)deleteStatementsForRelatedEntitiesWithTransaction:(id)a0;
+ (BOOL)enumerateCondensedWorkoutsWithPredicate:(id)a0 profile:(id)a1 error:(id *)a2 handler:(id /* block */)a3;
+ (id)orderingTermForSortDescriptor:(id)a0;

- (id)codableCondensedWorkoutWithTransaction:(id)a0 error:(id *)a1;
- (BOOL)getCondenserVersion:(out long long *)a0 date:(out id *)a1 profile:(id)a2 error:(id *)a3;
- (BOOL)isCondenserVersionLessThan:(long long)a0 transaction:(id)a1;
- (id)mainWorkoutActivityTypeWithTransaction:(id)a0 error:(id *)a1;
- (id)totalDistanceInCanonicalUnitWithTransaction:(id)a0 error:(id *)a1;
- (BOOL)updateCondenserVersion:(long long)a0 date:(id)a1 transaction:(id)a2 error:(id *)a3;
- (id)workoutDurationWithTransaction:(id)a0 error:(id *)a1;
- (id)workoutStartDateWithTransaction:(id)a0 error:(id *)a1;

@end
