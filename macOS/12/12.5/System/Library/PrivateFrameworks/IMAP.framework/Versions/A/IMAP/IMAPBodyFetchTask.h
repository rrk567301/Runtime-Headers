@class IMAPDownloadCache, IMAPSyncBodiesOperation, NSString, NSMutableArray, NSMutableDictionary, IMAPTaskManager, NSObject, NSMutableSet, NSMutableIndexSet, NSMutableOrderedSet;
@protocol OS_os_log, IMAPMessageDataSource;

@interface IMAPBodyFetchTask : IMAPTask <EFSignpostable, IMAPGetMessagesOperationDelegate, IMAPSyncBodiesOperationDelegate, IMAPPersistBodiesOperationDelegate, IMAPGetAttachmentsDownloadsOperationDelegate, IMAPSyncAttachmentsOperationDelegate> {
    NSMutableIndexSet *_mandatoryUIDsToFetch;
    NSMutableIndexSet *_discretionaryUIDsToFetch;
    NSMutableIndexSet *_userRequestedUIDsToFetch;
    NSMutableDictionary *_messagesToFetch;
    NSMutableIndexSet *_mandatoryUIDsBeingFetched;
    NSMutableIndexSet *_discretionaryUIDsBeingFetched;
    NSMutableIndexSet *_userRequestedUIDsBeingFetched;
    NSMutableSet *_messagesBeingFetched;
    NSMutableOrderedSet *_bodyDownloadsToPersist;
    NSMutableOrderedSet *_userRequestedDownloadsToPersist;
    NSMutableSet *_discretionaryBodySyncOperations;
    NSMutableArray *_messagesWithAttachmentsToProcess;
    NSMutableArray *_messagesWithAttachmentsBeingProcessed;
    NSMutableArray *_mandatoryAttachmentsDownloadsToFetch;
    NSMutableArray *_discretionaryAttachmentsDownloadsToFetch;
    NSMutableDictionary *_attachmentsDownloadsBeingFetched;
}

@property (class, readonly) NSObject<OS_os_log> *signpostLog;

@property (readonly, nonatomic) IMAPTaskManager *taskManager;
@property (retain, nonatomic) IMAPDownloadCache *downloadCache;
@property (nonatomic) BOOL needToCheckForIncompleteMessages;
@property (nonatomic) BOOL checkingForIncompleteMessages;
@property (nonatomic) BOOL persistingMessages;
@property (nonatomic) BOOL gettingMessagesToFetch;
@property (retain, nonatomic) IMAPSyncBodiesOperation *userRequestedSyncBodiesOperation;
@property (readonly, nonatomic) BOOL dataSourceIsInboxOrAllMail;
@property (readonly, nonatomic) id<IMAPMessageDataSource> dataSource;
@property (nonatomic) unsigned int uidNext;
@property (readonly, nonatomic) BOOL hasMessagesToFetch;
@property (readonly) unsigned long long signpostID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)delegate;
- (void)setDelegate:(id)a0;
- (void).cxx_destruct;
- (void)cancel;
- (void)end;
- (void)operationFinished:(id)a0;
- (void)addMessages:(id)a0;
- (id)initWithMailboxName:(id)a0;
- (void)recalculatePriorities;
- (id)nextNetworkOperation;
- (id)nextPersistenceOperation;
- (long long)_nextNetworkPriorityAndOperation:(id *)a0;
- (id)mailboxNameWithoutPII;
- (id)_messagesInProgress;
- (unsigned long long)_numberOfUIDsToFetch;
- (BOOL)_shouldConfigureNextNetworkOperationForUIDs:(id)a0;
- (long long)_nextBatchPriorityDeferDiscretionaryWork:(BOOL)a0;
- (id)_uidsOfMessagesToGet;
- (long long)_priorityOfUIDsToGet;
- (void)getMessagesOperation:(id)a0 gotMessages:(id)a1;
- (void)syncBodiesOperation:(id)a0 syncedBodiesForMessages:(id)a1 downloadsToPersist:(id)a2 messagesNeedingAttachments:(id)a3;
- (void)persistBodiesOperation:(id)a0 persistedDownloads:(id)a1;
- (void)getAttachmentsDownloadsOperation:(id)a0 gotDownloads:(id)a1 missedMessages:(id)a2;
- (void)syncAttachmentsOperation:(id)a0 syncedAttachmentsForDownloads:(id)a1;
- (id)initWithDataSource:(id)a0 taskManager:(id)a1;
- (void)checkForIncompleteMessages;
- (void)setUserRequestedMessages:(id)a0;
- (void)removeUIDs:(id)a0;

@end
