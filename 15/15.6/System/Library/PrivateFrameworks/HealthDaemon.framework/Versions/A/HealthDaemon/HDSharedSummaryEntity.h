@interface HDSharedSummaryEntity : HDHealthEntity

+ (long long)protectionClass;
+ (id)foreignKeys;
+ (id)databaseTable;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (long long)countOfObjectsForTransactionID:(long long)a0 healthDatabase:(id)a1 error:(id *)a2;
+ (char)deleteAllSummariesWithDatabaseTransaction:(id)a0 error:(id *)a1;
+ (id)entityWithUUID:(id)a0 databaseTransaction:(id)a1 error:(id *)a2;
+ (char)enumerateEntitiesWithReuseTransactionID:(unsigned long long)a0 package:(id)a1 names:(id)a2 databaseTransaction:(id)a3 error:(id *)a4 enumerationHandler:(id /* block */)a5;
+ (char)enumerateEntitiesWithTransactionID:(unsigned long long)a0 package:(id)a1 names:(id)a2 databaseTransaction:(id)a3 error:(id *)a4 enumerationHandler:(id /* block */)a5;
+ (char)enumerateSummariesWithTransactionID:(unsigned long long)a0 package:(id)a1 names:(id)a2 includedObjectTypes:(id)a3 databaseTransaction:(id)a4 error:(id *)a5 enumerationHandler:(id /* block */)a6;
+ (id)insertOrReplaceWithUUID:(id)a0 package:(id)a1 name:(id)a2 version:(id)a3 compatibilityVersion:(id)a4 transactionID:(unsigned long long)a5 summaryData:(id)a6 databaseTransaction:(id)a7 error:(id *)a8;
+ (char)reuseSummariesForTransactionID:(unsigned long long)a0 databaseTransaction:(id)a1 error:(id *)a2;
+ (id)uniquedColumns;

- (id)UUIDInDatabaseTransaction:(id)a0 error:(id *)a1;
- (id)compatibilityVersionInDatabaseTransaction:(id)a0 error:(id *)a1;
- (id)nameInDatabaseTransaction:(id)a0 error:(id *)a1;
- (id)packageInDatabaseTransaction:(id)a0 error:(id *)a1;
- (id)reuseTransactionIDInDatabaseTransaction:(id)a0 error:(id *)a1;
- (char)setReuseTransactionID:(id)a0 databaseTransaction:(id)a1 error:(id *)a2;
- (char)setSynced:(char)a0 databaseTransaction:(id)a1 error:(id *)a2;
- (id)summaryDataInDatabaseTransaction:(id)a0 error:(id *)a1;
- (char)syncedInDatabaseTransaction:(id)a0 error:(id *)a1;
- (id)transactionIDInDatabaseTransaction:(id)a0 error:(id *)a1;
- (id)versionInDatabaseTransaction:(id)a0 error:(id *)a1;

@end
