@class NSDate, NSString, NSOperationQueue, VSRemoteNotifier, VSPreferences, VSUserAccountUpdateManager, VSPrivacyFacade, NSObject, VSUserAccountPersistentContainer;
@protocol OS_dispatch_source, VSUserAccountRegistryDelegate;

@interface VSUserAccountRegistry : NSObject <VSUserAccountUpdateManagerDelegate, VSUserAccountServiceProtocol>

@property (retain, nonatomic) VSPreferences *preferences;
@property (retain, nonatomic) NSOperationQueue *privateQueue;
@property (retain, nonatomic) VSRemoteNotifier *remoteNotifier;
@property (retain, nonatomic) VSUserAccountPersistentContainer *container;
@property (nonatomic) BOOL currentUpdateSessionIsForced;
@property (retain, nonatomic) VSUserAccountUpdateManager *updateManager;
@property (retain, nonatomic) VSPrivacyFacade *privacyFacade;
@property (retain, nonatomic) NSDate *lastUpdateTime;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (nonatomic) BOOL storesLoaded;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } loadingStoresLock;
@property (weak, nonatomic) id<VSUserAccountRegistryDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)_update;
- (id)initWithDelegate:(id)a0;
- (void)resetTimer;
- (void)registerSubscription:(id)a0;
- (void)fetchActiveSubscriptionsWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeSubscriptions:(id)a0;
- (id)_securityTaskForCurrentConnection;
- (void)updateManager:(id)a0 updateRequestDidFinish:(id)a1;
- (void)updateManagerDidFinish:(id)a0;
- (void)updateUserAccount:(id)a0 completion:(id /* block */)a1;
- (void)queryUserAccountsWithOptions:(long long)a0 completion:(id /* block */)a1;
- (void)deleteUserAccount:(id)a0 completion:(id /* block */)a1;
- (void)forceUpdateUserAccountsWithCompletion:(id /* block */)a0;
- (void)_loadStoresAndMigrateIfRequiredWithCompletion:(id /* block */)a0;
- (void)_subscriptionsForMigrationWithCompletion:(id /* block */)a0;
- (void)insertLegacySubscription:(id)a0 completion:(id /* block */)a1;
- (void)_insertUserAccount:(id)a0 completion:(id /* block */)a1;
- (void)_deleteUserAccount:(id)a0 completion:(id /* block */)a1;
- (void)_queryUserAccountsWithOptions:(long long)a0 predicate:(id)a1 completion:(id /* block */)a2;
- (void)_queryPersistentUserAccountsWithOptions:(long long)a0 predicate:(id)a1 context:(id)a2 completion:(id /* block */)a3;
- (long long)_deviceCategoryFromDeviceType:(unsigned long long)a0;
- (void)_populatePersistentUserAccount:(id)a0 withUserAccount:(id)a1;
- (id)_userAccountForPersistentUserAccount:(id)a0;
- (BOOL)_isValidForUpdateQueryForCurrentTask;
- (BOOL)_isValidForUpdateQueryForCurrentTask:(id)a0;
- (id)_predicateForQueryRequestWithOptions:(long long)a0;

@end
