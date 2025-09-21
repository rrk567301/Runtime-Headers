@class NSMutableArray;

@interface _NSDocumentFileAccess : _NSDocumentSerializationObject {
    unsigned long long _continueCount;
    unsigned long long _fileURLStabilizationCount;
    NSMutableArray *_pendingInferiorFileURLOnlyAccesses;
    unsigned long long _fileURLAccessorCount;
    NSMutableArray *_fileAccessCanContinueBlocks;
}

@property char invokedOnMainThread;
@property char accessesFileURLOnly;
@property (readonly) char fileURLStabilized;
@property (readonly) char canContinueFileAccess;
@property (readonly) char canFinishFileAccess;
@property (retain) _NSDocumentFileAccess *superiorFileAccess;

- (id)init;
- (void).cxx_destruct;
- (void)_attemptToGrantInferiorFileAccess:(id)a0;
- (void)addedFileURLOnlyAccess;
- (void)continueFileAccess;
- (void)dequeueInferiorFileURLOnlyFileAccess:(id)a0;
- (void)discontinueFileAccess;
- (void)enqueueInferiorFileURLOnlyFileAccess:(id)a0;
- (void)removedFileURLOnlyAccess;
- (void)stabilizedFileURL;
- (void)whenFileAccessCanContinueInvokeBlock:(id /* block */)a0;

@end
