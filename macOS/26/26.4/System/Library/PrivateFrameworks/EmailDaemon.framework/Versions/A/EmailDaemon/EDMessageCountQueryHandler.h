@class NSMutableDictionary, EFDebouncer, NSPredicate, EFStoppableScheduler, NSObject, EDMessagePersistence, EFMutableInt64Set, EDMessageQueryEvaluator, EMMailboxScope, EDUpdateThrottler, NSString, EDPersistenceHookRegistry, NSTimer, NSMutableSet, EFListStateCapturer, _EDLocalCountVerifier, EMQuery, EMObjectID, EFManualCancelationToken;
@protocol OS_os_log, EFAssertableScheduler, EMMessageRepositoryCountQueryObserver_xpc;

@interface EDMessageCountQueryHandler : NSObject <_EDLocalCountVerifierDelegate, EFListStateCapturerDelegate, EFLoggable, EDCategoryChangeHookResponder, EDMailboxChangeHookResponder, EDMessageChangeHookResponder, EMMailboxChangeObserver, EFCancelable> {
    NSMutableDictionary *_serverCounts;
    NSMutableSet *_mailboxesBeingSynced;
    long long _resyncDatabaseGeneration;
    NSTimer *_mailboxSyncTimer;
    EMObjectID *_mailboxObserverID;
    EMQuery *_expandedQuery;
    EFMutableInt64Set *_seenMessageIDs;
    EFMutableInt64Set *_newMessageIDs;
    long long _minimumRecalculationGeneration;
    unsigned long long _recalculationPending;
    double _recalculationDelay;
    struct EFAtomicObject { _Atomic long long cfObject; } _atomicQueryDescription;
    struct EFAtomicObject { _Atomic long long cfObject; } _atomicMailboxScopeDescription;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _seenMessageIDsLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _expandedQueryLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _recalculationLock;
    EFStoppableScheduler<EFAssertableScheduler> *_scheduler;
    EMQuery *_query;
    NSPredicate *_predicateIgnoringFlags;
    EMMailboxScope *_serverCountMailboxScope;
    EDMessageQueryEvaluator *_queryEvaluator;
    id<EMMessageRepositoryCountQueryObserver_xpc> _resultsObserver;
    EDMessagePersistence *_messagePersistence;
    EDPersistenceHookRegistry *_hookRegistry;
    EFManualCancelationToken *_cancelationToken;
    EDUpdateThrottler *_updateThrottler;
    EFListStateCapturer *_stateCapturer;
    EFDebouncer *_refireDebouncer;
    _EDLocalCountVerifier *_localCountVerifier;
    NSString *_pendingFlagChangesKey;
    NSString *_pendingCategorizationChangesKey;
    long long _localCount;
}

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, copy, nonatomic) NSString *logLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)persistenceDidChangeVIPStatus:(BOOL)a0 messages:(id)a1;
- (void)persistenceDidUpdateLastSyncAndMostRecentStatusCount:(long long)a0 forMailboxWithObjectID:(id)a1 generationWindow:(id)a2;
- (void)persistenceWillChangeFlags:(id)a0 messages:(id)a1;
- (id)labelForStateCapture;
- (void)persistenceDidUpdateDisplayDateForMessages:(id)a0 changeIsRemote:(BOOL)a1 generation:(long long)a2;
- (void)willSyncMailbox:(id)a0;
- (void)persistenceDidChangeCategorizationForMessages:(id)a0 userInitiated:(BOOL)a1 generationWindow:(id)a2;
- (id)descriptionForItem:(id)a0;
- (void)persistenceIsAddingMailboxWithDatabaseID:(long long)a0 objectID:(id)a1 generationWindow:(id)a2;
- (id)initWithQuery:(id)a0 serverCountMailboxScope:(id)a1 messagePersistence:(id)a2 hookRegistry:(id)a3 observer:(id)a4 refireDebounceInterval:(double)a5;
- (void)cancel;
- (void)persistenceDidChangeGlobalMessageID:(long long)a0 orConversationID:(long long)a1 message:(id)a2 generationWindow:(id)a3;
- (void)didSyncMailbox:(id)a0;
- (void).cxx_destruct;
- (void)test_tearDown;
- (void)persistenceDidUpdateProperties:(id)a0 message:(id)a1 generationWindow:(id)a2;
- (id)initWithQuery:(id)a0 serverCountMailboxScope:(id)a1 messagePersistence:(id)a2 hookRegistry:(id)a3 observer:(id)a4;
- (void)mailboxListChanged:(id)a0;
- (BOOL)shouldVerifyLocalCount:(long long)a0 expandedQuery:(id *)a1;
- (void)persistenceDidChangeReadLaterDate:(id)a0 messages:(id)a1 changeIsRemote:(BOOL)a2 generationWindow:(id)a3;
- (void)persistenceDidDeleteMessages:(id)a0 generationWindow:(id)a1;
- (void)persistenceDidUpdateMostRecentStatusCount:(long long)a0 forMailboxWithObjectID:(id)a1 generationWindow:(id)a2;
- (void)persistenceDidChangeFlags:(id)a0 messages:(id)a1 generationWindow:(id)a2;
- (id)itemsForStateCaptureWithErrorString:(id *)a0;
- (void)dealloc;
- (void)persistenceDidUpdateServerCount:(long long)a0 forMailboxWithObjectID:(id)a1 generationWindow:(id)a2;
- (void)persistenceDidAddMessages:(id)a0 generationWindow:(id)a1;
- (void)persistenceDidUpdateSendLaterDate:(id)a0 messages:(id)a1 generationWindow:(id)a2;
- (void)persistenceDidUpdateFollowUpForMessages:(id)a0 generationWindow:(id)a1;

@end
