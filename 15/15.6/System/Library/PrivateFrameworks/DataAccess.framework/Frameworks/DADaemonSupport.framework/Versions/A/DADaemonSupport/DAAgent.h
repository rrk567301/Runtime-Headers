@class DAAccount, DATrustHandler, NSString;

@interface DAAgent : NSObject <DAReachabilityClient> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } reachabilityLock;
    unsigned long long _reachabilityUnrestrictedTimestamp;
    int _consecutiveDelayedReachabilityCallbacks;
    int _reachabilityCallbackSequence;
    char _allowNextReachabilityCallback;
    char _delayingReachabilityCallback;
}

@property (retain, nonatomic) DAAccount *account;
@property (nonatomic) double lastRetryTimeout;
@property (nonatomic) char syncWhenReachable;
@property (copy, nonatomic) id /* block */ networkReachableBlock;
@property (nonatomic) char isWaitingForPassword;
@property (nonatomic) char isMonitoring;
@property (readonly, nonatomic) DATrustHandler *trustHandler;
@property (readonly, nonatomic) NSString *publicDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)startMonitoring;
- (id)initWithAccount:(id)a0;
- (void)shutdown;
- (id)stateString;
- (int)preferredEventDaysToSync;
- (int)preferredToDoDaysToSync;
- (void)networkReachable;
- (void)saveXpcActivity:(id)a0;
- (id)getDAAccount;
- (void)observeReachabilityWithBlock:(id /* block */)a0;
- (void)processMeetingRequestDatas:(id)a0 deliveryIdsToClear:(id)a1 deliveryIdsToSoftClear:(id)a2 inFolderWithId:(id)a3 callback:(id /* block */)a4;
- (void)refreshFolderListRequireChangedFolders:(char)a0 isUserRequested:(char)a1;
- (void)requestAgentStopMonitoringWithCompletionBlock:(id /* block */)a0;
- (void)stopObservingReachability;
- (void)syncFolderIDs:(id)a0 forDataclasses:(long long)a1 isUserRequested:(char)a2;
- (id)hostToObserveForDAReachability:(id)a0;
- (void)_scheduleDelayedReachabilityCallback:(double)a0 block:(id /* block */)a1;
- (void)setDelayingReachabilityCallback:(char)a0;
- (char)shouldBeMonitoringReachability;
- (void)startOrStopMonitoringReachability:(char)a0;

@end
