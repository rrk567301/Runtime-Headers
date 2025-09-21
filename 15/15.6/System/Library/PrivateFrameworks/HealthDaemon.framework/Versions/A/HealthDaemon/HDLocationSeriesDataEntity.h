@class NSString;

@interface HDLocationSeriesDataEntity : HDSQLiteSchemaEntity <HDHealthEntitySchema>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)databaseName;
+ (long long)protectionClass;
+ (id)foreignKeys;
+ (id)databaseTable;
+ (id)primaryKeyColumns;
+ (char)copySeriesDataWithIdentifier:(long long)a0 toSeriesIdentifier:(long long)a1 database:(id)a2 error:(id *)a3;
+ (char)_enumerateSeriesForValidation:(long long)a0 database:(id)a1 error:(id *)a2 handler:(id /* block */)a3;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)createTableSQLWithBehavior:(id)a0;
+ (char)deleteAllSeriesWithDatabase:(id)a0 error:(id *)a1;
+ (char)deleteSeriesDataWithIdentifier:(long long)a0 database:(id)a1 error:(id *)a2;
+ (char)deleteSeriesDataWithIdentifier:(long long)a0 timestamps:(id)a1 database:(id)a2 error:(id *)a3;
+ (char)enumerateSeries:(long long)a0 database:(id)a1 startDate:(id)a2 endDate:(id)a3 error:(id *)a4 handler:(id /* block */)a5;
+ (char)enumerateSeries:(long long)a0 transaction:(id)a1 error:(id *)a2 handler:(id /* block */)a3;
+ (char)enumerateWithTransaction:(id)a0 predicate:(id)a1 error:(id *)a2 handler:(id /* block */)a3;
+ (char)getRangeAndCountForSeriesIdentifier:(long long)a0 database:(id)a1 error:(id *)a2 handler:(id /* block */)a3;
+ (char)hasROWID;
+ (id)indicesWithBehavior:(id)a0;
+ (char)insertOrReplaceEntity:(char)a0 database:(id)a1 identifier:(long long)a2 timestamp:(double)a3 location:(id)a4 error:(id *)a5;
+ (id)triggersWithBehavior:(id)a0;
+ (char)unitTesting_deleteSeriesDataWithIdentifier:(long long)a0 timestamp:(id)a1 database:(id)a2 error:(id *)a3;


@end
