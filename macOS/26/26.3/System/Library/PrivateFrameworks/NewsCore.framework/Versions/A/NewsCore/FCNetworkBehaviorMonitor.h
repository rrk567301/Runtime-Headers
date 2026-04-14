@class NSDate, NSString, NSArray, FCKeyValueStore, NSHashTable, NSObject, NSMutableArray, NSMutableIndexSet;
@protocol OS_dispatch_queue, FCOperationThrottler;

@interface FCNetworkBehaviorMonitor : NSObject <FCNetworkReachabilityObserving, FCOperationThrottlerDelegate, FCNetworkBehaviorMonitor> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableArray *_sessions;
    NSMutableIndexSet *_sessionIDsThisLaunch;
    NSMutableArray *_events;
    FCKeyValueStore *_localStore;
    id<FCOperationThrottler> _saveThrottler;
    NSHashTable *_observers;
    long long _options;
}

@property (copy) NSDate *dateOfLastNetworkIssue;
@property (readonly, copy, nonatomic) NSArray *sessions;
@property (readonly, copy, nonatomic) NSArray *networkEvents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCacheDirectory:(id)a0;
- (id)initWithOptions:(long long)a0 cacheDirectory:(id)a1;
- (id)init;
- (void)addObserver:(id)a0;
- (void).cxx_destruct;
- (void)populateTelemetry:(id)a0 withNetworkEventsFromDate:(id)a1 toDate:(id)a2;
- (void)operationThrottlerPerformOperation:(id)a0;
- (void)removeObserver:(id)a0;
- (void)logNetworkEvent:(id)a0;
- (void)wifiReachabilityDidChange:(id)a0;
- (id)initForLoggingOnly;

@end
