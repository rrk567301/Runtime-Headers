@class HDCloudSyncTarget, NSString, HDCloudSyncSequenceRecord, NSSet, NSObject, HDCloudSyncSessionContext, NSMutableArray, HDSynchronousTaskGroup, HDCloudSyncSequenceState;
@protocol OS_dispatch_queue;

@interface HDCloudSyncPushSequenceOperation : HDCloudSyncOperation <HDSynchronousTaskGroupDelegate, HDSyncSessionDelegate> {
    HDCloudSyncTarget *_target;
    HDCloudSyncSequenceRecord *_sequenceRecord;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_syncQueue;
    HDSynchronousTaskGroup *_taskGroup;
    HDCloudSyncSessionContext *_sessionContext;
    NSMutableArray *_changeRecordsPendingPush;
    NSMutableArray *_recordsPendingDeletion;
    char _isPerformingRecentRecordRoll;
    char _shouldClearRebaselineDeadline;
    HDCloudSyncSequenceState *_sequenceState;
    NSSet *_excludedSyncIdentities;
}

@property (readonly, nonatomic) char hasMadeForwardProgress;
@property (retain, nonatomic) HDCloudSyncSequenceState *sequenceState;
@property (readonly, nonatomic) NSSet *excludedSyncIdentities;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)operationTagDependencies;
+ (char)shouldLogAtOperationStart;
+ (char)shouldPerformRecentRecordRollingForUnfrozenRecords:(id)a0 configuration:(id)a1;
+ (id)unfrozenChangeRecordsForPushTarget:(id)a0 sequenceRecord:(id)a1 configuration:(id)a2 error:(id *)a3;

- (void).cxx_destruct;
- (void)main;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1 target:(id)a2 sequence:(id)a3;
- (char)syncSession:(id)a0 didEndTransactionWithError:(id *)a1;
- (void)syncSession:(id)a0 didFinishSuccessfully:(char)a1 error:(id)a2;
- (void)syncSession:(id)a0 sendChanges:(id)a1 completion:(id /* block */)a2;
- (void)syncSession:(id)a0 willSyncAnchorRanges:(id)a1;
- (void)syncSessionWillBegin:(id)a0;
- (void)synchronousTaskGroup:(id)a0 didFinishWithSuccess:(char)a1 errors:(id)a2;

@end
