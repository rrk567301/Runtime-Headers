@class RTInvocationDispatcher, RTDefaultsManager, RTLifeCycleManager, AFPreferences, ACAccountStore, RTDarwinNotificationHelper, RTAccount;

@interface RTAccountManager : RTService {
    char _ready;
}

@property (retain, nonatomic) ACAccountStore *accountStore;
@property (retain, nonatomic) RTAccount *account;
@property (retain, nonatomic) RTInvocationDispatcher *dispatcher;
@property (retain, nonatomic) RTDefaultsManager *defaultsManager;
@property (retain, nonatomic) RTLifeCycleManager *lifecycleManager;
@property (nonatomic) long long cloudSyncAuthorizationState;
@property (nonatomic) char siriCloudSyncEnabled;
@property (nonatomic) char cloudSyncProvisionedForAccount;
@property (retain, nonatomic) RTDarwinNotificationHelper *notificationHelper;
@property (retain, nonatomic) AFPreferences *siriPreferences;
@property (nonatomic) double authorizationChangeExitTimeInterval;

+ (char)supportsNotificationName:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_setup;
- (long long)accountStatus;
- (void)_lookupAccount:(id /* block */)a0;
- (void)currentAccount:(id /* block */)a0;
- (void)_handleSiriCloudSyncPreferenceChangedNotification;
- (void)_onDefaultsUpdate:(id)a0;
- (id)_primaryiCloudAccount;
- (void)_shutdownWithHandler:(id /* block */)a0;
- (void)_updateCloudSyncAuthorizationState:(char)a0;
- (void)fetchCloudSyncAuthorizationState:(id /* block */)a0;
- (void)handleSiriCloudSyncPreferenceChangedNotification;
- (id)initWithAccountStore:(id)a0 lifecycleManager:(id)a1 defaultsManager:(id)a2;
- (id)initWithLifecycleManager:(id)a0 defaultsManager:(id)a1;
- (void)internalAddObserver:(id)a0 name:(id)a1;
- (void)internalRemoveObserver:(id)a0 name:(id)a1;
- (void)lookupAccount:(id /* block */)a0;
- (void)onDefaultsUpdate:(id)a0;
- (void)setup;
- (void)updateCloudSyncAuthorizationState:(char)a0;
- (void)updateCloudSyncProvisionedForAccount:(char)a0 handler:(id /* block */)a1;

@end
