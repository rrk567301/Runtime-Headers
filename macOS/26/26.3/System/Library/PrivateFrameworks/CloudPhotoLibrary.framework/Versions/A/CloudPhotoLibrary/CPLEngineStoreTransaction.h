@class NSError, NSString, CPLTransaction, NSThread, NSMutableArray, CPLEngineWriteTransactionBlocker, CPLEngineStore;

@interface CPLEngineStoreTransaction : NSObject {
    NSThread *_currentThread;
    BOOL _forWrite;
    NSMutableArray *_cleanupBlocks;
    CPLTransaction *_dirty;
}

@property (class, readonly, nonatomic) CPLEngineStoreTransaction *currentTransaction;

@property (retain, nonatomic) CPLEngineWriteTransactionBlocker *blocker;
@property (copy, nonatomic) NSError *error;
@property (readonly, nonatomic) BOOL isLibraryClosed;
@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) CPLEngineStore *store;

- (BOOL)do:(id /* block */)a0;
- (id)description;
- (void)_transactionDidFinish;
- (void)addCleanupBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_releaseDirty;
- (BOOL)_forWrite;
- (id)redactedDescription;
- (BOOL)canWrite;
- (void)dealloc;
- (BOOL)canRead;
- (void)_transactionWillBeginOnThread:(id)a0;
- (id)initForWrite:(BOOL)a0 store:(id)a1 identifier:(id)a2 description:(id)a3;

@end
