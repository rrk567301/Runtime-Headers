@class NSString;

@interface HDQuantitySeriesDataEntity : HDSQLiteSchemaEntity <HDHealthEntitySchema>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)protectionClass;
+ (id)foreignKeys;
+ (id)databaseTable;
+ (id)primaryKeyColumns;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)createTableSQLWithBehavior:(id)a0;
+ (char)deleteAllSeriesWithDatabase:(id)a0 error:(id *)a1;
+ (char)deleteSeriesDataWithIdentifier:(long long)a0 database:(id)a1 error:(id *)a2;
+ (char)deleteSeriesDataWithIdentifier:(long long)a0 timestamps:(id)a1 database:(id)a2 error:(id *)a3;
+ (char)enumerateSeries:(long long)a0 after:(double)a1 inclusive:(char)a2 transaction:(id)a3 error:(id *)a4 handler:(id /* block */)a5;
+ (char)enumerateSeries:(long long)a0 transaction:(id)a1 error:(id *)a2 handler:(id /* block */)a3;
+ (char)enumerateWithDatabase:(id)a0 predicate:(id)a1 error:(id *)a2 handler:(id /* block */)a3;
+ (char)enumerateWithTransaction:(id)a0 predicate:(id)a1 error:(id *)a2 handler:(id /* block */)a3;
+ (char)getRangeAndCountForSeriesIdentifier:(long long)a0 transaction:(id)a1 error:(id *)a2 handler:(id /* block */)a3;
+ (char)hasROWID;
+ (id)indicesWithBehavior:(id)a0;
+ (char)insertOrReplaceEntity:(char)a0 database:(id)a1 value:(double)a2 duration:(double)a3 timestamp:(double)a4 identifier:(long long)a5 error:(id *)a6;
+ (id)predicateForSeriesIdentifier:(long long)a0;
+ (id)triggersWithBehavior:(id)a0;


@end
