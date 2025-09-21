@class HDXPCGatedActivity, NSString, NSObject, HDCloudSyncCoordinator, ACAccountStore, _HKBehavior;
@protocol OS_dispatch_queue;

@interface HDCloudSyncAccountProvider : NSObject <HDProfileReadyObserver, HDHealthDaemonReadyObserver> {
    HDCloudSyncCoordinator *_coordinator;
    _HKBehavior *_behavior;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    ACAccountStore *_lock_accountStore;
    HDXPCGatedActivity *_accountChangeGatedSyncActivity;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)accountConfigurationDidChangeWithCompletion:(id /* block */)a0;
- (id)_disableAndDeleteAllSyncDataForProfile:(id)a0 completion:(id /* block */)a1;
- (void)_performSyncForAccountChangeWithCompletion:(id /* block */)a0;
- (void)_resetCachedOwnerIdentifiers;
- (void)_rollOwnerDifferentiatorAfterCloudSyncDisableForAllProfiles:(id)a0;
- (void)_setHealthAccountDataclassEnabled:(char)a0 completion:(id /* block */)a1;
- (char)_shouldPerformFullSyncOnAccountChange;
- (void)_triggerSyncForAccountChange;
- (char)accountIsProhibitedFromCloudSync:(id)a0;
- (char)computeCanPerformCloudSyncForPrimaryAccount:(id *)a0;
- (void)daemonReady:(id)a0;
- (id)disableAndDeleteAllSyncDataWithCompletion:(id /* block */)a0;
- (void)disableSyncLocallyWithCompletion:(id /* block */)a0;
- (void)enableSyncLocallyWithCompletion:(id /* block */)a0;
- (id)getPersistedAccountInfo;
- (id)initWithCoordinator:(id)a0 behavior:(id)a1;
- (id)initWithCoordinator:(id)a0 behavior:(id)a1 accountStore:(id)a2;
- (char)isAccountInManateeUnavailableCFUState;
- (char)primaryAccountIsProhibitedFromCloudSync;
- (void)profileDidBecomeReady:(id)a0;
- (void)unitTest_setAccountStore:(id)a0;

@end
