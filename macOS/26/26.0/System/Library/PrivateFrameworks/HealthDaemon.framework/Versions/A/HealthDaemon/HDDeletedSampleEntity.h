@interface HDDeletedSampleEntity : HDDeletedObjectEntity

+ (BOOL)addCodableObject:(id)a0 toCollection:(id)a1;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)entityEncoderForProfile:(id)a0 transaction:(id)a1 purpose:(long long)a2 encodingOptions:(id)a3 authorizationFilter:(id /* block */)a4;
+ (long long)protectionClass;
+ (BOOL)isConcreteEntity;
+ (id)databaseTable;
+ (id)codableObjectsFromObjectCollection:(id)a0;
+ (BOOL)insertCodableDeletedSamples:(id)a0 provenance:(id)a1 profile:(id)a2 error:(id *)a3;
+ (BOOL)enumerateDeletedSamplesInProfile:(id)a0 createdOnOrAfter:(id)a1 createdBefore:(id)a2 limit:(unsigned long long)a3 error:(id *)a4 handler:(id /* block */)a5;
+ (Class)_entityClassForDeletion;
+ (BOOL)deletedSampleInProfile:(id)a0 sampleUUID:(id)a1 error:(id *)a2 handler:(id /* block */)a3;
+ (BOOL)enumerateDeletedSamplesWithTypes:(id)a0 profile:(id)a1 restrictedSourceEntities:(id)a2 limit:(unsigned long long)a3 anchor:(long long)a4 error:(id *)a5 handler:(id /* block */)a6;
+ (long long)nextSyncAnchorWithStartAnchor:(long long)a0 predicate:(id)a1 session:(id)a2 healthDatabase:(id)a3 error:(id *)a4;
+ (BOOL)enumerateDeletedSamplesInProfile:(id)a0 anchor:(long long)a1 limit:(unsigned long long)a2 error:(id *)a3 handler:(id /* block */)a4;
+ (BOOL)enumerateEntitiesForSyncWithProperties:(id)a0 predicate:(id)a1 session:(id)a2 syncAnchorRange:(struct HDSyncAnchorRange { long long x0; long long x1; })a3 limit:(unsigned long long)a4 lastSyncAnchor:(long long *)a5 healthDatabase:(id)a6 error:(id *)a7 block:(id /* block */)a8;
+ (id)insertDeletedObject:(id)a0 dataType:(id)a1 provenanceIdentifier:(id)a2 deletionDate:(id)a3 persistStartAndEndDates:(BOOL)a4 startTimestamp:(double)a5 endTimestamp:(double)a6 inDatabase:(id)a7 error:(id *)a8;

@end
