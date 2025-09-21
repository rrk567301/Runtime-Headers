@interface HDWorkoutBuilderAssociatedObjectEntity : HDHealthEntity

+ (id)uniquedColumns;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)foreignKeys;
+ (long long)protectionClass;
+ (id)databaseTable;
+ (long long)associateObject:(id)a0 code:(long long)a1 timestamp:(double)a2 withBuilder:(id)a3 transaction:(id)a4 error:(id *)a5;
+ (BOOL)enumerateAssociatedUUIDsForBuilder:(id)a0 transaction:(id)a1 error:(id *)a2 block:(id /* block */)a3;
+ (BOOL)removeAssociationFromBuilder:(id)a0 toUUID:(id)a1 transaction:(id)a2 error:(id *)a3;

@end
