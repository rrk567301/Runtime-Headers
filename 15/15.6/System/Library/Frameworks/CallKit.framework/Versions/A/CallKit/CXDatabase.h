@class NSURL, NSMutableDictionary;

@interface CXDatabase : NSObject

@property (retain, nonatomic) NSURL *url;
@property (nonatomic) struct sqlite3 { } *database;
@property (retain, nonatomic) NSMutableDictionary *sqlQueryToStatements;
@property (readonly, nonatomic) long long lastInsertedRowID;
@property (readonly, nonatomic) int countOfRecordsModifiedByLastQuery;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (char)closeWithError:(id *)a0;
- (id)_statementForSQL:(id)a0 transient:(char)a1 error:(id *)a2;
- (char)beginTransactionWithError:(id *)a0;
- (char)commitTransactionWithError:(id *)a0;
- (char)enableForeignKeysWithError:(id *)a0;
- (char)executeSQL:(id)a0 error:(id *)a1;
- (char)executeSQL:(id)a0 withBindings:(id)a1 error:(id *)a2;
- (char)executeSQL:(id)a0 withBindings:(id)a1 transient:(char)a2 error:(id *)a3;
- (char)executeSQL:(id)a0 withStatementPreparationBlock:(id /* block */)a1 error:(id *)a2;
- (char)executeSQL:(id)a0 withStatementPreparationBlock:(id /* block */)a1 transient:(char)a2 error:(id *)a3;
- (id)initWithURL:(id)a0 readOnly:(char)a1 error:(id *)a2;
- (id)namesOfColumnsInTableWithName:(id)a0 error:(id *)a1;
- (char)performTransactionWithBlock:(id /* block */)a0 error:(id *)a1;
- (char)rollbackTransactionWithError:(id *)a0;
- (char)selectSQL:(id)a0 withBindings:(id)a1 expectedColumnCount:(long long)a2 resultRowHandler:(id /* block */)a3 error:(id *)a4;
- (char)selectSQL:(id)a0 withBindings:(id)a1 expectedColumnCount:(long long)a2 transient:(char)a3 resultRowHandler:(id /* block */)a4 error:(id *)a5;
- (char)setBusyTimeout:(double)a0 error:(id *)a1;
- (char)vacuumWithError:(id *)a0;

@end
