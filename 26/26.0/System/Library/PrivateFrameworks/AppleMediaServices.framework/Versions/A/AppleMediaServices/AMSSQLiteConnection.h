@class NSMapTable, NSMutableArray, AMSSQLiteConnectionOptions;
@protocol AMSSQLiteConnectionDelegate;

@interface AMSSQLiteConnection : NSObject {
    NSMutableArray *_afterTransactionBlocks;
    struct sqlite3 { } *_database;
    BOOL _didResetForCorruption;
    NSMapTable *_preparedStatements;
    long long _transactionDepth;
    BOOL _transactionWantsRollback;
}

@property (readonly, copy, nonatomic) AMSSQLiteConnectionOptions *options;
@property (weak, nonatomic) id<AMSSQLiteConnectionDelegate> delegate;
@property (readonly, nonatomic) long long lastChangeCount;

- (BOOL)openWithError:(id *)a0;
- (id)prepareStatement:(id)a0 error:(id *)a1;
- (void)dealloc;
- (void)executePreparedQuery:(id)a0 withResults:(id /* block */)a1;
- (BOOL)_resetAfterIOError:(id)a0 error:(out id *)a1;
- (id)initWithOptions:(id)a0;
- (BOOL)_executeStatement:(id)a0 error:(id *)a1;
- (BOOL)executePreparedStatement:(id)a0 error:(id *)a1 bindings:(id /* block */)a2;
- (BOOL)closeWithError:(out id *)a0;
- (id)_prepareStatement:(id)a0 error:(id *)a1;
- (void)performTransaction:(id /* block */)a0;
- (BOOL)executeWithError:(id *)a0 usingBlock:(id /* block */)a1;
- (id)_verifiedStatementForSQL:(id)a0 error:(id *)a1;
- (BOOL)_closeDueToError:(id)a0 error:(out id *)a1;
- (BOOL)_performResetAfterCorruptionError:(id)a0 error:(out id *)a1;
- (BOOL)finalizePreparedStatement:(id)a0 error:(id *)a1;
- (BOOL)executeStatement:(id)a0 error:(id *)a1;
- (void)executeQuery:(id)a0 withResults:(id /* block */)a1;
- (BOOL)truncateWithError:(out id *)a0;
- (BOOL)executePreparedStatement:(id)a0 error:(id *)a1;
- (id)_verifiedStatementForPreparedStatement:(id)a0 error:(id *)a1;
- (BOOL)_executeWithError:(id *)a0 usingBlock:(id /* block */)a1;
- (BOOL)executeStatement:(id)a0 error:(id *)a1 bindings:(id /* block */)a2;
- (void)_finalizeAllStatements;
- (BOOL)_openAndAllowRetry:(BOOL)a0 error:(id *)a1;
- (void)_flushAfterTransactionBlocks;
- (BOOL)_resetAfterCorruptionError:(id)a0 error:(out id *)a1;
- (void)dispatchAfterTransaction:(id /* block */)a0;
- (id)_statementForPreparedStatement:(id)a0 error:(id *)a1;
- (BOOL)_openWithError:(id *)a0;
- (void).cxx_destruct;

@end
