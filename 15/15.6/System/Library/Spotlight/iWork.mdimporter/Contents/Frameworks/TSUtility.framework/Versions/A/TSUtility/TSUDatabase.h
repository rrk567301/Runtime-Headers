@interface TSUDatabase : NSObject {
    struct sqlite3_stmt { } *_beginTransactionStatement;
    struct sqlite3_stmt { } *_commitTransactionStatement;
    struct sqlite3_stmt { } *_rollbackTransactionStatement;
}

@property (readonly, nonatomic) struct sqlite3 { } *_sqliteDatabase;
@property (readonly, nonatomic) char readonly;

- (void)dealloc;
- (id)initWithPath:(id)a0 error:(id *)a1;
- (char)closeWithError:(id *)a0;
- (char)beginTransactionWithError:(id *)a0;
- (char)commitTransactionWithError:(id *)a0;
- (char)rollbackTransactionWithError:(id *)a0;
- (char)compactWithError:(id *)a0;
- (char)setSchemaVersion:(int)a0 error:(id *)a1;
- (id)_initWithPath:(id)a0 readonly:(char)a1 error:(id *)a2;
- (char)upgradeFromSchemaVersion:(int)a0 error:(id *)a1;
- (char)_upgradeSchemaWithError:(id *)a0;
- (char)endSingleResultQuery:(struct sqlite3_stmt { } *)a0 shouldFinalize:(char)a1 error:(id *)a2;
- (char)executeUpdate:(struct sqlite3_stmt { } *)a0 shouldFinalize:(char)a1 error:(id *)a2;
- (char)executeUpdateWithSql:(const char *)a0 error:(id *)a1;
- (id)initReadonlyWithPath:(id)a0 error:(id *)a1;
- (char)needsUpgradeFromSchemaVersion:(int)a0;
- (char)prepareStatement:(struct sqlite3_stmt **)a0 sql:(const char *)a1 error:(id *)a2;
- (char)startSingleResultQuery:(struct sqlite3_stmt { } *)a0 error:(id *)a1;
- (char)startSingleResultQuery:(struct sqlite3_stmt { } *)a0 shouldLogErrors:(char)a1 error:(id *)a2;

@end
