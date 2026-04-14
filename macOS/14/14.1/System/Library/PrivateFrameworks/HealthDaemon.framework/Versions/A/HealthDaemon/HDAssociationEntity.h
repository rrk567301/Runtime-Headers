@interface HDAssociationEntity : HDHealthEntity

+ (long long)protectionClass;
+ (id)indices;
+ (id)databaseTable;
+ (id)joinClausesForProperty:(id)a0;
+ (BOOL)insertEntriesWithAssociationUUID:(id)a0 objectUUIDsData:(id)a1 profile:(id)a2 error:(id *)a3;
+ (BOOL)realizePendingAssociationsWithTransaction:(id)a0 startingAnchor:(long long)a1 error:(id *)a2;
+ (BOOL)_insertEntriesWithParentUUID:(id)a0 childUUIDsData:(id)a1 provenance:(long long)a2 syncIdentity:(long long)a3 enforceSameSource:(BOOL)a4 permitPendingAssociations:(BOOL)a5 profile:(id)a6 error:(id *)a7;
+ (BOOL)associateSampleUUIDData:(id)a0 withSampleUUID:(id)a1 profile:(id)a2 error:(id *)a3;
+ (BOOL)associateSampleUUIDs:(id)a0 withSampleUUID:(id)a1 profile:(id)a2 error:(id *)a3;
+ (id)associationUUIDsForObjectUUID:(id)a0 profile:(id)a1 error:(id *)a2;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (BOOL)copyAssociationsFromChildID:(id)a0 toObjectID:(id)a1 profile:(id)a2 error:(id *)a3;
+ (BOOL)copyAssociationsFromObject:(id)a0 toObject:(id)a1 profile:(id)a2 error:(id *)a3;
+ (id)countOfObjectsAssociatedWithObjectUUID:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)deleteStatementForChildIDsWithTransaction:(id)a0;
+ (id)deleteStatementForParentIDWithTransaction:(id)a0;
+ (BOOL)insertEntriesWithAssociation:(id)a0 objects:(id)a1 enforceSameSource:(BOOL)a2 profile:(id)a3 transaction:(id)a4 error:(id *)a5;
+ (id)journalEntryForAssociation:(id)a0 objects:(id)a1 profile:(id)a2;
+ (id)objectIDsForAssociationEntityWithPersistentID:(long long)a0 profile:(id)a1 error:(id *)a2;
+ (id)objectUUIDsAssociatedWithObjectUUID:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)privateSubEntities;
+ (id)propertyForSyncIdentity;
+ (id)propertyForSyncProvenance;
+ (id)tableAliases;
+ (id)uniquedColumns;

@end
