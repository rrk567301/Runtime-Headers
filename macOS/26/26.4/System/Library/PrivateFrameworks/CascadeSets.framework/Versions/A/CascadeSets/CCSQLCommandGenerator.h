@interface CCSQLCommandGenerator : NSObject

+ (id)prefixColumnName:(id)a0 withTableName:(id)a1;
+ (id)_generateCommaSeparatedPlaceholdersString:(unsigned long long)a0;
+ (id)_generateCommaSeparatedValuesString:(id)a0;
+ (id)_generateJoinClause:(id)a0;
+ (id)_generateOrderByClause:(id)a0;
+ (id)_produceCriterionClause:(id)a0 tableName:(id)a1;
+ (id)_produceJoinCriterionClause:(id)a0;
+ (id)_produceSelectClauseWithTableName:(id)a0 columnNames:(id)a1 count:(BOOL)a2 distinct:(BOOL)a3;
+ (id)_produceSetValuesClauseForColumnNames:(id)a0 columnValues:(id)a1;
+ (id)_removeEndingSemicolonFromCommandString:(id)a0;
+ (void)addLimit:(id)a0 offset:(id)a1 forSelect:(id)a2;
+ (id)deleteFromTableWithName:(id)a0 criterion:(id)a1 returningColumns:(id)a2;
+ (id)dropTableIfExistsWithName:(id)a0;
+ (id)insertCommandStringWithTableName:(id)a0 columnNames:(id)a1 returningColumns:(id)a2 onConflict:(id)a3;
+ (void)replaceOffset:(id)a0 forSelect:(id)a1;
+ (id)selectFromTableWithName:(id)a0 columns:(id)a1 count:(BOOL)a2 distinct:(BOOL)a3 joinTables:(id)a4 criterion:(id)a5 order:(id)a6 limit:(id)a7 offset:(id)a8 ctes:(id)a9 unionSelects:(id)a10 unionAll:(BOOL)a11;
+ (id)updateWithTableName:(id)a0 columnNames:(id)a1 columnValues:(id)a2 criterion:(id)a3 returningColumns:(id)a4;

- (id)init;

@end
