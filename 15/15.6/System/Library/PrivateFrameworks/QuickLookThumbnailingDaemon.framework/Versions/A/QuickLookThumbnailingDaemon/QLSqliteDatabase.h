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

@property char isCorrupted;
@property (retain) NSString *tracingPrefix;

+ (void)toggleSqlLogging;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)queue;
- (char)beginTransaction;
- (void)endTransaction;
- (void)vacuum;
- (void)checkpoint;
- (void)execute:(const char *)a0;
- (struct sqlite3_stmt { } *)prepareStatement:(const char *)a0;
- (void)closeDatabase;
- (long long)lastInsertRowId;
- (void)bindDouble:(double)a0 atIndex:(int)a1 inStatement:(struct sqlite3_stmt { } *)a2;
- (struct __CFURL { } *)newCFURLFromColumn:(int)a0 inStatement:(struct sqlite3_stmt { } *)a1;
- (void)runStatement:(struct sqlite3_stmt { } *)a0 withBoundRowIds:(unsigned long long *)a1 count:(unsigned long long)a2 startingAtIndex:(int)a3 stepHandler:(id /* block */)a4;
- (void)bindObject:(id)a0 atIndex:(int)a1 inStatement:(struct sqlite3_stmt { } *)a2;
- (void)do:(id /* block */)a0;
- (id)_cacheStatement:(struct sqlite3_stmt { } *)a0 forKey:(id)a1;
- (id)_cachedStatementForKey:(id)a0;
- (id)_crapPath;
- (void)_databaseCorrupted;
- (void)_dropStatementCache;
- (void)_finalizeStatement:(struct sqlite3_stmt **)a0;
- (void)bindBytes:(void *)a0 length:(unsigned int)a1 atIndex:(int)a2 inStatement:(struct sqlite3_stmt { } *)a3;
- (void)bindCFURL:(struct __CFURL { } *)a0 atIndex:(int)a1 inStatement:(struct sqlite3_stmt { } *)a2;
- (void)bindInt:(int)a0 atIndex:(int)a1 inStatement:(struct sqlite3_stmt { } *)a2;
- (void)bindPath:(id)a0 atIndex:(int)a1 inStatement:(struct sqlite3_stmt { } *)a2;
- (void)bindUnsignedLongLong:(unsigned long long)a0 atIndex:(int)a1 inStatement:(struct sqlite3_stmt { } *)a2;
- (long long)columnCount:(struct sqlite3_stmt { } *)a0;
- (void)disableSqliteTracing;
- (double)doubleFromColumn:(int)a0 inStatement:(struct sqlite3_stmt { } *)a1;
- (void)enableSqliteTracing:(id)a0;
- (void)executeSql:(const char *)a0 withCallback:(void /* function */ *)a1 context:(void *)a2;
- (void)executeWithBlob:(const void *)a0 length:(int)a1 format:(const char *)a2;
- (void)executeWithCallback:(void /* function */ *)a0 context:(void *)a1 rollbackOnError:(char)a2 sql:(const char *)a3 arguments:(struct __va_list_tag { unsigned int x0; unsigned int x1; void *x2; void *x3; }[1])a4;
- (void)executeWithCallback:(void /* function */ *)a0 context:(void *)a1 sql:(const char *)a2;
- (void)executeWithRollbackOnError:(const char *)a0;
- (void)finalizeStatement:(struct sqlite3_stmt **)a0;
- (float)floatFromColumn:(int)a0 inStatement:(struct sqlite3_stmt { } *)a1;
- (int)intFromColumn:(int)a0 inStatement:(struct sqlite3_stmt { } *)a1;
- (char)isOpened;
- (id)lastCrapWithDate:(id *)a0;
- (void *)newBufferFromColumn:(int)a0 inStatement:(struct sqlite3_stmt { } *)a1 length:(unsigned int *)a2;
- (struct __CFString { } *)newCFStringFromColumn:(int)a0 inStatement:(struct sqlite3_stmt { } *)a1 uniqueInStringTable:(id)a2;
- (id)newColumnName:(int)a0 inStatement:(struct sqlite3_stmt { } *)a1 uniqueInStringTable:(id)a2;
- (id)newDataFromColumn:(int)a0 inStatement:(struct sqlite3_stmt { } *)a1 copyBytes:(char)a2;
- (id)newPathFromColumn:(int)a0 inStatement:(struct sqlite3_stmt { } *)a1 uniqueInStringTable:(id)a2;
- (id)newStringFromColumn:(int)a0 inStatement:(struct sqlite3_stmt { } *)a1 uniqueInStringTable:(id)a2;
- (void)openDatabaseAtPath:(id)a0;
- (void)resetStatement:(struct sqlite3_stmt { } *)a0 unbindValuesThroughIndex:(int)a1;
- (void)runStatement:(struct sqlite3_stmt { } *)a0 stepHandler:(id /* block */)a1;
- (void)runStatement:(struct sqlite3_stmt { } *)a0 withBoundNumbers:(id)a1 startingAtIndex:(int)a2 stepHandler:(id /* block */)a3;
- (void)runStatement:(struct sqlite3_stmt { } *)a0 withBoundObjects:(id)a1 startingAtIndex:(int)a2 stepHandler:(id /* block */)a3;
- (void)runStatement:(struct sqlite3_stmt { } *)a0 withBoundRowIds:(id)a1 startingAtIndex:(int)a2 stepHandler:(id /* block */)a3;
- (void)setSqliteCacheSize:(long long)a0;
- (void)sqliteCrappedOut:(int)a0 message:(id)a1;
- (char)stepStatement:(struct sqlite3_stmt { } *)a0;
- (char)stepStatement:(struct sqlite3_stmt { } *)a0 didReturnData:(char *)a1;
- (unsigned long long)unsignedLongLongFromColumn:(int)a0 inStatement:(struct sqlite3_stmt { } *)a1;

@end
