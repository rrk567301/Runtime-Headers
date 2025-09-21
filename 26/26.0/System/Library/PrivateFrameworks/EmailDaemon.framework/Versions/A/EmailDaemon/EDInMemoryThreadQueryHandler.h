@class EDMessageQueryHelper, NSString, NSArray, EMThreadReloadSummaryHelper, EFProcessTransaction, NSMutableDictionary, EMCollectionItemIDStateCapturer, NSObject, EMMailboxScope, EDVIPManager, EDUpdateThrottler, EDInMemoryThreadCollection;
@protocol OS_os_log, EMMessageListItemQueryResultsObserver, EFAssertableScheduler, EDSearchProvider, OS_dispatch_queue;

@interface EDInMemoryThreadQueryHandler : EDMessageRepositoryQueryHandler <EDMessageQueryHelperDelegate, EDInMemoryThreadCollectionDataSource, EDInMemoryThreadCollectionDelegate, EFLoggable, EFContentProtectionObserver, EMCollectionItemIDStateCapturerDelegate> {
    EDInMemoryThreadCollection *_threadCollection;
    NSMutableDictionary *_changesWhilePaused;
    EFProcessTransaction *_processTransaction;
    unsigned long long _helperCount;
}

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) EDVIPManager *vipManager;
@property (readonly, nonatomic) id<EDSearchProvider> searchProvider;
@property (readonly, nonatomic) id<EMMessageListItemQueryResultsObserver> resultsObserverIfNotPaused;
@property (retain, nonatomic) EDMessageQueryHelper *messageQueryHelper;
@property (readonly, copy, nonatomic) NSArray *messageSortDescriptors;
@property (readonly, nonatomic) EDUpdateThrottler *updateThrottler;
@property (readonly, nonatomic) EMThreadReloadSummaryHelper *reloadSummaryHelper;
@property (readonly, nonatomic) id<EFAssertableScheduler> scheduler;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *contentProtectionQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *resultQueue;
@property (nonatomic) BOOL didCancel;
@property (nonatomic) BOOL isInitialized;
@property (nonatomic) BOOL isPreparingFirstBatch;
@property (nonatomic) BOOL hasEverReconciledJournal;
@property (nonatomic) BOOL isPaused;
@property (nonatomic) BOOL hasChangesWhilePaused;
@property (readonly, nonatomic) EMMailboxScope *mailboxScope;
@property (readonly, nonatomic) EMCollectionItemIDStateCapturer *stateCapturer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)signpostLog;

- (unsigned long long)signpostID;
- (void)tearDown;
- (BOOL)start;
- (void)dealloc;
- (void)cancel;
- (void)contentProtectionStateChanged:(long long)a0 previousState:(long long)a1;
- (id)labelForStateCapture;
- (void)test_tearDown;
- (void)_blockedSendersDidChange:(id)a0;
- (void).cxx_destruct;
- (id)threadsAndMessagesForObjectIDs:(id)a0;
- (void)_vipsDidChange:(id)a0;
- (void)_contentProtectionChangedToLocked;
- (void)_contentProtectionChangedToUnlocked;
- (void)_createHelper;
- (id)_extraInfoForThreadObjectIDs:(id)a0 existingExtraInfo:(id)a1 isMove:(BOOL)a2;
- (id)_extraInfoPrecachedThreadsForInitialObjectIDs:(id)a0;
- (id)_messageQueryFromThreadsQuery:(id)a0;
- (id)_messagesInConversationIDs:(id)a0 limit:(long long)a1;
- (void)_notifyObserversOfMovedObjectIDs:(id)a0 before:(id)a1 notifyBlock:(id /* block */)a2;
- (id)_predicateForMessagesInConversations:(id)a0;
- (BOOL)_queryHelperIsCurrent:(id)a0;
- (void)_refreshObserver;
- (void)_restartHelper;
- (void)assertCorrectSchedulerForCollection:(id)a0;
- (void)collection:(id)a0 didMergeInThreadsForMove:(BOOL)a1 newObjectIDs:(id)a2 existingObjectID:(id)a3 extraInfo:(id)a4 hasChanges:(BOOL *)a5;
- (id)collection:(id)a0 messagesInConversationIDs:(id)a1 limit:(long long)a2;
- (void)collection:(id)a0 notifyOfOldestThreadsByMailboxObjectIDs:(id)a1;
- (void)collection:(id)a0 notifyReplacedExistingObjectID:(id)a1 newObjectID:(id)a2;
- (BOOL)collection:(id)a0 reportChanges:(id)a1;
- (BOOL)collection:(id)a0 reportChanges:(id)a1 reloadSummaries:(BOOL)a2;
- (BOOL)collection:(id)a0 reportDeletes:(id)a1;
- (void)didSendUpdatesInCollection:(id)a0;
- (id)initWithQuery:(id)a0 messagePersistence:(id)a1 hookRegistry:(id)a2 remindMeNotificationController:(id)a3 vipManager:(id)a4 searchProvider:(id)a5 observer:(id)a6 observationIdentifier:(id)a7 observationResumer:(id)a8;
- (id)itemIDsForStateCaptureWithErrorString:(id *)a0;
- (void)logThreadObjectIDsChangesWithMessage:(id)a0 newObjectIDs:(id)a1 beforeExistingObjectID:(id)a2;
- (void)logThreadObjectIDsWithMessage:(id)a0 objectIDs:(id)a1;
- (id)mailboxesInCollection:(id)a0;
- (id)messageListItemForObjectID:(id)a0 error:(id *)a1;
- (id)messagesForThread:(id)a0;
- (id)messagesInConversationIDs:(id)a0 limit:(long long)a1;
- (void)prepareToSendUpdatesInCollection:(id)a0;
- (void)queryHelper:(id)a0 businessIDDidChangeForMessages:(id)a1 fromBusinessID:(long long)a2;
- (void)queryHelper:(id)a0 conversationIDDidChangeForMessages:(id)a1 fromConversationID:(long long)a2;
- (void)queryHelper:(id)a0 conversationNotificationLevelDidChangeForConversation:(long long)a1 conversationID:(long long)a2;
- (void)queryHelper:(id)a0 didAddMessages:(id)a1 extraInfo:(id)a2;
- (void)queryHelper:(id)a0 didDeleteMessages:(id)a1;
- (void)queryHelper:(id)a0 didFindMessages:(id)a1 extraInfo:(id)a2 forInitialBatch:(BOOL)a3;
- (void)queryHelper:(id)a0 didUpdateMessages:(id)a1 forKeyPaths:(id)a2;
- (void)queryHelper:(id)a0 messageFlagsDidChangeForMessages:(id)a1 previousMessages:(id)a2;
- (void)queryHelper:(id)a0 objectIDDidChangeForMessage:(id)a1 oldObjectID:(id)a2 oldConversationID:(long long)a3;
- (void)queryHelperDidFindAllMessages:(id)a0;
- (void)queryHelperDidFinishRemoteSearch:(id)a0;
- (void)queryHelperNeedsRestart:(id)a0;

@end
