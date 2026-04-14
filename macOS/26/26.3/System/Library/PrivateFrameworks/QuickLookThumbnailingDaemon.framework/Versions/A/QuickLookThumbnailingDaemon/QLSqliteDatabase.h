@class NSString, NSMutableDictionary, NSMapTable, NSObject;
@protocol OS_dispatch_queue;

@interface QLSqliteDatabase : NSObject {
    NSString *_path;
    struct sqlite3 { } *_db;
    NSObject<OS_dispatch_queue> *_queue;
    long long transactionCount;
    NSMutableDictionary *_statementCache;
    NSMapTable *_statementsInUseTable;
}

@property BOOL isCorrupted;
@property (retain) NSString *tracingPrefix;

+ (void)toggleSqlLogging;

- (BOOL)isOpened;
- (void)endTransaction;
- (void)checkpoint;
- (void)_dropStatementCache;
- (double)doubleFromColumn:(int)a0 inStatement:(struct sqlite3_stmt { } *)a1;
- (id)lastCrapWithDate:(id *)a0;
- (void)execute:(const char *)a0;
- (void)do:(id /* block */)a0;
- (void)bindObject:(id)a0 atIndex:(int)a1 inStatement:(struct sqlite3_stmt { } *)a2;
- (void)vacuum;
- (void)resetStatement:(struct sqlite3_stmt { } *)a0 unbindValuesThroughIndex:(int)a1;
- (void)closeDatabase;
- (id)_cacheStatement:(struct sqlite3_stmt { } *)a0 forKey:(id)a1;
- (void)executeWithCallback:(void /* function */ *)a0 context:(void *)a1 sql:(const char *)a2;
- (void)bindDouble:(double)a0 atIndex:(int)a1 inStatement:(struct sqlite3_stmt { } *)a2;
- (BOOL)beginTransaction;
- (void)executeWithRollbackOnError:(const char *)a0;
- (id)init;
- (struct __CFURL { } *)newCFURLFromColumn:(int)a0 inStatement:(struct sqlite3_stmt { } *)a1;
- (struct __CFString { } *)newCFStringFromColumn:(int)a0 inStatement:(struct sqlite3_stmt { } *)a1 uniqueInStringTable:(id)a2;
- (void)bindCFURL:(struct __CFURL { } *)a0 atIndex:(int)a1 inStatement:(struct sqlite3_stmt { } *)a2;
- (void)runStatement:(struct sqlite3_stmt { } *)a0 stepHandler:(id /* block */)a1;
- (id)_cachedStatementForKey:(id)a0;
- (id)_crapPath;
- (float)floatFromColumn:(int)a0 inStatement:(struct sqlite3_stmt { } *)a1;
- (void)enableSqliteTracing:(id)a0;
- (id)newPathFromColumn:(int)a0 inStatement:(struct sqlite3_stmt { } *)a1 uniqueInStringTable:(id)a2;
- (void)runStatement:(struct sqlite3_stmt { } *)a0 withBoundObjects:(id)a1 startingAtIndex:(int)a2 stepHandler:(id /* block */)a3;
- (void)_finalizeStatement:(struct sqlite3_stmt **)a0;
- (long long)columnCount:(struct sqlite3_stmt { } *)a0;
- (void)bindUnsignedLongLong:(unsigned long long)a0 atIndex:(int)a1 inStatement:(struct sqlite3_stmt { } *)a2;
- (void)setSqliteCacheSize:(long long)a0;
- (void).cxx_destruct;
- (void)bindInt:(int)a0 atIndex:(int)a1 inStatement:(struct sqlite3_stmt { } *)a2;
- (void)runStatement:(struct sqlite3_stmt { } *)a0 withBoundNumbers:(id)a1 startingAtIndex:(int)a2 stepHandler:(id /* block */)a3;
- (void *)newBufferFromColumn:(int)a0 inStatement:(struct sqlite3_stmt { } *)a1 length:(unsigned int *)a2;
- (void)disableSqliteTracing;
- (void)_databaseCorrupted;
- (BOOL)stepStatement:(struct sqlite3_stmt { } *)a0;
- (void)bindPath:(id)a0 atIndex:(int)a1 inStatement:(struct sqlite3_stmt { } *)a2;
- (void)dealloc;
- (void)executeWithCallback:(void /* function */ *)a0 context:(void *)a1 rollbackOnError:(BOOL)a2 sql:(const char *)a3 arguments:(char *)a4;
- (long long)lastInsertRowId;
- (unsigned long long)unsignedLongLongFromColumn:(int)a0 inStatement:(struct sqlite3_stmt { } *)a1;
- (id)newStringFromColumn:(int)a0 inStatement:(struct sqlite3_stmt { } *)a1 uniqueInStringTable:(id)a2;
- (void)finalizeStatement:(struct sqlite3_stmt **)a0;
- (void)runStatement:(struct sqlite3_stmt { } *)a0 withBoundRowIds:(id)a1 startingAtIndex:(int)a2 stepHandler:(id /* block */)a3;
- (int)intFromColumn:(int)a0 inStatement:(struct sqlite3_stmt { } *)a1;
- (struct sqlite3_stmt { } *)prepareStatement:(const char *)a0;
- (void)sqliteCrappedOut:(int)a0 message:(id)a1;
- (void)bindBytes:(void *)a0 length:(unsigned int)a1 atIndex:(int)a2 inStatement:(struct sqlite3_stmt { } *)a3;
- (BOOL)stepStatement:(struct sqlite3_stmt { } *)a0 didReturnData:(BOOL *)a1;
- (void)openDatabaseAtPath:(id)a0;
- (id)newColumnName:(int)a0 inStatement:(struct sqlite3_stmt { } *)a1 uniqueInStringTable:(id)a2;
- (void)executeSql:(const char *)a0 withCallback:(void /* function */ *)a1 context:(void *)a2;
- (id)queue;
- (id)newDataFromColumn:(int)a0 inStatement:(struct sqlite3_stmt { } *)a1 copyBytes:(BOOL)a2;
- (void)runStatement:(struct sqlite3_stmt { } *)a0 withBoundRowIds:(unsigned long long *)a1 count:(unsigned long long)a2 startingAtIndex:(int)a3 stepHandler:(id /* block */)a4;
- (void)executeWithBlob:(const void *)a0 length:(int)a1 format:(const char *)a2;

@end
