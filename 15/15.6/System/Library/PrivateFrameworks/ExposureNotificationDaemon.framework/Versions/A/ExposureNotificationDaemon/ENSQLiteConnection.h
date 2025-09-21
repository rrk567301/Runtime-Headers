@class NSURL;

@interface ENSQLiteConnection : NSObject {
    struct sqlite3 { } *_db;
    struct __CFDictionary { } *_statementCache;
    char _isInTransaction;
}

@property (readonly, copy, nonatomic) NSURL *fileURL;
@property (readonly, nonatomic) char isOpen;
@property (readonly, nonatomic) long long lastInsertedRowID;
@property (nonatomic) int additionalOpenFlags;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)close;
- (int)openWithError:(id *)a0;
- (id)initWithDatabaseURL:(id)a0;
- (char)truncateWithError:(id *)a0;
- (char)executeSQL:(id)a0 error:(id *)a1;
- (char)_executeSQL:(id)a0 cacheStatement:(char)a1 error:(id *)a2 bindingHandler:(id /* block */)a3 enumerationHandler:(id /* block */)a4;
- (id)_initWithDatabaseURL:(id)a0;
- (id)_lastErrorWithResultCode:(int)a0;
- (char)_prepareStatementForSQL:(id)a0 cache:(char)a1 error:(id *)a2 statementHandler:(id /* block */)a3;
- (char)_stepStatement:(struct sqlite3_stmt { } *)a0 hasRow:(char *)a1 error:(id *)a2;
- (char)executeSQL:(id)a0 error:(id *)a1 bindingHandler:(id /* block */)a2 enumerationHandler:(id /* block */)a3;
- (char)executeUncachedSQL:(id)a0 error:(id *)a1;
- (char)executeUncachedSQLStatements:(id)a0 error:(id *)a1;
- (char)getIntegerValue:(long long *)a0 forPragma:(id)a1 error:(id *)a2;
- (char)getUserVersion:(long long *)a0 error:(id *)a1;
- (char)performTransactionWithType:(long long)a0 error:(id *)a1 usingBlock:(id /* block */)a2;
- (char)setIntegerValue:(long long)a0 forPragma:(id)a1 error:(id *)a2;
- (char)setUserVersion:(long long)a0 error:(id *)a1;

@end
