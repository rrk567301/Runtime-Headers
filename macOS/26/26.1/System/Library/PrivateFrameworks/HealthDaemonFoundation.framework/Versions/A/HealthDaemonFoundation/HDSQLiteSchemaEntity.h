@class NSString;

@interface HDSQLiteSchemaEntity : NSObject <HDSQLiteEntitySchema>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)uniquedColumns;
+ (id)indices;
+ (id)privateSubEntities;
+ (id)databaseTable;
+ (id)foreignKeys;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)tableAliases;
+ (id)primaryKeyColumns;
+ (id)triggers;
+ (id)checkConstraints;
+ (id)orderingTermForSortDescriptor:(id)a0;
+ (id)databaseName;
+ (id)createTableSQL;
+ (id)joinClausesForProperty:(id)a0;
+ (Class)entityClassForEnumeration;
+ (id)disambiguatedSQLForProperty:(id)a0;
+ (BOOL)isTemporary;
+ (void)enumerateColumnsWithBlock:(id /* block */)a0;
+ (const struct { id x0; id x1; unsigned char x2; } *)_cachedColumnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)_columnDefinitionObjects;
+ (id)allDatabaseColumnNames;
+ (id)deleteStatementWithProperty:(id)a0 database:(id)a1;
+ (id)disambiguatedDatabaseTable;
+ (Class)entityForProperty:(id)a0;
+ (BOOL)hasColumnWithName:(id)a0;
+ (BOOL)hasROWID;
+ (id)insertSQLForProperties:(id)a0 shouldReplace:(BOOL)a1;
+ (id)updateSQLForProperties:(id)a0 predicate:(id)a1;


@end
