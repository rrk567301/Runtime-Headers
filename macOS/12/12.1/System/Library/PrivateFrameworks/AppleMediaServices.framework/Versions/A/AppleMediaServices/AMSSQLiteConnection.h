@class NSMapTable, NSError, NSMutableArray, AMSSQLiteConnectionOptions;
@protocol AMSSQLiteConnectionDelegate;

@interface AMSSQLiteConnection : NSObject {
    NSMutableArray *_afterTransactionBlocks;
    struct sqlite3 { } *_database;
    BOOL _didResetForCorruption;
    NSMapTable *_preparedStatements;
    long long _transactionDepth;
    BOOL _transactionWantsRollback;
}

@property (readonly, copy, nonatomic) NSError *currentError;
@property (readonly, copy, nonatomic) AMSSQLiteConnectionOptions *options;
@property (weak, nonatomic) id<AMSSQLiteConnectionDelegate> delegate;
@property (readonly, nonatomic) long long lastChangeCount;

- (void)dealloc;
- (BOOL)open;
- (BOOL)close;
- (void).cxx_destruct;
- (id)initWithOptions:(id)a0;
- (BOOL)_close;
- (BOOL)_open;
- (BOOL)executeStatement:(id)a0 error:(id *)a1;
- (void)executeQuery:(id)a0 withResults:(id /* block */)a1;
- (BOOL)executeStatement:(id)a0 error:(id *)a1 bindings:(id /* block */)a2;
- (id)prepareStatement:(id)a0 error:(id *)a1;
- (BOOL)executePreparedStatement:(id)a0 error:(id *)a1 bindings:(id /* block */)a2;
- (BOOL)finalizePreparedStatement:(id)a0 error:(id *)a1;
- (BOOL)truncate;
- (void)performTransaction:(id /* block */)a0;
- (id)_verifiedStatementForPreparedStatement:(id)a0 error:(id *)a1;
- (BOOL)_executeStatement:(id)a0 error:(id *)a1;
- (id)_verifiedStatementForSQL:(id)a0 error:(id *)a1;
- (void)_flushAfterTransactionBlocks;
- (id)_prepareStatement:(id)a0 error:(id *)a1;
- (BOOL)_openAndAllowRetry:(BOOL)a0;
- (void)_finalizeAllStatements;
- (BOOL)_executeWithError:(id *)a0 usingBlock:(id /* block */)a1;
- (BOOL)_resetAfterCorruptionError;
- (BOOL)_resetAfterIOError;
- (BOOL)_performResetAfterCorruptionError;
- (id)_statementForPreparedStatement:(id)a0 error:(id *)a1;
- (void)dispatchAfterTransaction:(id /* block */)a0;
- (void)executePreparedQuery:(id)a0 withResults:(id /* block */)a1;
- (BOOL)executePreparedStatement:(id)a0 error:(id *)a1;
- (BOOL)executeWithError:(id *)a0 usingBlock:(id /* block */)a1;

@end
