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
    BOOL _isRunning;
    BOOL _isCancelled;
    NSMutableDictionary *_trackingHistory;
}

@property (retain) NSError *error;
@property (readonly, weak) id<PKInstallOperationControllerDelegate, NSObject> delegate;

+ (BOOL)_verboseMode;

- (void)dealloc;
- (id)description;
- (BOOL)run;
- (void).cxx_destruct;
- (int)installState;
- (BOOL)cancel;
- (double)estimatedTimeRemaining;
- (BOOL)_isCancelled;
- (double)progressPercentage;
- (void)_enqueueOperation:(id)a0;
- (id)_currentOperation;
- (BOOL)canCancel;
- (id)initWithRequest:(id)a0 analyzer:(id)a1;
- (id)initWithRequest:(id)a0 analyzer:(id)a1 delegate:(id)a2;
- (void)addPrepareOperationsIntoSandbox:(id)a0;
- (void)addStageOperationsIntoSandbox:(id)a0 inBackground:(BOOL)a1;
- (void)addPreLogoutCommitOperationsIntoSandbox:(id)a0;
- (void)addCommitOperationsFromSandbox:(id)a0 usingManager:(id)a1;
- (id)currentPackage;
- (id)currentPackageSpecifier;
- (double)totalEstimatedTime;
- (void)_markEndOfCancellableOperations;

@end
