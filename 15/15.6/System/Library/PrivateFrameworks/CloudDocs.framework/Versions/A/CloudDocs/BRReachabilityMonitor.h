@class NSObject, NSHashTable;
@protocol OS_dispatch_queue, OS_nw_path_monitor;

@interface BRReachabilityMonitor : NSObject {
    NSHashTable *_reachabilityObservers;
    NSObject<OS_dispatch_queue> *_queue;
    char _isNetworkReachable;
    NSObject<OS_nw_path_monitor> *_pathMonitor;
    char _isCellularNetwork;
}

@property (readonly, nonatomic) char isNetworkReachable;
@property (readonly, nonatomic) char isCellularNetwork;

+ (id)sharedReachabilityMonitor;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)_updateCellularNetworkStatusForObserver:(id)a0 isCellularNetwork:(char)a1 previousCellularStatus:(char)a2;

@end
