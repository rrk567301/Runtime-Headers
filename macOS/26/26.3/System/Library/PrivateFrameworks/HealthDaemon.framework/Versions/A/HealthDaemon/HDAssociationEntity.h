@interface HDAssociationEntity : HDHealthEntity

+ (id)propertyForSyncProvenance;
+ (long long)protectionClass;
+ (id)databaseTable;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (BOOL)disassociateSampleUUIDs:(id)a0 withSampleUUID:(id)a1 type:(unsigned long long)a2 behavior:(unsigned long long)a3 destinationSubObjectReference:(id)a4 lastInsertedEntityID:(id *)a5 profile:(id)a6 error:(id *)a7;
+ (id)journalEntryForAssociation:(id)a0 objects:(id)a1 profile:(id)a2;
+ (BOOL)insertEntriesWithAssociationUUID:(id)a0 objectUUIDsData:(id)a1 type:(unsigned long long)a2 behavior:(unsigned long long)a3 destinationSubObjectReference:(id)a4 profile:(id)a5 error:(id *)a6;
+ (BOOL)disassociateSampleUUIDData:(id)a0 withSampleUUID:(id)a1 type:(unsigned long long)a2 behavior:(unsigned long long)a3 destinationSubObjectReference:(id)a4 profile:(id)a5 error:(id *)a6;
+ (BOOL)_bulkInsertEntriesWithParentUUID:(id)a0 childIDs:(id)a1 provenance:(long long)a2 syncIdentity:(long long)a3 type:(unsigned long long)a4 behavior:(unsigned long long)a5 creationDate:(id)a6 destinationSubObjectReference:(id)a7 profile:(id)a8 error:(id *)a9;
+ (id)objectsAssociatedWithObjectPID:(long long)a0 subObjectReference:(id)a1 dataTypes:(id)a2 associationType:(unsigned long long)a3 behavior:(unsigned long long)a4 limit:(unsigned long long)a5 sortDescending:(BOOL)a6 profile:(id)a7 error:(id *)a8;
+ (id)associationUUIDsForObjectUUID:(id)a0 subObjectReference:(id)a1 excludeDeleted:(BOOL)a2 profile:(id)a3 error:(id *)a4;
+ (id)deleteStatementForChildIDsWithTransaction:(id)a0;
+ (BOOL)_insertEntriesWithParentUUID:(id)a0 childUUIDsData:(id)a1 provenance:(long long)a2 syncIdentity:(long long)a3 type:(unsigned long long)a4 behavior:(unsigned long long)a5 deleted:(BOOL)a6 creationDate:(id)a7 destinationSubObjectReference:(id)a8 enforceSameSource:(BOOL)a9 permitPendingAssociations:(BOOL)a10 profile:(id)a11 lastInsertedEntityID:(id *)a12 error:(id *)a13;
+ (id)privateSubEntities;
+ (BOOL)insertEntriesWithAssociation:(id)a0 objects:(id)a1 type:(unsigned long long)a2 behavior:(unsigned long long)a3 destinationSubObject:(id)a4 enforceSameSource:(BOOL)a5 profile:(id)a6 transaction:(id)a7 error:(id *)a8;
+ (BOOL)_enumerateTypedAssociationsWithPredicate:(id)a0 syncEntityClass:(Class)a1 session:(id)a2 syncAnchorRange:(struct HDSyncAnchorRange { long long x0; long long x1; })a3 lastSyncAnchor:(long long *)a4 healthDatabase:(id)a5 transaction:(id)a6 error:(id *)a7 block:(id /* block */)a8;
+ (id)uniquedColumns;
+ (BOOL)realizePendingAssociationsWithTransaction:(id)a0 startingAnchor:(long long)a1 error:(id *)a2;
+ (id)joinClausesForProperty:(id)a0;
+ (BOOL)_enumerateAssociationsWithPredicate:(id)a0 syncEntityClass:(Class)a1 session:(id)a2 syncAnchorRange:(struct HDSyncAnchorRange { long long x0; long long x1; })a3 lastSyncAnchor:(long long *)a4 healthDatabase:(id)a5 error:(id *)a6 block:(id /* block */)a7;
+ (id)countOfObjectsAssociatedWithObjectUUID:(id)a0 subObjectReference:(id)a1 excludeDeleted:(BOOL)a2 profile:(id)a3 error:(id *)a4;
+ (BOOL)copyAssociationsFromChildID:(id)a0 toObjectID:(id)a1 profile:(id)a2 error:(id *)a3;
+ (id)propertyForSyncIdentity;
+ (id)tableAliases;
+ (BOOL)bulkInsertAssociationsWithParentUUID:(id)a0 childIDs:(id)a1 type:(unsigned long long)a2 behavior:(unsigned long long)a3 destinationSubObjectReference:(id)a4 syncIdentity:(long long)a5 profile:(id)a6 error:(id *)a7;
+ (BOOL)_insertCodableObjectAssociations:(id)a0 syncStore:(id)a1 profile:(id)a2 error:(id *)a3;
+ (BOOL)copyAssociationsFromObject:(id)a0 toObject:(id)a1 profile:(id)a2 error:(id *)a3;
+ (id)countOfObjectsAssociatedWithObjectPID:(long long)a0 excludeDeleted:(BOOL)a1 associationType:(unsigned long long)a2 behavior:(unsigned long long)a3 anchor:(long long)a4 transaction:(id)a5 error:(id *)a6;
+ (BOOL)associateSampleUUIDs:(id)a0 withSampleUUID:(id)a1 type:(unsigned long long)a2 behavior:(unsigned long long)a3 destinationSubObjectReference:(id)a4 lastInsertedEntityID:(id *)a5 profile:(id)a6 provenance:(long long)a7 syncIdentity:(long long)a8 creationDate:(id)a9 error:(id *)a10;
+ (id)indices;
+ (BOOL)associateSampleUUIDs:(id)a0 withSampleUUID:(id)a1 type:(unsigned long long)a2 behavior:(unsigned long long)a3 destinationSubObjectReference:(id)a4 lastInsertedEntityID:(id *)a5 profile:(id)a6 error:(id *)a7;
+ (BOOL)copyAssociationsFromObject:(id)a0 toObject:(id)a1 type:(unsigned long long)a2 behavior:(unsigned long long)a3 profile:(id)a4 error:(id *)a5;
+ (id)objectUUIDsAssociatedWithObjectUUID:(id)a0 subObjectReference:(id)a1 excludeDeleted:(BOOL)a2 profile:(id)a3 error:(id *)a4;
+ (BOOL)associateSampleUUIDData:(id)a0 withSampleUUID:(id)a1 type:(unsigned long long)a2 behavior:(unsigned long long)a3 destinationSubObjectReference:(id)a4 lastInsertedEntityID:(id *)a5 profile:(id)a6 error:(id *)a7;
+ (id)deleteStatementForParentIDWithTransaction:(id)a0;
+ (id)objectIDsForAssociationEntityWithPersistentID:(long long)a0 profile:(id)a1 error:(id *)a2;

@end
