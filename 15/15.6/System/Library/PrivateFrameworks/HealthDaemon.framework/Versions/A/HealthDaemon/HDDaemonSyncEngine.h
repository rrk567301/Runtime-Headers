@class NSArray, NSDictionary, NSString, HDProfile, HDDaemonSyncEntityManager;

@interface HDDaemonSyncEngine : NSObject <HDSyncEngine> {
    HDProfile *_profile;
    HDDaemonSyncEntityManager *_entityManager;
}

@property (copy, nonatomic) id /* block */ unitTest_didCompleteReadTransaction;
@property (readonly, copy, nonatomic) NSArray *allOrderedSyncEntities;
@property (readonly, copy, nonatomic) NSDictionary *allSyncEntitiesByIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithProfile:(id)a0;
- (char)applySyncChange:(id)a0 forStore:(id)a1 error:(id *)a2;
- (char)applyAcknowledgedAnchorMap:(id)a0 forStore:(id)a1 resetNext:(char)a2 resetInvalid:(char)a3 error:(id *)a4;
- (char)getReceivedAnchorMap:(id)a0 forStore:(id)a1 error:(id *)a2;
- (char)performSyncSession:(id)a0 accessibilityAssertion:(id)a1 error:(id *)a2;
- (void)resetAnchorsWithFailedChanges:(id)a0 store:(id)a1;
- (char)resetNextAnchorsForStore:(id)a0 profile:(id)a1 minimumElapsedTime:(double)a2 error:(id *)a3;
- (void)resetStore:(id)a0;
- (id)syncAnchorRangesIfRequiredForSession:(id)a0 startingAnchors:(id)a1 error:(id *)a2;
- (char)updateLocalVersionsForStore:(id)a0 profile:(id)a1 error:(id *)a2;

@end
