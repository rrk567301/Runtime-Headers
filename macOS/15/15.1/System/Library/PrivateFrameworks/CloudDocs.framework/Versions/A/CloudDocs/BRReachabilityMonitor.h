@class NSObject, NSHashTable;
@protocol OS_dispatch_queue, OS_nw_path_monitor;

@interface BRReachabilityMonitor : NSObject {
    NSHashTable *_reachabilityObservers;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _isNetworkReachable;
    NSObject<OS_nw_path_monitor> *_pathMonitor;
}

@property (readonly, nonatomic) BOOL isNetworkReachable;

+ (id)sharedReachabilityMonitor;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;

@end
