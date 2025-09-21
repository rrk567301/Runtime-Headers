@class DAAccount, DATrustHandler;

@interface DAAgent : NSObject

@property (retain, nonatomic) DAAccount *account;
@property (nonatomic) double lastRetryTimeout;
@property (nonatomic) char syncWhenReachable;
@property (copy, nonatomic) id /* block */ networkReachableBlock;
@property (nonatomic) char isWaitingForPassword;
@property (nonatomic) char isMonitoring;
@property (readonly, nonatomic) DATrustHandler *trustHandler;

+ (id)launchingAgentWithAccount:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (void)startMonitoring;
- (id)initWithAccount:(id)a0;
- (void)shutdown;
- (id)stateString;
- (void)_reachabilityChanged:(id)a0;
- (void)saveXpcActivity:(id)a0;
- (id)getDAAccount;
- (char)monitorFoldersWithSyncKeyMap:(id)a0;
- (void)observeReachabilityWithBlock:(id /* block */)a0;
- (void)processMeetingRequestDatas:(id)a0 deliveryIdsToClear:(id)a1 deliveryIdsToSoftClear:(id)a2 inFolderWithId:(id)a3 callback:(id /* block */)a4;
- (void)refreshFolderListRequireChangedFolders:(char)a0 isUserRequested:(char)a1;
- (void)requestAgentStopMonitoringWithCompletionBlock:(id /* block */)a0;
- (void)resumeMonitoringFoldersWithSyncKeyMap:(id)a0;
- (void)stopObservingReachability;
- (void)syncFolderIDs:(id)a0 forDataclasses:(long long)a1 isUserRequested:(char)a2;

@end
