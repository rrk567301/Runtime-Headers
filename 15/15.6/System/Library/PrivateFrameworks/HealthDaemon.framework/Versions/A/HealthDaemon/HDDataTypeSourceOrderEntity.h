@interface HDDataTypeSourceOrderEntity : HDHealthEntity

+ (long long)protectionClass;
+ (id)foreignKeys;
+ (id)indices;
+ (id)databaseTable;
+ (id)joinClausesForProperty:(id)a0;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (char)enumerateOrderedSourceIDsForType:(id)a0 profile:(id)a1 error:(id *)a2 block:(id /* block */)a3;
+ (char)enumerateOrderedSourceIDsForType:(id)a0 profile:(id)a1 transaction:(id)a2 error:(id *)a3 block:(id /* block */)a4;
+ (id)orderedSourceIDsForType:(id)a0 userOrdered:(char *)a1 profile:(id)a2 error:(id *)a3;
+ (id)propertyForSyncProvenance;
+ (char)saveOrderedSourceIDs:(id)a0 type:(id)a1 userOrdered:(char)a2 profile:(id)a3 error:(id *)a4;
+ (id)tableAliases;
+ (char)updateOrderedSourcesForType:(id)a0 profile:(id)a1 error:(id *)a2 updateHandler:(id /* block */)a3;

@end
