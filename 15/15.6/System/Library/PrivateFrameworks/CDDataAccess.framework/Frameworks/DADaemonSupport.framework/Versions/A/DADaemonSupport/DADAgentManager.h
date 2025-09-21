@class DADBuddyStateObserver, NSMutableDictionary, NSArray, NSDictionary, DADREMLocalDBWatcher, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, DADREMStoreProvider, DADREMUserNotificationPresentingProvider;

@interface DADAgentManager : NSObject {
    NSArray *_activeAgents;
    NSObject<OS_dispatch_queue> *_activeAgentsQueue;
    NSMutableDictionary *_watchedIDs;
    unsigned int _pmNotifier;
    struct IONotificationPort { } *_pmPort;
    struct __CFRunLoopSource { } *_pmRunLoopSource;
    id /* block */ _startAgentsWhenSystemReadyBlock;
    NSObject<OS_dispatch_queue> *_CTCellularUsagePolicyNotificationQ;
    struct __CTServerConnection { } *_ctServerConnection;
    NSDictionary *_wirelessPolicies;
    int _pendingAccountSetupCount;
    DADBuddyStateObserver *_buddyStateObserver;
}

@property (retain, nonatomic) DADREMLocalDBWatcher *rem_localDBWatcher;
@property (copy, nonatomic) id /* block */ rem_xpcEventHandler;
@property (retain, nonatomic) id<DADREMUserNotificationPresentingProvider> rem_userNotificationPresentingProvider;
@property (retain, nonatomic) id<DADREMStoreProvider> rem_storeProvider;
@property (retain, nonatomic) NSMutableArray *subCalHandlers;
@property (nonatomic) unsigned long long nextDisableMonitoringAgentsToken;
@property (readonly, nonatomic) NSMutableDictionary *disableMonitoringAgentsTokens;
@property (readonly, nonatomic) NSArray *activeAgents;

+ (id)sharedManager;
+ (char)wirelessPolicy:(id)a0 isMorePermissiveThanPolicy:(id)a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)stateString;
- (char)_systemMayNowBeReady;
- (id)accountWithAccountID:(id)a0;
- (char)hasActiveAccounts;
- (id)_accountInfoPath;
- (void)_addAccountAggdEntries;
- (void)_clearOrphanedStores;
- (id)_configFileForAgent:(id)a0;
- (void)_deviceDidWake;
- (void)_deviceWillSleep;
- (void)_handleCellularDataUsageChangedNotification;
- (char)_hasDataclassWeCareAbout:(id)a0;
- (void)_loadAndStartMonitoringAgents:(char)a0;
- (void)_registerForCTDataUsageNotificaiton;
- (void)_resetMonitoringRequestsAndLoadAgents;
- (void)_stopMonitoringAndSaveAgents;
- (id)accountWithAccountID:(id)a0 andClassName:(id)a1;
- (id)activeAccountBundleIDs;
- (void)addPendingAccountSetup;
- (id)agentWithAccountID:(id)a0;
- (id)currentPolicyKeyForAccount:(id)a0;
- (unsigned long long)disableMonitoringAgents;
- (void)enableMonitoringAgentsWithToken:(unsigned long long)a0;
- (void)getStatusReportDictsWithCompletionBlock:(id /* block */)a0;
- (char)hasEASAccountConfigured;
- (char)hasPendingAccountSetup;
- (void)loadAgents:(char)a0;
- (void)processMeetingRequestDatas:(id)a0 deliveryIdsToClear:(id)a1 deliveryIdsToSoftClear:(id)a2 inFolderWithId:(id)a3 forAccountWithId:(id)a4 callback:(id /* block */)a5;
- (void)registerForBuddy;
- (void)removePendingAccountSetup;
- (void)requestPolicyUpdateForAccount:(id)a0;
- (char)resumeMonitoringAccountID:(id)a0 syncKeyMap:(id)a1;
- (void)saveAndReleaseAgents;
- (char)startMonitoringAccountID:(id)a0 syncKeyMap:(id)a1;
- (char)stopMonitoringAccountID:(id)a0 folderIDs:(id)a1;
- (char)suspendMonitoringAccountID:(id)a0 folderIDs:(id)a1;
- (void)unregisterForBuddy;
- (char)updateContentsOfAllFoldersForAccountID:(id)a0 andDataclasses:(long long)a1 isUserRequested:(char)a2;
- (char)updateContentsOfAllFoldersForAccountIDs:(id)a0;
- (char)updateContentsOfFolders:(id)a0 forAccountID:(id)a1 andDataclasses:(long long)a2 isUserRequested:(char)a3;
- (char)updateFolderListForAccountID:(id)a0 andDataclasses:(long long)a1 requireChangedFolders:(char)a2 isUserRequested:(char)a3;

@end
