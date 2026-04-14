@class NSString, NSThread, CPLEngineWriteTransactionBlocker, NSError, NSMutableArray, CPLTransaction;

@interface CPLEngineStoreTransaction : NSObject {
    NSThread *_currentThread;
    BOOL _forWrite;
    NSMutableArray *_cleanupBlocks;
    CPLTransaction *_dirty;
}

@property (retain, nonatomic) CPLEngineWriteTransactionBlocker *blocker;
@property (copy, nonatomic) NSError *error;
@property (copy, nonatomic) NSString *name;

- (void)dealloc;
- (id)description;
- (id)redactedDescription;
- (void).cxx_destruct;
- (void)addCleanupBlock:(id /* block */)a0;
- (BOOL)canRead;
- (BOOL)canWrite;
- (BOOL)do:(id /* block */)a0;
- (id)initForWrite:(BOOL)a0 identifier:(id)a1 description:(id)a2;
- (void)_releaseDirty;
- (void)_transactionWillBeginOnThread:(id)a0;
- (void)_transactionDidFinish;
- (BOOL)_forWrite;

@end
