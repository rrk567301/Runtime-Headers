@class NSError, NSString, CPLTransaction, NSThread, NSMutableArray, CPLEngineWriteTransactionBlocker, CPLEngineStore;

@interface CPLEngineStoreTransaction : NSObject {
    NSThread *_currentThread;
    char _forWrite;
    NSMutableArray *_cleanupBlocks;
    CPLTransaction *_dirty;
}

@property (class, readonly, nonatomic) CPLEngineStoreTransaction *currentTransaction;

@property (retain, nonatomic) CPLEngineWriteTransactionBlocker *blocker;
@property (copy, nonatomic) NSError *error;
@property (readonly, nonatomic) char isLibraryClosed;
@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) CPLEngineStore *store;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)addCleanupBlock:(id /* block */)a0;
- (id)redactedDescription;
- (char)canRead;
- (char)canWrite;
- (char)do:(id /* block */)a0;
- (char)_forWrite;
- (void)_releaseDirty;
- (void)_transactionDidFinish;
- (void)_transactionWillBeginOnThread:(id)a0;
- (id)initForWrite:(char)a0 store:(id)a1 identifier:(id)a2 description:(id)a3;

@end
