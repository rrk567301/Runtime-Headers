@interface HDAssociationEntity : HDHealthEntity

+ (long long)protectionClass;
+ (id)indices;
+ (id)databaseTable;
+ (id)joinClausesForProperty:(id)a0;
+ (char)realizePendingAssociationsWithTransaction:(id)a0 startingAnchor:(long long)a1 error:(id *)a2;
+ (char)_enumerateAssociationsWithPredicate:(id)a0 syncEntityClass:(Class)a1 session:(id)a2 syncAnchorRange:(struct HDSyncAnchorRange { long long x0; long long x1; })a3 lastSyncAnchor:(long long *)a4 healthDatabase:(id)a5 error:(id *)a6 block:(id /* block */)a7;
+ (char)_enumerateTypedAssociationsWithPredicate:(id)a0 syncEntityClass:(Class)a1 session:(id)a2 syncAnchorRange:(struct HDSyncAnchorRange { long long x0; long long x1; })a3 lastSyncAnchor:(long long *)a4 healthDatabase:(id)a5 transaction:(id)a6 error:(id *)a7 block:(id /* block */)a8;
+ (char)_insertCodableObjectAssociations:(id)a0 syncStore:(id)a1 profile:(id)a2 error:(id *)a3;
+ (char)_insertEntriesWithParentUUID:(id)a0 childUUIDsData:(id)a1 provenance:(long long)a2 syncIdentity:(long long)a3 type:(unsigned long long)a4 deleted:(char)a5 creationDate:(id)a6 destinationSubObjectReference:(id)a7 enforceSameSource:(char)a8 permitPendingAssociations:(char)a9 profile:(id)a10 lastInsertedEntityID:(id *)a11 error:(id *)a12;
+ (char)associateSampleUUIDData:(id)a0 withSampleUUID:(id)a1 type:(unsigned long long)a2 destinationSubObjectReference:(id)a3 lastInsertedEntityID:(id *)a4 profile:(id)a5 error:(id *)a6;
+ (char)associateSampleUUIDs:(id)a0 withSampleUUID:(id)a1 type:(unsigned long long)a2 destinationSubObjectReference:(id)a3 lastInsertedEntityID:(id *)a4 profile:(id)a5 error:(id *)a6;
+ (char)associateSampleUUIDs:(id)a0 withSampleUUID:(id)a1 type:(unsigned long long)a2 destinationSubObjectReference:(id)a3 lastInsertedEntityID:(id *)a4 profile:(id)a5 provenance:(long long)a6 syncIdentity:(long long)a7 creationDate:(id)a8 error:(id *)a9;
+ (id)associationUUIDsForObjectUUID:(id)a0 subObjectReference:(id)a1 excludeDeleted:(char)a2 profile:(id)a3 error:(id *)a4;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (char)copyAssociationsFromChildID:(id)a0 toObjectID:(id)a1 profile:(id)a2 error:(id *)a3;
+ (char)copyAssociationsFromObject:(id)a0 toObject:(id)a1 profile:(id)a2 error:(id *)a3;
+ (char)copyAssociationsFromObject:(id)a0 toObject:(id)a1 type:(unsigned long long)a2 profile:(id)a3 error:(id *)a4;
+ (id)countOfObjectsAssociatedWithObjectPID:(long long)a0 excludeDeleted:(char)a1 associationType:(unsigned long long)a2 anchor:(long long)a3 transaction:(id)a4 error:(id *)a5;
+ (id)countOfObjectsAssociatedWithObjectUUID:(id)a0 subObjectReference:(id)a1 excludeDeleted:(char)a2 profile:(id)a3 error:(id *)a4;
+ (id)deleteStatementForChildIDsWithTransaction:(id)a0;
+ (id)deleteStatementForParentIDWithTransaction:(id)a0;
+ (char)disassociateSampleUUIDData:(id)a0 withSampleUUID:(id)a1 type:(unsigned long long)a2 destinationSubObjectReference:(id)a3 profile:(id)a4 error:(id *)a5;
+ (char)disassociateSampleUUIDs:(id)a0 withSampleUUID:(id)a1 type:(unsigned long long)a2 destinationSubObjectReference:(id)a3 lastInsertedEntityID:(id *)a4 profile:(id)a5 error:(id *)a6;
+ (char)insertEntriesWithAssociation:(id)a0 objects:(id)a1 type:(unsigned long long)a2 destinationSubObject:(id)a3 enforceSameSource:(char)a4 profile:(id)a5 transaction:(id)a6 error:(id *)a7;
+ (char)insertEntriesWithAssociationUUID:(id)a0 objectUUIDsData:(id)a1 type:(unsigned long long)a2 destinationSubObjectReference:(id)a3 profile:(id)a4 error:(id *)a5;
+ (id)journalEntryForAssociation:(id)a0 objects:(id)a1 profile:(id)a2;
+ (id)objectIDsForAssociationEntityWithPersistentID:(long long)a0 profile:(id)a1 error:(id *)a2;
+ (id)objectUUIDsAssociatedWithObjectUUID:(id)a0 subObjectReference:(id)a1 excludeDeleted:(char)a2 profile:(id)a3 error:(id *)a4;
+ (id)objectsAssociatedWithObjectPID:(long long)a0 subObjectReference:(id)a1 dataTypes:(id)a2 associationType:(unsigned long long)a3 limit:(unsigned long long)a4 sortDescending:(char)a5 profile:(id)a6 error:(id *)a7;
+ (id)privateSubEntities;
+ (id)propertyForSyncIdentity;
+ (id)propertyForSyncProvenance;
+ (id)tableAliases;
+ (id)uniquedColumns;

@end
