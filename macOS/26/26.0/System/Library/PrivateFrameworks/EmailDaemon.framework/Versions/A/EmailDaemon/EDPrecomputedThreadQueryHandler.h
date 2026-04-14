@class NSMutableDictionary, EFLocked, NSObject, EDUpdateThrottler, NSMutableArray, EMMailboxScope, EFOrderedDictionary, EMThreadReloadSummaryHelper, NSString, NSMutableSet, NSArray, EMCollectionItemIDStateCapturer, EMThreadScope, EDThreadPersistence, EFManualCancelationToken;
@protocol OS_os_log, EFScheduler, EFCancelable;

@interface EDPrecomputedThreadQueryHandler : EDMessageRepositoryQueryHandler <EDMessageChangeHookResponder, EDRemindMeNotificationControllerObserver, EDThreadChangeHookResponder, EFLoggable, EMCollectionItemIDStateCapturerDelegate, EDBusinessChangeHookResponder>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, copy, nonatomic) NSArray *sortKeys;
@property (readonly, nonatomic) id<EFScheduler> changeScheduler;
@property (readonly, nonatomic) id<EFScheduler> backgroundWorkScheduler;
@property (retain, nonatomic) EFManualCancelationToken *cancelationToken;
@property (retain, nonatomic) NSMutableDictionary *pendingChanges;
@property (retain, nonatomic) NSMutableArray *pendingPositionChanges;
@property (retain, nonatomic) NSMutableSet *unreportedJournaledObjectIDs;
@property (retain, nonatomic) NSMutableDictionary *reportedJournaledObjectIDs;
@property (retain, nonatomic) NSMutableDictionary *oldestThreadObjectIDsByMailbox;
@property (retain, nonatomic) id<EFCancelable> updateOldestThreadsCancelationToken;
@property (readonly, nonatomic) EDUpdateThrottler *updateThrottler;
@property (readonly, nonatomic) EMThreadReloadSummaryHelper *reloadSummaryHelper;
@property (readonly, nonatomic) EMMailboxScope *mailboxScope;
@property (readonly, nonatomic) EFLocked *sectionIndexesByConversationID;
@property (readonly, nonatomic) EFOrderedDictionary *sectionPredicates;
@property (readonly, nonatomic) EMCollectionItemIDStateCapturer *stateCapturer;
@property (readonly, nonatomic) BOOL updateDisplayDate;
@property (readonly, nonatomic) EMThreadScope *threadScope;
@property (readonly, nonatomic) EDThreadPersistence *threadPersistence;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sortKeysForSectionPredicates:(id)a0;

- (void)persistenceDidUpdateProperties:(id)a0 message:(id)a1 generationWindow:(id)a2;
- (BOOL)start;
- (void)cancel;
- (id)labelForStateCapture;
- (void)persistenceDidChangeGlobalMessageID:(long long)a0 orConversationID:(long long)a1 message:(id)a2 generationWindow:(id)a3;
- (void)test_tearDown;
- (void).cxx_destruct;
- (void)_addChangeToPendingChanges:(id)a0 forThreadObjectID:(id)a1;
- (id)_extraInfoForThreadObjectIDs:(id)a0 isMove:(BOOL)a1;
- (id)_extraInfoPrecachedThreadsForInitialObjectIDs:(id)a0;
- (void)_flushUpdatesWithReason:(id)a0;
- (void)_getInitialResults;
- (BOOL)_isAddingOrDeletingObjectID:(id)a0;
- (id)_messageForPersistedMessage:(id)a0;
- (void)_oldestThreadsNeedUpdate;
- (void)_onScheduler:(id)a0 performCancelableBlock:(id /* block */)a1;
- (void)_persistenceIsAddingThreadWithObjectID:(id)a0;
- (void)_persistenceIsChangingThreadWithObjectID:(id)a0 changedKeyPaths:(id)a1;
- (void)_reportMoveForThreadObjectID:(id)a0;
- (BOOL)_shouldSectionItemsRemainInSection;
- (void)_updateDisplayDateForMessagesIfNeeded;
- (void)controller:(id)a0 messageTimerFired:(id)a1;
- (id)initWithQuery:(id)a0 threadScope:(id)a1 sortKeys:(id)a2 messagePersistence:(id)a3 threadPersistence:(id)a4 hookRegistry:(id)a5 remindMeNotificationController:(id)a6 observer:(id)a7 observationIdentifier:(id)a8 observationResumer:(id)a9;
- (id)itemIDsForStateCaptureWithErrorString:(id *)a0;
- (id)messageListItemForObjectID:(id)a0 error:(id *)a1;
- (void)persistenceDidChangeBusinessIDForMessages:(id)a0 fromBusinessID:(long long)a1;
- (void)persistenceDidChangeConversationNotificationLevel:(long long)a0 conversationID:(long long)a1 generationWindow:(id)a2;
- (void)persistenceDidFinishThreadUpdates;
- (void)persistenceIsAddingThread:(id)a0 journaled:(BOOL)a1 generationWindow:(id)a2;
- (void)persistenceIsChangingThreadWithObjectID:(id)a0 changedKeyPaths:(id)a1 generationWindow:(id)a2;
- (void)persistenceIsChangingThreadWithObjectID:(id)a0 newIsUrgentValue:(BOOL)a1 generationWindow:(id)a2;
- (void)persistenceIsDeletingThreadWithObjectID:(id)a0 generationWindow:(id)a1;
- (void)persistenceIsMarkingThreadAsJournaledWithObjectID:(id)a0 generationWindow:(id)a1;
- (void)persistenceIsReconcilingJournaledThreadsWithObjectIDs:(id)a0 generationWindow:(id)a1;
- (id)sectionIdentifierForThreadObjectID:(id)a0;

@end
