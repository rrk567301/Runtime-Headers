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
- (id)ckUtilities;
- (id)errorAnalyzer;
- (id)describeRecordCounts;
- (BOOL)_fetchedAllChangesFromCloudKit;
- (void)clearLocalSyncState:(unsigned long long)a0;
- (void)resetRecordCounts;
- (void)countRecordOnRead:(BOOL)a0 didSucceed:(BOOL)a1;
- (void)setBroadcastedSyncStateStateToFinished;
- (void)setBroadcastedSyncStateStateToStarting;
- (void)setBroadcastedSyncStateToDownloading;
- (void)setBroadcastedSyncStateToUploading;
- (void)setBroadcastedSyncStateToDeleting;
- (void)setBroadcastedSyncStateToStartingPeriodicSync;
- (void)setBroadcastedSyncStateToStartingInitialSync;
- (id)syncStateDebuggingInfo:(id)a0;
- (void)addSyncDebuggingInfoToDictionary:(id)a0;
- (void)syncBatchCompleted:(unsigned long long)a0;

@end
