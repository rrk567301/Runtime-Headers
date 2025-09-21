@interface HDDataExternalSyncIdentifierEntity : HDHealthEntity

+ (long long)protectionClass;
+ (id)foreignKeys;
+ (id)indices;
+ (id)databaseTable;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (char)enumerateValuesWithProfile:(id)a0 error:(id *)a1 handler:(id /* block */)a2;
+ (char)insertSyncIdentifierWithProfile:(id)a0 database:(id)a1 objectID:(long long)a2 localSourceID:(long long)a3 externalSyncObjectCode:(long long)a4 syncIdentifier:(id)a5 syncVersion:(id)a6 deleted:(char)a7 errorOut:(id *)a8;
+ (char)populateSyncInfoForLocalSourceID:(long long)a0 externalSyncObjectCode:(long long)a1 syncIdentifier:(id)a2 deleted:(char)a3 database:(id)a4 objectIDOut:(id *)a5 errorOut:(id *)a6;
+ (char)populateSyncInfoForObjectID:(long long)a0 database:(id)a1 localSourceIDOut:(long long *)a2 externalSyncObjectCodeOut:(long long *)a3 syncIdentifierOut:(id *)a4 syncVersionOut:(id *)a5 deletedOut:(char *)a6 errorOut:(id *)a7;

@end
