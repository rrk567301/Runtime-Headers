@class NSString, NSMutableDictionary;

@interface CCSQLiteDatabase : NSObject <CCDatabase> {
    struct sqlite3 { } *_handle;
    NSMutableDictionary *_cachedSQLiteStatements;
}

@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) long long accessPermission;
@property (readonly, nonatomic) long long threadingMode;
@property (readonly, nonatomic) int dataProtectionClass;
@property (readonly, nonatomic) unsigned char databaseOptions;
@property (readonly, nonatomic) double busyTimeout;
@property (readonly, nonatomic) unsigned long long cacheSpill;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)openWithError:(id *)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)rollbackTransactionWithError:(id *)a0;
- (BOOL)commitTransactionWithError:(id *)a0;
- (BOOL)closeWithError:(id *)a0;
- (BOOL)beginWriteTransactionWithError:(id *)a0;
- (id)_cachedOrPreparedStatementFromCommand:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (BOOL)_executePragma:(id)a0 outError:(id *)a1;
- (BOOL)_prepareSqliteStatement:(struct sqlite3_stmt **)a0 usingCommand:(id)a1 outError:(id *)a2;
- (BOOL)_validateAndBindSqliteStatementParameters:(struct sqlite3_stmt { } *)a0 usingCommand:(id)a1 outError:(id *)a2;
- (BOOL)_validateCommand:(id)a0 outError:(id *)a1;
- (BOOL)beginReadTransactionWithError:(id *)a0;
- (id)enumerateCommand:(id)a0 options:(unsigned long long)a1;
- (BOOL)executeCommand:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (BOOL)executeCommand:(id)a0 options:(unsigned long long)a1 error:(id *)a2 returningRowBlock:(id /* block */)a3;
- (BOOL)executeCommandString:(id)a0 error:(id *)a1;
- (id)initWithPath:(id)a0 accessPermission:(long long)a1 threadingMode:(long long)a2 dataProtectionClass:(int)a3 databaseOptions:(unsigned char)a4 busyTimeout:(double)a5 cacheSpill:(unsigned int)a6;
- (int)lastExtendedErrorCode;
- (int)rowsModified:(id *)a0;

@end
