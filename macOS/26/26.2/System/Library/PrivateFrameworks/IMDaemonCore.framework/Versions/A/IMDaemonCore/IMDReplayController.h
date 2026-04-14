@class NSDictionary, IMDReplayStorageIterationContext, IMDReplayStorageController;

@interface IMDReplayController : NSObject {
    IMDReplayStorageController *_suspendedStorageController;
}

@property (retain, nonatomic) NSDictionary *syncTaskByServiceName;
@property (retain, nonatomic) IMDReplayStorageIterationContext *heldDeletionContext;
@property (copy, nonatomic) id /* block */ automationCompletionBlock;
@property (retain, nonatomic) IMDReplayStorageController *storageController;
@property (readonly, nonatomic) BOOL isRecordingReplayDB;

+ (id)sharedInstance;
+ (long long)batchSize;

- (void)endRecordingReplayDatabase;
- (void)restoreDefaultStoreControllerInstance;
- (id)initWithStorageController:(id)a0;
- (void)startRecordingReplayDatabase;
- (void)replayMessages;
- (void)deleteReplayDBIfNotUnderFirstUnlock;
- (BOOL)storeMessage:(id)a0 type:(unsigned char)a1 error:(id *)a2;
- (void)scheduleSyncTaskForServices:(id)a0;
- (id)init;
- (void)_processBatch:(id)a0;
- (void)overrideStorageControllerWithDatabaseFromPath:(id)a0;
- (void)replayMessagesWithCompletion:(id /* block */)a0;
- (void)_fetchNexBatchOfMessagesAndReplay;
- (void)dealloc;

@end
