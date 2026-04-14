@interface HDLogicalSourceOrderEntity : HDHealthEntity

+ (id)foreignKeys;
+ (long long)protectionClass;
+ (id)indices;
+ (id)databaseTable;
+ (id)joinClausesForProperty:(id)a0;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)uniquedColumns;
+ (id)propertyForSyncProvenance;
+ (BOOL)updateOrderedLogicalSourcesForType:(id)a0 transaction:(id)a1 error:(id *)a2 updateHandler:(id /* block */)a3;
+ (BOOL)saveOrderedLogicalSourceIDs:(id)a0 type:(id)a1 userOrdered:(BOOL)a2 profile:(id)a3 error:(id *)a4;
+ (BOOL)enumerateOrderedLogicalSourceIDsForType:(id)a0 transaction:(id)a1 error:(id *)a2 block:(id /* block */)a3;
+ (id)sourceIDsWithDataType:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (id)sourceIDsWithDataType:(id)a0 unorderedIDs:(id)a1 transaction:(id)a2 error:(id *)a3;
+ (id)orderedLogicalSourceIDsForType:(id)a0 userOrdered:(BOOL *)a1 profile:(id)a2 error:(id *)a3;
+ (BOOL)enumerateOrderedSourceIDsForType:(id)a0 transaction:(id)a1 error:(id *)a2 block:(id /* block */)a3;

@end
