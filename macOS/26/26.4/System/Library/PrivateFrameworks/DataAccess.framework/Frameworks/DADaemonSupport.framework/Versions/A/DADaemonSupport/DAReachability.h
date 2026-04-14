@class NSMutableDictionary, NSHashTable, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface DAReachability : NSObject {
    NSHashTable *_networkReachableDelegates;
    NSMutableDictionary *_hostReachableDelegates;
    BOOL _monitoringNetworkReachability;
    NSMutableSet *_hostsMonitoredForReachability;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedReachability;
+ (void)recordError:(id)a0 forHost:(id)a1;
+ (BOOL)hostLikelyUnreachable:(id)a0;

- (void)addDelegate:(id)a0;
- (void)_startOrStopObservingHostReachabilityAfterUpdatingDelegates;
- (void)_hostReachabilityChanged:(id)a0;
- (BOOL)_monitoringReachabilityForHost:(id)a0;
- (void)removeDelegate:(id)a0;
- (void)_notifyDelegatesNetworkReachable;
- (void)_startMonitoringReachabilityForHost:(id)a0;
- (void)_stopMonitoringReachabilityForHost:(id)a0;
- (void).cxx_destruct;
- (void)_networkReachabilityChanged:(id)a0;
- (id)init;
- (void)_startMonitoringNetworkReachability;
- (BOOL)_monitoringNetworkReachability;
- (void)muckWithDelegates:(id /* block */)a0;
- (void)_stopMonitoringNetworkReachability;
- (void)_notifyDelegatesHostReachable:(id)a0;
- (void)_startOrStopObservingNetworkReachabilityAfterUpdatingDelegates;

@end
