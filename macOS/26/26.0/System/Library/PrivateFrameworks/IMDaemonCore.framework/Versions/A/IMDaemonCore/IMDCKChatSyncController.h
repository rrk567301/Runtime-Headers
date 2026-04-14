@class CKServerChangeToken, IMDCKChatSyncCKOperationFactory, IMDChatRegistry, IMDRecordZoneManager, NSObject, CKRecord;
@protocol OS_dispatch_queue, SyncTokenStoreProviding;

@interface IMDCKChatSyncController : IMDCKAbstractSyncController

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *ckQueue;
@property (retain, nonatomic) IMDChatRegistry *chatRegistry;
@property (retain, nonatomic) IMDRecordZoneManager *recordZoneManager;
@property (retain, nonatomic) id<SyncTokenStoreProviding> syncTokenStore;
@property (retain, nonatomic) CKServerChangeToken *latestSyncToken;
@property (retain, nonatomic) IMDCKChatSyncCKOperationFactory *CKOperationFactory;
@property (retain, nonatomic) CKRecord *lockRecord;
@property (nonatomic) BOOL fetchedChatsDuringLastSync;

+ (id)sharedInstance;

- (void)clearLocalSyncState:(unsigned long long)a0;
- (void)_hasMarkedAllChatsAsNeedingSync;
- (void)deleteChatZone;
- (id)init;
- (long long)syncControllerRecordType;
- (void)_scheduleOperation:(id)a0;
- (BOOL)_shouldMarkAllChatsAsNeedingSync;
- (void).cxx_destruct;
- (id)_randomSalt;
- (id)_changeTokenKey;
- (id)_recordKeyManagerSharedInstance;
- (void)_anyChatExistsOnServerWithResultsLimit:(int)a0 changeToken:(id)a1 activity:(id)a2 completion:(id /* block */)a3;
- (BOOL)_chatZoneCreated;
- (id)_chatZoneID;
- (id)_copyChatsToUploadWithLimit:(unsigned long long)a0;
- (id)_copyRecordIDsToDelete;
- (void)_deleteChatRecordsWithRecordIDs:(id)a0 completion:(id /* block */)a1;
- (BOOL)_eligibleForTruthZone;
- (id)_fetchChatRecordOperationWithActivity:(id)a0;
- (void)_filterRecordIDsToChatsWithNoRecentModifications:(id)a0 completion:(id /* block */)a1;
- (id)_generateLockRecord;
- (void)_handleChatDeletionCompletionForRecordIDs:(id)a0 error:(id)a1;
- (BOOL)_lockRecordHadConflict:(id)a0;
- (void)_logGreenTeaLogsForChats:(id)a0;
- (void)_markChatAsDefferedForSyncingUsingRecord:(id)a0;
- (void)_migrateServerChangeToken;
- (void)_needsToMarkAllChatsAsNeedingSync;
- (unsigned long long)_numberOfChatsToFetch;
- (unsigned long long)_numberOfChatsToWrite;
- (void)_processModifyPerRecordCallBack:(id)a0 error:(id)a1 recordIDtoGUIDmap:(id)a2;
- (void)_processModifyRecordCompletion:(id)a0 deletedRecordIDs:(id)a1 error:(id)a2 completionBlock:(id /* block */)a3;
- (void)_processRecordChanged:(id)a0;
- (void)_processRecordDeletion:(id)a0;
- (void)_resolveChatConflictUsingCKRecord:(id)a0 localGUID:(id)a1;
- (BOOL)_shouldResyncChatsForError:(id)a0;
- (void)_updateChatUsingCKRecord:(id)a0 onRead:(BOOL)a1 didSucceed:(BOOL)a2 dispatchToMain:(BOOL)a3;
- (void)_writeCKRecordsToChatZone:(id)a0 activity:(id)a1 withCompletion:(id /* block */)a2;
- (void)anyChatExistsOnServerWithActivity:(id)a0 completion:(id /* block */)a1;
- (void)deleteChat1SyncToken;
- (void)deleteChatSyncToken;
- (id)initWithSyncTokenStore:(id)a0;
- (id)recordStore;
- (void)syncPendingDeletionWithCompletion:(id /* block */)a0;

@end
