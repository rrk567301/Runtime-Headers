@class CKSQLiteTable, NSArray, CKSQLiteDatabase, NSMutableDictionary, NSDictionary, CKSQLiteCompiledStatementDecoder, NSMutableArray, CKSQLiteCompiledStatementSetup, NSPointerArray, NSNumber;

@interface CKSQLiteCompiledStatement : NSObject {
    CKSQLiteDatabase *_db;
    struct sqlite3_stmt { } *_handle;
    CKSQLiteCompiledStatementSetup *_setup;
    NSPointerArray *_fetchedValues;
    NSMutableDictionary *_bindingTypesByVariable;
    NSDictionary *_searchValues;
    BOOL _needsSearchBinding;
    NSMutableArray *_boundObjects;
    CKSQLiteCompiledStatementDecoder *_decoder;
    unsigned int _resultInfoCount;
}

@property (readonly, weak, nonatomic) CKSQLiteTable *table;
@property (retain, nonatomic) id label;
@property (retain, nonatomic) NSArray *searchProperties;
@property (retain, nonatomic) NSNumber *limit;
@property (retain, nonatomic) NSNumber *offset;
@property (readonly, nonatomic) unsigned long long resultColumnCount;

+ (id)statementForFetchingMinimumValueForColumn:(id)a0 inTable:(id)a1;
+ (id)statementForFetchingDanglingTableNamesInDatabase:(id)a0 tocTableName:(id)a1 tocDBPropertyName:(id)a2;
+ (id)_statementForFetchingMinMax:(id)a0 forColumn:(id)a1 inTable:(id)a2;
+ (id)statementForFetchingColumns:(id)a0 distinct:(BOOL)a1 inTable:(id)a2;
+ (id)statementForSizingColumn:(id)a0 inTable:(id)a1;
+ (id)allocWithResultCapacity:(unsigned long long)a0;
+ (id)statementForCountingRowsInTable:(id)a0;
+ (id)statementForFetchingAllTableNamesInDatabase:(id)a0;
+ (id)statementForInserting:(id)a0 orUpdating:(id)a1 inTable:(id)a2;
+ (id)statementForFetchingMaximumValueForColumn:(id)a0 inTable:(id)a1;
+ (id)statementForFetchingDistinctColumns:(id)a0 inTable:(id)a1;
+ (id)statementForDeletingInTable:(id)a0 returning:(id)a1;
+ (id)statementForUpdatingColumns:(id)a0 inTable:(id)a1;
+ (id)statementForFetchingColumns:(id)a0 inTable:(id)a1;
+ (id)statementForSummingColumn:(id)a0 inTable:(id)a1;
+ (id)statementForInserting:(id)a0 inTable:(id)a1;

- (void)invalidate;
- (void)orderByProperty:(id)a0 ascending:(BOOL)a1;
- (BOOL)step:(id *)a0;
- (id)doSearchValueBinding;
- (id)initWithDatabase:(id)a0 sql:(id)a1 resultColumn:(id)a2 resultColumnType:(unsigned int)a3;
- (id)addBindingVariable:(id)a0 withAssociatedProperty:(id)a1;
- (id)initWithTable:(id)a0 sql:(id)a1 tableColumnResults:(id)a2;
- (id)fetchedColumns;
- (id)sqlValueForVariable:(id)a0;
- (void)setSearchPredicate:(id)a0 forProperties:(id)a1;
- (id)initWithTable:(id)a0 sql:(id)a1;
- (void).cxx_destruct;
- (id)initWithDatabase:(id)a0 sql:(id)a1;
- (void)resetAndClearBindings;
- (id)bindValue:(id)a0 ofType:(unsigned int)a1 atIndex:(int)a2;
- (BOOL)overridePropertyInfoForProperty:(id)a0 newResultType:(unsigned int)a1;
- (id)description;
- (id)propertyDecoder:(id *)a0;
- (id)_fillFetchedValues;
- (id)initWithTable:(id)a0 sql:(id)a1 resultColumn:(id)a2 resultColumnType:(unsigned int)a3;
- (id)bindValueColumn:(id)a0 type:(unsigned int)a1 value:(id)a2;
- (void)setSearchValues:(id)a0;
- (id)compile;
- (void)enumerateResultColumnsWithBlock:(id /* block */)a0;
- (id)searchBindingsDescription;
- (id)boundObjects;
- (void)enumerateResultColumnsWithFetchedValues:(id)a0 block:(id /* block */)a1;
- (id)cksqlcs_appendSQLConstantValueToString:(id)a0;
- (id)fetchedValues;
- (void)dealloc;

@end
