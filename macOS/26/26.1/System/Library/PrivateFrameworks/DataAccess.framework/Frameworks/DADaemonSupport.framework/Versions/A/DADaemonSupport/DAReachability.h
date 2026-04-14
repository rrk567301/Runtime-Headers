@class NSMutableDictionary, NSHashTable, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface DAReachability : NSObject {
    NSHashTable *_networkReachableDelegates;
    NSMutableDictionary *_hostReachableDelegates;
    BOOL _monitoringNetworkReachability;
    NSMutableSet *_hostsMonitoredForReachability;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (void)recordError:(id)a0 forHost:(id)a1;
+ (BOOL)hostLikelyUnreachable:(id)a0;
+ (id)sharedReachability;

- (void)addDelegate:(id)a0;
- (void)_startMonitoringNetworkReachability;
- (void)_startOrStopObservingHostReachabilityAfterUpdatingDelegates;
- (void)removeDelegate:(id)a0;
- (void)_networkReachabilityChanged:(id)a0;
- (void)_stopMonitoringNetworkReachability;
- (void)_startMonitoringReachabilityForHost:(id)a0;
- (void)_stopMonitoringReachabilityForHost:(id)a0;
- (void)_startOrStopObservingNetworkReachabilityAfterUpdatingDelegates;
- (void).cxx_destruct;
- (BOOL)_monitoringReachabilityForHost:(id)a0;
- (void)_notifyDelegatesHostReachable:(id)a0;
- (BOOL)_monitoringNetworkReachability;
- (void)_notifyDelegatesNetworkReachable;
- (void)muckWithDelegates:(id /* block */)a0;
- (void)_hostReachabilityChanged:(id)a0;
- (id)init;

@end
