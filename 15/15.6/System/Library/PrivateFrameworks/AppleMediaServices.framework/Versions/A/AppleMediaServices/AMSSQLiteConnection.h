@class NSMapTable, NSMutableArray, AMSSQLiteConnectionOptions;
@protocol AMSSQLiteConnectionDelegate;

@interface AMSSQLiteConnection : NSObject {
    NSMutableArray *_afterTransactionBlocks;
    struct sqlite3 { } *_database;
    char _didResetForCorruption;
    NSMapTable *_preparedStatements;
    long long _transactionDepth;
    char _transactionWantsRollback;
}

@property (readonly, copy, nonatomic) AMSSQLiteConnectionOptions *options;
@property (weak, nonatomic) id<AMSSQLiteConnectionDelegate> delegate;
@property (readonly, nonatomic) long long lastChangeCount;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithOptions:(id)a0;
- (char)openWithError:(id *)a0;
- (void)performTransaction:(id /* block */)a0;
- (char)executeStatement:(id)a0 error:(id *)a1;
- (char)closeWithError:(out id *)a0;
- (char)_openWithError:(id *)a0;
- (char)executePreparedStatement:(id)a0 error:(id *)a1;
- (id)_verifiedStatementForSQL:(id)a0 error:(id *)a1;
- (char)_closeDueToError:(id)a0 error:(out id *)a1;
- (char)_executeStatement:(id)a0 error:(id *)a1;
- (char)_executeWithError:(id *)a0 usingBlock:(id /* block */)a1;
- (void)_finalizeAllStatements;
- (void)_flushAfterTransactionBlocks;
- (char)_openAndAllowRetry:(char)a0 error:(id *)a1;
- (char)_performResetAfterCorruptionError:(id)a0 error:(out id *)a1;
- (id)_prepareStatement:(id)a0 error:(id *)a1;
- (char)_resetAfterCorruptionError:(id)a0 error:(out id *)a1;
- (char)_resetAfterIOError:(id)a0 error:(out id *)a1;
- (id)_statementForPreparedStatement:(id)a0 error:(id *)a1;
- (id)_verifiedStatementForPreparedStatement:(id)a0 error:(id *)a1;
- (void)dispatchAfterTransaction:(id /* block */)a0;
- (void)executePreparedQuery:(id)a0 withResults:(id /* block */)a1;
- (char)executePreparedStatement:(id)a0 error:(id *)a1 bindings:(id /* block */)a2;
- (void)executeQuery:(id)a0 withResults:(id /* block */)a1;
- (char)executeStatement:(id)a0 error:(id *)a1 bindings:(id /* block */)a2;
- (char)executeWithError:(id *)a0 usingBlock:(id /* block */)a1;
- (char)finalizePreparedStatement:(id)a0 error:(id *)a1;
- (id)prepareStatement:(id)a0 error:(id *)a1;
- (char)truncateWithError:(out id *)a0;

@end
