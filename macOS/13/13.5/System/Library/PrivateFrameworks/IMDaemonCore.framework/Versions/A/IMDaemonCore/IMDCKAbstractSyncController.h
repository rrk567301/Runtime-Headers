@class IMDCKSyncState;
@protocol IMDCKAbstractSyncControllerDelegate;

@interface IMDCKAbstractSyncController : NSObject

@property (nonatomic) BOOL isSyncing;
@property (nonatomic) unsigned long long recordsRead;
@property (nonatomic) unsigned long long recordsWritten;
@property (nonatomic) unsigned long long recordsWriteFailed;
@property (readonly, nonatomic) IMDCKSyncState *syncState;
@property (weak) id<IMDCKAbstractSyncControllerDelegate> delegate;

- (void).cxx_destruct;
- (long long)syncControllerRecordType;
- (BOOL)_fetchedAllChangesFromCloudKit;
- (void)addSyncDebuggingInfoToDictionary:(id)a0;
- (id)ckUtilities;
- (void)clearLocalSyncState:(unsigned long long)a0;
- (void)countRecordOnRead:(BOOL)a0 didSucceed:(BOOL)a1;
- (id)describeRecordCounts;
- (id)errorAnalyzer;
- (void)resetRecordCounts;
- (void)setBroadcastedSyncStateStateToFinished;
- (void)setBroadcastedSyncStateStateToStarting;
- (void)setBroadcastedSyncStateToDeleting;
- (void)setBroadcastedSyncStateToDownloading;
- (void)setBroadcastedSyncStateToStartingInitialSync;
- (void)setBroadcastedSyncStateToStartingPeriodicSync;
- (void)setBroadcastedSyncStateToUploading;
- (void)syncBatchCompleted:(unsigned long long)a0;
- (id)syncStateDebuggingInfo:(id)a0;

@end
