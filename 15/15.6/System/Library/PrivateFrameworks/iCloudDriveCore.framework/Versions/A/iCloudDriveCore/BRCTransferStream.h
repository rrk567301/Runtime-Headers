@class BRCDeadlineSource, NSArray, NSString, BRCAccountSession, NSMutableDictionary, NSObject, BRCSyncContext;
@protocol OS_dispatch_group, OS_dispatch_workloop;

@interface BRCTransferStream : NSObject <BRCLifeCycle, BRCSuspendable> {
    BRCAccountSession *_session;
    BRCSyncContext *_syncContext;
    BRCDeadlineSource *_schedulingSource;
    long long _minSignalTime;
    NSMutableDictionary *_inFlightOpByID;
    NSObject<OS_dispatch_workloop> *_transferWorkloop;
    NSObject<OS_dispatch_group> *_transferBatchRequestWaiter;
    char _isWaitingForTransferBatch;
    char _hasReachedCap;
    _Atomic int _multipleItemsInteractiveSchedulingCount;
    unsigned long long _maxCountOfBatchesInFlight;
}

@property (copy, nonatomic) id /* block */ streamDidBecomeReadyToTransferRecords;
@property (readonly) NSArray *operations;
@property (readonly, nonatomic) unsigned long long inFlightSize;
@property (readonly, nonatomic) char isCancelled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)close;
- (void)resume;
- (void)suspend;
- (void)cancel;
- (void)signal;
- (void)_schedule;
- (void)_setReachedCap:(char)a0;
- (void)_addBatchOperation:(id)a0;
- (long long)_compareTransferBatchOperationByQoSAndStartDateWithFirstOp:(id)a0 secondOp:(id)a1;
- (void)_evaluateCap;
- (void)_scheduleOneBatchWithQoS:(long long)a0;
- (void)addBatchOperation:(id)a0;
- (void)cancelTransferID:(id)a0 operationID:(id)a1;
- (void)endSchedulingMultipleItemsInteractively;
- (void)forceSchedulingPendingInteractiveTransfers;
- (id)initWithSyncContext:(id)a0 name:(id)a1 scheduler:(id)a2 maxCountOfBatchesInFlight:(unsigned long long)a3;
- (double)progressForTransferID:(id)a0 operationID:(id)a1;
- (void)signalWithDeadline:(long long)a0;
- (void)startSchedulingMultipleItemsInteractively;

@end
