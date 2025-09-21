@class NSError, NSObject, FPDMoveOperation, FPMoveInfo, FPDActionOperationQueue, NSMutableSet, FPDMoveWriter;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface FPDMoveReader : NSObject <FPCancellable> {
    FPDMoveOperation *_operation;
    FPMoveInfo *_info;
    FPDActionOperationQueue *_moveQueue;
    FPDMoveWriter *_writer;
    char _startedPreflight;
    char _finishedPreflight;
    char _willMaterializeTargetFolder;
    char _isTargetFolderMaterialized;
    unsigned long long _depth;
    NSMutableSet *_cancelledRoots;
    char __cancelled;
    NSError *_error;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _logSection;
    NSObject<OS_dispatch_semaphore> *_clientUnblockSema;
}

@property (copy, nonatomic) id /* block */ rootPreflightCompletionBlock;
@property (copy, nonatomic) id /* block */ preflightCompletionBlock;
@property (copy, nonatomic) id /* block */ startDownloadBlock;
@property (copy, nonatomic) id /* block */ errorBlock;

+ (char)_hasDiskWriterSupportForDomain:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)start;
- (void)cancel;
- (char)_isCancelled;
- (void)_run;
- (void)_finishWithError:(id)a0;
- (void)cancelRoot:(id)a0;
- (void)dumpStateTo:(id)a0;
- (void)_bailOutOfRoot:(id)a0;
- (id)_getTargetFolderFor:(id)a0 root:(id)a1 error:(id *)a2;
- (void)_enqueueAtomsForRoot:(id)a0;
- (char)_enqueueItem:(id)a0 forRoot:(id)a1 atomically:(char)a2 useDiskWriter:(char)a3;
- (long long)_fileSizeBitsSupportAtPath:(id)a0;
- (void)_getSpaceForWriteSize:(long long)a0 atTargetPath:(id)a1 completion:(id /* block */)a2;
- (char)_isRootCancelled:(id)a0;
- (char)_isSingleMoveForRoot:(id)a0;
- (char)_isSinglePkgCopyForRoot:(id)a0;
- (id)_iteratorForRoot:(id)a0 enforceFPItem:(char)a1 error:(id *)a2;
- (void)_progressComputationPreflight:(id)a0 completion:(id /* block */)a1;
- (void)_runWithDownloadedTarget:(id /* block */)a0;
- (char)_shouldCheckFileSystemBitsForRoot:(id)a0 targetFolderURL:(id)a1;
- (char)_shouldCheckSpaceForRoot:(id)a0 targetFolderURL:(id)a1;
- (char)_shouldUseDiskWriterToPerformMoveForItem:(id)a0;
- (void)_t_unblock;
- (void)_t_waitForUnblock;
- (id)_targetNameForSource:(id)a0;
- (id)initWithMoveWriter:(id)a0 operation:(id)a1 queue:(id)a2;
- (void)verifyTargetURL:(id /* block */)a0;

@end
