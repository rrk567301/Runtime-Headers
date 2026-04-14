@class NSString, HDProfile, HKObserverSet;
@protocol HDSummarySharingEntryManagerDelegate;

@interface HDSummarySharingEntryManager : NSObject <HDAnalyticsSubmissionCoordinatorDelegate, HDProfileReadyObserver, HDCloudSyncSummarySharingEntryManager> {
    HKObserverSet *_observerSet;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _hasCompletedContactResolution;
    long long _authorizationStatusWhenContactsResolved;
}

@property (weak, nonatomic) id<HDSummarySharingEntryManagerDelegate> delegate;
@property (readonly, weak, nonatomic) HDProfile *profile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)disableAllSharingEntriesWithError:(id *)a0;
- (void)profileDidBecomeReady:(id)a0;
- (void)removeObserver:(id)a0;
- (BOOL)updateEntryWithUUID:(id)a0 authorizationsToAdd:(id)a1 authorizationsToDelete:(id)a2 deleteOnCommit:(BOOL)a3 error:(id *)a4;
- (BOOL)updateEntryWithInvitationUUID:(id)a0 newNotificationStatus:(long long)a1 error:(id *)a2;
- (id)anyCodableEntryWithPredicate:(id)a0 errorOut:(id *)a1;
- (id)fetchSharingEntriesWithError:(id *)a0;
- (void)pauseStatusesForUUIDS:(id)a0 completion:(id /* block */)a1;
- (void)reportDailyAnalyticsWithCoordinator:(id)a0 completion:(id /* block */)a1;
- (void)addObserver:(id)a0;
- (BOOL)enumerateCodableEntriesWithPredicate:(id)a0 error:(id *)a1 handler:(id /* block */)a2;
- (BOOL)updateEntryWithInvitationUUID:(id)a0 newStatus:(long long)a1 dateAccepted:(id)a2 ownerParticipant:(id)a3 error:(id *)a4;
- (BOOL)insertOrReplaceCodableEntries:(id)a0 shouldResolveCNContact:(BOOL)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)authorizationIdentifiersForEntriesNotPresentInSet:(id)a0 error:(id *)a1;
- (id)authorizationIdentifiersByContactIdentifiersForOutgoingPendingAndAcceptedParticipants:(id)a0 error:(id *)a1;
- (id)codableEntryWithUUID:(id)a0 errorOut:(id *)a1;
- (BOOL)updateEntryWithUUID:(id)a0 pauseStatus:(BOOL)a1 error:(id *)a2;
- (BOOL)insertOrReplaceCodableEntries:(id)a0 ignoreIfExists:(BOOL)a1 shouldResolveCNContact:(BOOL)a2 syncProvenance:(long long)a3 error:(id *)a4;
- (BOOL)pauseStatusForEntryWithUUID:(id)a0 error:(id *)a1;
- (BOOL)resolveContactsIfNeededWithError:(id *)a0;
- (BOOL)deleteEntryWithUUID:(id)a0 error:(id *)a1;
- (void)_contactStoreDidChange;
- (BOOL)pauseActiveEntriesWithError:(id *)a0;
- (id)codableEntryWithIdentifier:(id)a0 type:(long long)a1 direction:(unsigned long long)a2 errorOut:(id *)a3;
- (id)initWithProfile:(id)a0;
- (id)fetchAllCodableSharingEntriesWithError:(id *)a0;
- (BOOL)lookupEntryWithPredicate:(id)a0 wasFound:(BOOL *)a1 error:(id *)a2;
- (void)dealloc;

@end
