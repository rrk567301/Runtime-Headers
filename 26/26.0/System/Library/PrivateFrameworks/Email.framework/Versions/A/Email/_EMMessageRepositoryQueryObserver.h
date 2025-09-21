@class NSString, EMObjectID, EMMessageRepository, EMQuery, EFManualCancelationToken;
@protocol EFScheduler, EFCancelable, EMQueryResultsObserver;

@interface _EMMessageRepositoryQueryObserver : NSObject <EMMessageListItemQueryResultsObserver, EMRecoverableObserver> {
    EMMessageRepository *_repository;
    EMQuery *_query;
    id<EMQueryResultsObserver> _observer;
    EFManualCancelationToken *_token;
    id<EFScheduler> _recoveryScheduler;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _recoveryLock;
    long long _recoveryAttempt;
    BOOL _recoveryIsScheduled;
}

@property (readonly, nonatomic) EMObjectID *observationIdentifier;
@property (retain) id<EFCancelable> remoteCancelable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)cancel;
- (void).cxx_destruct;
- (void)observer:(id)a0 matchedAddedObjectIDs:(id)a1 after:(id)a2 extraInfo:(id)a3;
- (void)observer:(id)a0 matchedAddedObjectIDs:(id)a1 before:(id)a2 extraInfo:(id)a3;
- (void)observer:(id)a0 matchedChangesForObjectIDs:(id)a1;
- (void)observer:(id)a0 matchedDeletedObjectIDs:(id)a1;
- (void)observer:(id)a0 matchedMovedObjectIDs:(id)a1 after:(id)a2 extraInfo:(id)a3;
- (void)observer:(id)a0 matchedMovedObjectIDs:(id)a1 before:(id)a2 extraInfo:(id)a3;
- (void)observer:(id)a0 matchedOldestItemsUpdatedForMailboxes:(id)a1;
- (void)observer:(id)a0 replacedExistingObjectID:(id)a1 withNewObjectID:(id)a2;
- (void)observer:(id)a0 wasUpdated:(id)a1;
- (void)observerDidFinishInitialLoad:(id)a0;
- (void)observerDidFinishRemoteSearch:(id)a0;
- (void)observerWillRestart:(id)a0;
- (void)_performQueryWithRemoteConnection:(id)a0 forRecovery:(BOOL)a1;
- (id)initWithRepository:(id)a0 query:(id)a1 observer:(id)a2;
- (void)performWithRemoteConnection:(id)a0;
- (void)recoverWithRemoteConnection:(id)a0;
- (void)refreshQueryWithRemoteConnection:(id)a0;
- (id)trampoliningObserver;

@end
