@class NSString, NSCache;

@interface SiriCoreSQLiteDatabase : NSObject {
    struct sqlite3 { } *_handle;
    NSCache *_cachedSQLiteStatementsByQueryString;
}

@property (readonly, copy, nonatomic) NSString *path;
@property (readonly, nonatomic) long long dataProtectionClass;
@property (readonly, nonatomic) long long options;

- (void).cxx_destruct;
- (char)openWithError:(id *)a0;
- (char)executeQuery:(id)a0 error:(id *)a1;
- (id)executeQuery:(id)a0;
- (char)closeWithError:(id *)a0;
- (char)beginTransactionWithError:(id *)a0;
- (char)commitTransactionWithError:(id *)a0;
- (char)rollbackTransactionWithError:(id *)a0;
- (char)vacuumWithError:(id *)a0;
- (char)performIntegrityCheckWithError:(id *)a0;
- (char)releaseSavepointWithName:(id)a0 error:(id *)a1;
- (char)alterTableWithName:(id)a0 addColumn:(id)a1 error:(id *)a2;
- (char)alterTableWithName:(id)a0 renameTo:(id)a1 error:(id *)a2;
- (char)checkpointWriteAheadLogWithError:(id *)a0;
- (unsigned long long)countValuesInTableWithName:(id)a0 columnName:(id)a1 behavior:(long long)a2 indexedBy:(id)a3 criterion:(id)a4 range:(id)a5 error:(id *)a6;
- (char)createIndex:(id)a0 error:(id *)a1;
- (char)createTable:(id)a0 error:(id *)a1;
- (char)deleteFromTableWithName:(id)a0 indexedBy:(id)a1 criterion:(id)a2 error:(id *)a3;
- (char)dropIndexWithName:(id)a0 error:(id *)a1;
- (char)dropTableWithName:(id)a0 error:(id *)a1;
- (char)executeQueryString:(id)a0 error:(id *)a1;
- (id)fetchTableNamesWithError:(id *)a0;
- (id)fetchTableWithName:(id)a0 error:(id *)a1;
- (id)initWithPath:(id)a0 dataProtectionClass:(long long)a1 options:(long long)a2;
- (char)insertIntoTableWithName:(id)a0 record:(id)a1 error:(id *)a2;
- (char)insertIntoTableWithName:(id)a0 valueMap:(id)a1 error:(id *)a2;
- (char)performForeignKeyCheckWithError:(id *)a0;
- (char)performQuickCheckWithError:(id *)a0;
- (char)rollbackToSavepointWithName:(id)a0 error:(id *)a1;
- (char)savepointWithName:(id)a0 error:(id *)a1;
- (id)selectRecordsFromTableWithName:(id)a0 columnNames:(id)a1 behavior:(long long)a2 indexedBy:(id)a3 criterion:(id)a4 order:(id)a5 range:(id)a6 recordBuilder:(id)a7 error:(id *)a8;
- (id)selectValueMapsFromTableWithName:(id)a0 columnNames:(id)a1 behavior:(long long)a2 indexedBy:(id)a3 criterion:(id)a4 order:(id)a5 range:(id)a6 error:(id *)a7;
- (id)selectValueTuplesFromTableWithName:(id)a0 columnNames:(id)a1 behavior:(long long)a2 indexedBy:(id)a3 criterion:(id)a4 order:(id)a5 range:(id)a6 error:(id *)a7;
- (id)selectValuesFromTableWithName:(id)a0 columnName:(id)a1 behavior:(long long)a2 indexedBy:(id)a3 criterion:(id)a4 order:(id)a5 range:(id)a6 error:(id *)a7;
- (char)updateTableWithName:(id)a0 columnName:(id)a1 columnValue:(id)a2 criterion:(id)a3 error:(id *)a4;
- (char)updateTableWithName:(id)a0 valueMap:(id)a1 criterion:(id)a2 error:(id *)a3;

@end
