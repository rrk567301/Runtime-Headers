@class IMDCKSyncState;
@protocol IMDCKAbstractSyncControllerDelegate;

@interface IMDCKAbstractSyncController : NSObject

@property (nonatomic) char isSyncing;
@property (nonatomic) unsigned long long recordsRead;
@property (nonatomic) unsigned long long recordsWritten;
@property (nonatomic) unsigned long long recordsWriteFailed;
@property (readonly, nonatomic) IMDCKSyncState *syncState;
@property (weak) id<IMDCKAbstractSyncControllerDelegate> delegate;

- (void).cxx_destruct;
- (id)errorAnalyzer;
- (long long)syncControllerRecordType;
- (id)_syncTokenStore;
- (void)deleteSyncToken;
- (id)latestSyncToken;
- (char)_fetchedAllChangesFromCloudKit;
- (id)_syncTokenKey;
- (void)addSyncDebuggingInfoToDictionary:(id)a0;
- (id)ckUtilities;
- (void)clearLocalSyncState:(unsigned long long)a0;
- (void)countRecordOnRead:(char)a0 didSucceed:(char)a1;
- (id)describeRecordCounts;
- (id)recordStore;
- (void)resetRecordCounts;
- (void)setBroadcastedSyncStateStateToFinished;
- (void)setBroadcastedSyncStateStateToStarting;
- (void)setBroadcastedSyncStateToDeleting;
- (void)setBroadcastedSyncStateToDownloading;
- (void)setBroadcastedSyncStateToStartingInitialSync;
- (void)setBroadcastedSyncStateToStartingPeriodicSync;
- (void)setBroadcastedSyncStateToUploading;
- (void)setLatestSyncToken:(id)a0;
- (void)syncBatchCompleted:(unsigned long long)a0;
- (id)syncStateDebuggingInfo:(id)a0;

@end
