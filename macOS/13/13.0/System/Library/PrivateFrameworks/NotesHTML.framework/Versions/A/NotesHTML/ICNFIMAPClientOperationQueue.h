@class ICNFIMAPClientSelectOperation, NSString, NSRecursiveLock, ICNFMCActivityMonitor, ICNFIMAPClientSuspendOperation, ICNFIMAPClientDoneOperation, NSObject, ICNFIMAPGateway;
@protocol OS_dispatch_source;

@interface ICNFIMAPClientOperationQueue : NSOperationQueue {
    ICNFIMAPClientDoneOperation *_doneOperation;
    ICNFIMAPClientSelectOperation *_selectOperation;
    ICNFIMAPClientSuspendOperation *_suspendOperation;
    NSRecursiveLock *_activityMonitorLock;
    NSObject<OS_dispatch_source> *_activityFinishTimer;
    BOOL _activityMonitorIsActive;
}

@property (readonly, nonatomic) BOOL isIdle;
@property (retain) ICNFIMAPClientDoneOperation *doneOperation;
@property (retain) ICNFIMAPClientSelectOperation *selectOperation;
@property (readonly, copy, nonatomic) NSString *selectedMailboxName;
@property (retain) ICNFIMAPClientSuspendOperation *suspendOperation;
@property (retain, nonatomic) NSRecursiveLock *addOperationLock;
@property (copy) NSString *activityName;
@property (readonly) ICNFMCActivityMonitor *activityMonitor;
@property (retain) ICNFIMAPGateway *gateway;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)activityDidFinish:(id)a0;
- (void)refreshIdle;
- (void)activityDidStart:(id)a0;
- (void)_clearActivityFinishTimer;
- (void)_postDelayedActivityFinished;
- (BOOL)addClientOperation:(id)a0 outUpdatedOperation:(id *)a1;
- (BOOL)waitUntilOperationIsFinished:(id)a0;
- (id)newSelectOperationForResumingIfNeeded;
- (void)changeSelectDependenciesTo:(id)a0;
- (void)setDoneToReady;
- (BOOL)refreshDoneWithGateway:(id)a0 operation:(id)a1;
- (void)_setupDependeciesOnDone;
- (void)clearDoneWithOperation:(id)a0;
- (BOOL)shouldAllowIdleToExecute:(id)a0;
- (BOOL)setupDependenciesOnSuspendCreatingIfNeeded;
- (void)suspendIfNeededAndClear:(BOOL)a0;
- (void)finishIdling;

@end
