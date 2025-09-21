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

- (void)removeObserver:(id)a0;
- (id)initForLoggingOnly;
- (void)populateTelemetry:(id)a0 withNetworkEventsFromDate:(id)a1 toDate:(id)a2;
- (id)init;
- (void)wifiReachabilityDidChange:(id)a0;
- (id)initWithCacheDirectory:(id)a0;
- (void)logNetworkEvent:(id)a0;
- (void)addObserver:(id)a0;
- (id)initWithOptions:(long long)a0 cacheDirectory:(id)a1;
- (void).cxx_destruct;
- (void)operationThrottlerPerformOperation:(id)a0;

@end
