@class RTInvocationDispatcher, RTDefaultsManager, RTLifeCycleManager, AFPreferences, ACAccountStore, RTDarwinNotificationHelper, RTAccount;

@interface RTAccountManager : RTService {
    BOOL _ready;
}

@property (retain, nonatomic) ACAccountStore *accountStore;
@property (retain, nonatomic) RTAccount *account;
@property (retain, nonatomic) RTInvocationDispatcher *dispatcher;
@property (retain, nonatomic) RTDefaultsManager *defaultsManager;
@property (retain, nonatomic) RTLifeCycleManager *lifecycleManager;
@property (nonatomic) long long cloudSyncAuthorizationState;
@property (nonatomic) BOOL siriCloudSyncEnabled;
@property (nonatomic) BOOL cloudSyncProvisionedForAccount;
@property (retain, nonatomic) RTDarwinNotificationHelper *notificationHelper;
@property (retain, nonatomic) AFPreferences *siriPreferences;
@property (nonatomic) double authorizationChangeExitTimeInterval;

+ (BOOL)supportsNotificationName:(id)a0;
+ (id)cloudSyncAuthorizationToString:(long long)a0;
+ (id)accountStatusToString:(long long)a0;

- (void)internalAddObserver:(id)a0 name:(id)a1;
- (void)internalRemoveObserver:(id)a0 name:(id)a1;
- (long long)accountStatus;
- (void)_shutdownWithHandler:(id /* block */)a0;
- (id)_primaryiCloudAccount;
- (void)_setup;
- (void)handleSiriCloudSyncPreferenceChangedNotification;
- (void)_handleSiriCloudSyncPreferenceChangedNotification;
- (void)updateCloudSyncProvisionedForAccount:(BOOL)a0 handler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)lookupAccount:(id /* block */)a0;
- (void)_onDefaultsUpdate:(id)a0;
- (void)fetchCloudSyncAuthorizationState:(id /* block */)a0;
- (void)onDefaultsUpdate:(id)a0;
- (void)_updateCloudSyncAuthorizationState:(BOOL)a0;
- (void)_lookupAccount:(id /* block */)a0;
- (id)initWithAccountStore:(id)a0 lifecycleManager:(id)a1 defaultsManager:(id)a2;
- (void)updateCloudSyncAuthorizationState:(BOOL)a0;
- (id)initWithLifecycleManager:(id)a0 defaultsManager:(id)a1;
- (id)init;
- (void)currentAccount:(id /* block */)a0;
- (void)dealloc;

@end
