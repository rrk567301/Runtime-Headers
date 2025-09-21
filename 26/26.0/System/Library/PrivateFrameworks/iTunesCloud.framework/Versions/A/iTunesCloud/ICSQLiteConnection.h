@class NSMutableArray, NSMapTable, NSError, ICSQLiteConnectionOptions, NSNumber;
@protocol ICSQLiteConnectionDelegate;

@interface ICSQLiteConnection : NSObject {
    NSMutableArray *_afterTransactionBlocks;
    struct sqlite3 { } *_database;
    BOOL _didResetForCorruption;
    NSMapTable *_preparedStatements;
    long long _transactionDepth;
    BOOL _transactionWantsRollback;
}

@property (readonly, copy, nonatomic) NSError *currentError;
@property (readonly, copy, nonatomic) ICSQLiteConnectionOptions *options;
@property (weak, nonatomic) id<ICSQLiteConnectionDelegate> delegate;
@property (readonly, nonatomic) long long lastChangeCount;
@property (readonly, copy, nonatomic) NSNumber *userVersion;

- (BOOL)_open;
- (BOOL)_close;
- (id)prepareStatement:(id)a0 error:(id *)a1;
- (BOOL)_performResetAfterCorruptionError;
- (void)executePreparedQuery:(id)a0 withResults:(id /* block */)a1;
- (id)initWithOptions:(id)a0;
- (BOOL)setUserVersion:(id)a0;
- (BOOL)truncate;
- (BOOL)_executeStatement:(id)a0 error:(id *)a1;
- (BOOL)executePreparedStatement:(id)a0 error:(id *)a1 bindings:(id /* block */)a2;
- (id)_prepareStatement:(id)a0 error:(id *)a1;
- (void)performTransaction:(id /* block */)a0;
- (id)_verifiedStatementForSQL:(id)a0 error:(id *)a1;
- (BOOL)open;
- (BOOL)executeStatement:(id)a0 error:(id *)a1;
- (void)executeQuery:(id)a0 withResults:(id /* block */)a1;
- (BOOL)executePreparedStatement:(id)a0 error:(id *)a1;
- (id)_verifiedStatementForPreparedStatement:(id)a0 error:(id *)a1;
- (BOOL)resetAfterCorruptionError;
- (BOOL)executeStatement:(id)a0 error:(id *)a1 bindings:(id /* block */)a2;
- (void)_finalizeAllStatements;
- (BOOL)resetAfterIOError;
- (void)_flushAfterTransactionBlocks;
- (void)dispatchAfterTransaction:(id /* block */)a0;
- (id)_statementForPreparedStatement:(id)a0 error:(id *)a1;
- (BOOL)close;
- (void).cxx_destruct;

@end
