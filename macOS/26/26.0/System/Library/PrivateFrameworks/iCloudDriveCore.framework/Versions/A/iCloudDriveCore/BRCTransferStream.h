@class BRCDeadlineSource, NSArray, NSString, BRCAccountSession, NSMutableDictionary, NSObject, BRCSyncContext;
@protocol OS_dispatch_group, OS_dispatch_workloop;

@interface BRCTransferStream : NSObject <BRCLifeCycle, BRCSuspendable> {
    BRCAccountSession *_session;
    BRCSyncContext *_syncContext;
    BRCDeadlineSource *_schedulingSource;
    NSMutableDictionary *_inFlightOpByID;
    NSObject<OS_dispatch_workloop> *_transferWorkloop;
    NSObject<OS_dispatch_group> *_transferBatchRequestWaiter;
    BOOL _isWaitingForTransferBatch;
    BOOL _hasReachedCap;
    _Atomic int _multipleItemsInteractiveSchedulingCount;
    unsigned long long _maxCountOfBatchesInFlight;
}

@property (copy, nonatomic) id /* block */ streamDidBecomeReadyToTransferRecords;
@property (readonly) NSArray *operations;
@property (readonly, nonatomic) unsigned long long inFlightSize;
@property (readonly, nonatomic) long long minSignalTime;
@property (readonly, nonatomic) BOOL isCancelled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancelTransferID:(id)a0 operationID:(id)a1;
- (void)_addBatchOperation:(id)a0;
- (id)initWithSyncContext:(id)a0 name:(id)a1 scheduler:(id)a2 maxCountOfBatchesInFlight:(unsigned long long)a3;
- (void)signal;
- (void)cancel;
- (long long)_compareTransferBatchOperationByQoSAndStartDateWithFirstOp:(id)a0 secondOp:(id)a1;
- (void)signalWithDeadline:(long long)a0;
- (void)suspend;
- (void)addBatchOperation:(id)a0;
- (void)_evaluateCap;
- (void)resume;
- (void)_schedule;
- (void)endSchedulingMultipleItemsInteractively;
- (void)startSchedulingMultipleItemsInteractively;
- (void)forceSchedulingPendingInteractiveTransfers;
- (double)progressForTransferID:(id)a0 operationID:(id)a1;
- (void)_scheduleOneBatchWithQoS:(long long)a0;
- (void)_setReachedCap:(BOOL)a0;
- (void)close;
- (void).cxx_destruct;

@end
