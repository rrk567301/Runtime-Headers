@class BUCoalescingCallBlock, NSString, BCCloudKitTransactionManager, CKContainer, BCCloudKitDatabaseController, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, BCContainerConfiguration;

@interface BCCloudKitController : NSObject <BDSCloudKitSupportSignOutDeleteWithoutInstance, BDSHandlesRemoteNotification>

@property (class, readonly) BCCloudKitController *sharedInstance;

@property (retain, nonatomic) BCCloudKitTransactionManager *transactionManager;
@property (retain, nonatomic) CKContainer *container;
@property (retain) BCCloudKitDatabaseController *privateCloudDatabaseController;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (nonatomic) char gettingAccountInfo;
@property (nonatomic) char enableCloudSync;
@property (nonatomic) char serviceMode;
@property (nonatomic) char didChangeContainer;
@property (retain, nonatomic) id<BCContainerConfiguration> configuration;
@property (retain, nonatomic) BUCoalescingCallBlock *coalescedAttachment;
@property (retain, nonatomic) BUCoalescingCallBlock *coalescedChangeAttachment;
@property (readonly, nonatomic) NSMutableArray *pendingGetAccountInfoCompletionBlocks;
@property (readonly, nonatomic) NSMutableArray *pendingRequestUpdateAttachmentCompletionBlocks;
@property (copy, nonatomic) NSString *currentUserIDName;
@property (nonatomic) long long currentStatus;

+ (id)databaseFolderURLForConfiguration:(id)a0;
+ (void)deleteCloudDataWithCompletion:(id /* block */)a0;
+ (id)instanceForCKNotification:(id)a0;
+ (id)p_createDatabaseArchiveDirectoryForConfiguration:(id)a0;
+ (id)p_privateDatabaseArchiveURLForConfiguration:(id)a0;
+ (void)registerForSecureNotifications;
+ (id)secureSharedInstance;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (void)applicationDidBecomeActive;
- (void)p_getAccountInfoWithCompletion:(id /* block */)a0;
- (void)setEnableCloudSync:(char)a0 serviceMode:(char)a1;
- (void)_attachOrSignalFetchChangesTransaction:(id)a0 reason:(id)a1;
- (void)_reestablishSyncEngineSalt;
- (void)_reestablishSyncEngineSaltIfNeeded;
- (void)_updateAccountCacheWithCompletionBlock:(id /* block */)a0;
- (void)aq_flushPendingGetAccountInfoCompletionBlocksWithWillRetryUpdateAttachment:(char)a0;
- (void)aq_requestUpdateAttachment;
- (void)aq_requestUpdateAttachmentWithCompletion:(id /* block */)a0;
- (void)aq_setGettingAccountInfo:(char)a0 willRetryUpdateAttachment:(char)a1;
- (void)attachOrSignalFetchChangesTransaction:(id)a0 reason:(id)a1;
- (void)handleRemoteCKNotification:(id)a0;
- (void)handleRemoteNotification:(id)a0;
- (void)p_accountChanged:(id)a0;
- (void)p_accountReallyChangedWithCompletion:(id /* block */)a0;
- (void)p_flushPendingRequestUpdateAttachmentCompletionBlocks;
- (void)p_flushPendingRequestUpdateAttachmentCompletionBlocksWithAttached:(char)a0 reachable:(char)a1;
- (void)p_getAccountInfo;
- (void)p_getNecessaryAccountInfoFromContainer:(id)a0 completion:(id /* block */)a1;
- (void)p_identityChanged:(id)a0;
- (void)p_testAccountChanged:(id)a0;
- (void)p_updateAttachment;
- (void)requestUpdateAttachmentWithCompletion:(id /* block */)a0;

@end
