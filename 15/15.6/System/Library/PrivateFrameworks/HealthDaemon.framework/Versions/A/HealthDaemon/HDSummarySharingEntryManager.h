@class NSString, HDProfile, HKObserverSet;
@protocol HDSummarySharingEntryManagerDelegate;

@interface HDSummarySharingEntryManager : NSObject <HDAnalyticsSubmissionCoordinatorDelegate, HDProfileReadyObserver, HDCloudSyncSummarySharingEntryManager> {
    HKObserverSet *_observerSet;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    char _hasCompletedContactResolution;
    long long _authorizationStatusWhenContactsResolved;
}

@property (weak, nonatomic) id<HDSummarySharingEntryManagerDelegate> delegate;
@property (readonly, weak, nonatomic) HDProfile *profile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (id)initWithProfile:(id)a0;
- (void)_contactStoreDidChange;
- (id)anyCodableEntryWithPredicate:(id)a0 errorOut:(id *)a1;
- (id)authorizationIdentifiersByContactIdentifiersForOutgoingPendingAndAcceptedParticipants:(id)a0 error:(id *)a1;
- (id)authorizationIdentifiersForEntriesNotPresentInSet:(id)a0 error:(id *)a1;
- (id)codableEntryWithIdentifier:(id)a0 type:(long long)a1 direction:(unsigned long long)a2 errorOut:(id *)a3;
- (id)codableEntryWithUUID:(id)a0 errorOut:(id *)a1;
- (char)deleteEntryWithUUID:(id)a0 error:(id *)a1;
- (char)disableAllSharingEntriesWithError:(id *)a0;
- (char)enumerateCodableEntriesWithPredicate:(id)a0 error:(id *)a1 handler:(id /* block */)a2;
- (id)fetchAllCodableSharingEntriesWithError:(id *)a0;
- (id)fetchSharingEntriesWithError:(id *)a0;
- (char)insertOrReplaceCodableEntries:(id)a0 ignoreIfExists:(char)a1 shouldResolveCNContact:(char)a2 syncProvenance:(long long)a3 error:(id *)a4;
- (char)insertOrReplaceCodableEntries:(id)a0 shouldResolveCNContact:(char)a1 error:(id *)a2;
- (char)lookupEntryWithPredicate:(id)a0 wasFound:(char *)a1 error:(id *)a2;
- (char)pauseActiveEntriesWithError:(id *)a0;
- (char)pauseStatusForEntryWithUUID:(id)a0 error:(id *)a1;
- (void)pauseStatusesForUUIDS:(id)a0 completion:(id /* block */)a1;
- (void)profileDidBecomeReady:(id)a0;
- (void)reportDailyAnalyticsWithCoordinator:(id)a0 completion:(id /* block */)a1;
- (char)resolveContactsIfNeededWithError:(id *)a0;
- (char)updateEntryWithInvitationUUID:(id)a0 newNotificationStatus:(long long)a1 error:(id *)a2;
- (char)updateEntryWithInvitationUUID:(id)a0 newStatus:(long long)a1 dateAccepted:(id)a2 ownerParticipant:(id)a3 error:(id *)a4;
- (char)updateEntryWithUUID:(id)a0 authorizationsToAdd:(id)a1 authorizationsToDelete:(id)a2 deleteOnCommit:(char)a3 error:(id *)a4;
- (char)updateEntryWithUUID:(id)a0 pauseStatus:(char)a1 error:(id *)a2;

@end
