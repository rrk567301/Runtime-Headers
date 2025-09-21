@interface HDSimpleGraphDatabaseAttributeEntity : HDSQLiteEntity

+ (id)foreignKeys;
+ (id)indices;
+ (id)databaseTable;
+ (id)predicateForAttributesWithType:(long long)a0;
+ (char)addAttributeWithType:(long long)a0 value:(id)a1 nodeID:(long long)a2 version:(long long)a3 slots:(unsigned long long)a4 database:(id)a5 error:(id *)a6;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (char)deleteAttributesWithNodeID:(long long)a0 lessThanVersion:(long long)a1 database:(id)a2 error:(id *)a3;
+ (char)deleteAttributesWithNodeID:(long long)a0 type:(long long)a1 database:(id)a2 error:(id *)a3;
+ (char)enumerateAttributesForNodeWithID:(long long)a0 skipDeleted:(char)a1 database:(id)a2 error:(id *)a3 enumerationHandler:(id /* block */)a4;
+ (char)enumerateAttributesWithPredicate:(id)a0 skipDeleted:(char)a1 database:(id)a2 error:(id *)a3 enumerationHandler:(id /* block */)a4;
+ (long long)maxVersion:(long long *)a0 slots:(unsigned long long *)a1 nodeID:(long long)a2 type:(long long)a3 database:(id)a4 error:(id *)a5;
+ (id)uniquedColumns;
+ (char)updateSlots:(unsigned long long)a0 nodeID:(long long)a1 type:(long long)a2 database:(id)a3 error:(id *)a4;

- (id)init;

@end
