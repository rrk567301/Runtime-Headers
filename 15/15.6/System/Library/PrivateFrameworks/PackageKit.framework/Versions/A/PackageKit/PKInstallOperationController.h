@class PKInstallRequest, NSObject, NSMutableDictionary, PKInstallOperation, NSError, PKInstallAnalyzer, NSMutableArray;
@protocol PKInstallOperationControllerDelegate, OS_dispatch_queue, NSObject;

@interface PKInstallOperationController : NSObject {
    PKInstallRequest *_request;
    PKInstallAnalyzer *_analyzer;
    NSMutableArray *_operations;
    PKInstallOperation *_lastCancellableOp;
    double _queuedTime;
    double _dequeuedTime;
    NSObject<OS_dispatch_queue> *_updateQueue;
    char _isRunning;
    char _isCancelled;
    NSMutableDictionary *_trackingHistory;
}

@property (retain) NSError *error;
@property (readonly, weak) id<PKInstallOperationControllerDelegate, NSObject> delegate;

+ (char)_verboseMode;

- (void)dealloc;
- (id)description;
- (char)run;
- (void).cxx_destruct;
- (int)installState;
- (char)cancel;
- (double)estimatedTimeRemaining;
- (char)_isCancelled;
- (double)progressPercentage;
- (void)_markEndOfCancellableOperations;
- (id)_currentOperation;
- (void)_enqueueOperation:(id)a0;
- (void)addCommitOperationsFromSandbox:(id)a0 usingManager:(id)a1;
- (void)addPreLogoutCommitOperationsIntoSandbox:(id)a0;
- (void)addPrepareOperationsIntoSandbox:(id)a0;
- (void)addStageOperationsIntoSandbox:(id)a0 inBackground:(char)a1;
- (char)canCancel;
- (id)currentPackage;
- (id)currentPackageSpecifier;
- (id)initWithRequest:(id)a0 analyzer:(id)a1;
- (id)initWithRequest:(id)a0 analyzer:(id)a1 delegate:(id)a2;
- (double)totalEstimatedTime;

@end
