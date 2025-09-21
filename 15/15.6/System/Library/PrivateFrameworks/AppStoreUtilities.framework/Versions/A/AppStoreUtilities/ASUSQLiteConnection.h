@class ASUSQLiteConnectionOptions, NSMutableArray, NSMapTable;
@protocol ASUSQLiteConnectionDelegate;

@interface ASUSQLiteConnection : NSObject {
    NSMutableArray *_afterTransactionBlocks;
    struct sqlite3 { } *_database;
    NSMapTable *_preparedStatements;
    long long _transactionDepth;
    char _transactionWantsRollback;
}

@property (readonly, copy, nonatomic) ASUSQLiteConnectionOptions *options;
@property (weak, nonatomic) id<ASUSQLiteConnectionDelegate> delegate;
@property (readonly, nonatomic) long long lastChangeCount;

- (void)dealloc;
- (void).cxx_destruct;
- (char)close;
- (char)open;
- (id)initWithOptions:(id)a0;
- (char)executeStatement:(id)a0 error:(id *)a1;
- (char)executePreparedStatement:(id)a0 error:(id *)a1;
- (void)dispatchAfterTransaction:(id /* block */)a0;
- (void)executePreparedQuery:(id)a0 withResults:(id /* block */)a1;
- (char)executePreparedStatement:(id)a0 error:(id *)a1 bindings:(id /* block */)a2;
- (void)executeQuery:(id)a0 withResults:(id /* block */)a1;
- (char)executeStatement:(id)a0 error:(id *)a1 bindings:(id /* block */)a2;
- (char)finalizePreparedStatement:(id)a0 error:(id *)a1;
- (id)prepareStatement:(id)a0 error:(id *)a1;
- (char)tableExists:(id)a0;
- (char)performSavepoint:(id /* block */)a0;
- (char)performTransaction:(id /* block */)a0 error:(id *)a1;

@end
