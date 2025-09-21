@interface HDLogicalSourceOrderEntity : HDHealthEntity

+ (id)uniquedColumns;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)indices;
+ (id)foreignKeys;
+ (long long)protectionClass;
+ (id)databaseTable;
+ (id)propertyForSyncIdentity;
+ (id)syncIdentityForType:(id)a0 profile:(id)a1 transaction:(id)a2 error:(id *)a3;
+ (id)orderedLogicalSourceIDsForType:(id)a0 userOrdered:(BOOL *)a1 profile:(id)a2 error:(id *)a3;
+ (id)joinClausesForProperty:(id)a0;
+ (id)propertyForSyncProvenance;
+ (BOOL)saveOrderedLogicalSourceIDs:(id)a0 type:(id)a1 userOrdered:(BOOL)a2 syncIdentity:(long long)a3 profile:(id)a4 error:(id *)a5;
+ (id)sourceIDsWithDataType:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (id)sourceIDsWithDataType:(id)a0 unorderedIDs:(id)a1 transaction:(id)a2 error:(id *)a3;
+ (BOOL)updateOrderedLogicalSourcesForType:(id)a0 transaction:(id)a1 error:(id *)a2 updateHandler:(id /* block */)a3;
+ (BOOL)enumerateOrderedSourceIDsForType:(id)a0 transaction:(id)a1 error:(id *)a2 block:(id /* block */)a3;
+ (BOOL)enumerateOrderedLogicalSourceIDsForType:(id)a0 transaction:(id)a1 error:(id *)a2 block:(id /* block */)a3;

@end
