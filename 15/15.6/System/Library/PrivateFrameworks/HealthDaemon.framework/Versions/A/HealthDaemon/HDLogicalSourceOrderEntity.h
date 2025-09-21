@interface HDLogicalSourceOrderEntity : HDHealthEntity

+ (long long)protectionClass;
+ (id)foreignKeys;
+ (id)indices;
+ (id)databaseTable;
+ (id)joinClausesForProperty:(id)a0;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (char)enumerateOrderedLogicalSourceIDsForType:(id)a0 transaction:(id)a1 error:(id *)a2 block:(id /* block */)a3;
+ (char)enumerateOrderedSourceIDsForType:(id)a0 transaction:(id)a1 error:(id *)a2 block:(id /* block */)a3;
+ (id)orderedLogicalSourceIDsForType:(id)a0 userOrdered:(char *)a1 profile:(id)a2 error:(id *)a3;
+ (id)propertyForSyncIdentity;
+ (id)propertyForSyncProvenance;
+ (char)saveOrderedLogicalSourceIDs:(id)a0 type:(id)a1 userOrdered:(char)a2 syncIdentity:(long long)a3 profile:(id)a4 error:(id *)a5;
+ (id)sourceIDsWithDataType:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (id)sourceIDsWithDataType:(id)a0 unorderedIDs:(id)a1 transaction:(id)a2 error:(id *)a3;
+ (id)syncIdentityForType:(id)a0 profile:(id)a1 transaction:(id)a2 error:(id *)a3;
+ (id)uniquedColumns;
+ (char)updateOrderedLogicalSourcesForType:(id)a0 transaction:(id)a1 error:(id *)a2 updateHandler:(id /* block */)a3;

@end
