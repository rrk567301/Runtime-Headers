@class NSString, NSOperationQueue, SOKerberosHelper, SOKerberosSettingsManager, UNUserNotificationCenter, SOKerberosOpenDirectory, NSMutableArray, NSDistributedNotificationCenter, NSObject;

@interface SOKerberosAgent : NSObject <UNUserNotificationCenterDelegate, POAgentAuthenticationProcessKerberosDelegate>

@property (retain) NSMutableArray *contexts;
@property (retain) NSOperationQueue *workQueue;
@property (retain) SOKerberosSettingsManager *kerberosSettingsManager;
@property (retain) NSDistributedNotificationCenter *distributedNotificationCenter;
@property (retain) UNUserNotificationCenter *userNotificationCenter;
@property (retain) SOKerberosHelper *kerberosHelper;
@property (retain) SOKerberosOpenDirectory *kerberosOpenDirectory;
@property (retain) NSString *localUserName;
@property BOOL networkChangePending;
@property (retain) NSObject *credObserver;
@property (retain) NSObject *existingCredObserver;
@property (retain) NSObject *passwordChangeObserver;
@property (copy, nonatomic) id /* block */ menuExtraLaunchHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)start;
- (void)userNotificationCenter:(id)a0 didReceiveNotificationResponse:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)analyticsForMDMProfiles:(id)a0 reason:(id)a1;
- (void)triggerVPNForRealm:(id)a0;
- (void)TGTReceivedForRealm:(id)a0 upn:(id)a1 cache:(id)a2;
- (BOOL)isRealmConfiguredForKerberosExtension:(id)a0;
- (BOOL)isNetworkConnectedForRealm:(id)a0;
- (void)TGTRequestDidBegin;
- (void)TGTRequestDidComplete;
- (void)notifyNetworkChange;
- (void)notifyProfileChange:(id)a0;
- (void)notifyKerberosCacheChange;
- (void)handleKerberosAuthCompleted;
- (void)handleNetworkChangeForContext:(id)a0;
- (void)tryServerListAvailableForContext:(id)a0 fallbackHandler:(id /* block */)a1;
- (void)trySiteCodeAvailableForContext:(id)a0 siteCode:(id)a1 fallbackHandler:(id /* block */)a2;
- (void)trySiteDiscoveryAvailabilityForContext:(id)a0 siteCode:(id)a1 fallbackHandler:(id /* block */)a2;
- (void)tryDomainAvailabilityChangeForContext:(id)a0 fallbackHandler:(id /* block */)a1;
- (void)handleNetworkChange;
- (void)handleRequestTGT:(id)a0;
- (void)handleNetworkReachable:(id)a0;
- (void)handleNetworkNotReachable:(id)a0;
- (BOOL)checkForValidKerberosTGT:(id)a0;
- (void)handlePasswordExpirationNotification:(id)a0;
- (void)setupNotificationCategories;
- (id)createNotification:(id)a0 daysToExpire:(id)a1;
- (void)sendNotification:(id)a0 context:(id)a1;
- (void)handlePasswordSync:(id)a0 withCompletion:(id /* block */)a1;
- (void)startObservers;
- (void)stopObservers;
- (void)handleLoadProfiles:(id)a0;
- (void)handleLaunchMenuExtra;
- (void)handleClickedChangePasswordNotification:(id)a0;

@end
