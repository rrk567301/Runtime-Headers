@class NSMutableArray, NSMapTable, NSError, ICSQLiteConnectionOptions, NSNumber;
@protocol ICSQLiteConnectionDelegate;

@interface ICSQLiteConnection : NSObject {
    NSMutableArray *_afterTransactionBlocks;
    struct sqlite3 { } *_database;
    char _didResetForCorruption;
    NSMapTable *_preparedStatements;
    long long _transactionDepth;
    char _transactionWantsRollback;
}

@property (readonly, copy, nonatomic) NSError *currentError;
@property (readonly, copy, nonatomic) ICSQLiteConnectionOptions *options;
@property (weak, nonatomic) id<ICSQLiteConnectionDelegate> delegate;
@property (readonly, nonatomic) long long lastChangeCount;
@property (readonly, copy, nonatomic) NSNumber *userVersion;

- (void).cxx_destruct;
- (char)close;
- (char)open;
- (id)initWithOptions:(id)a0;
- (char)setUserVersion:(id)a0;
- (char)_close;
- (void)performTransaction:(id /* block */)a0;
- (char)executeStatement:(id)a0 error:(id *)a1;
- (char)executePreparedStatement:(id)a0 error:(id *)a1;
- (id)_verifiedStatementForSQL:(id)a0 error:(id *)a1;
- (char)_executeStatement:(id)a0 error:(id *)a1;
- (void)_finalizeAllStatements;
- (void)_flushAfterTransactionBlocks;
- (id)_prepareStatement:(id)a0 error:(id *)a1;
- (id)_statementForPreparedStatement:(id)a0 error:(id *)a1;
- (id)_verifiedStatementForPreparedStatement:(id)a0 error:(id *)a1;
- (void)dispatchAfterTransaction:(id /* block */)a0;
- (void)executePreparedQuery:(id)a0 withResults:(id /* block */)a1;
- (char)executePreparedStatement:(id)a0 error:(id *)a1 bindings:(id /* block */)a2;
- (void)executeQuery:(id)a0 withResults:(id /* block */)a1;
- (char)executeStatement:(id)a0 error:(id *)a1 bindings:(id /* block */)a2;
- (id)prepareStatement:(id)a0 error:(id *)a1;
- (char)_open;
- (char)_performResetAfterCorruptionError;
- (char)resetAfterCorruptionError;
- (char)resetAfterIOError;
- (char)truncate;

@end
