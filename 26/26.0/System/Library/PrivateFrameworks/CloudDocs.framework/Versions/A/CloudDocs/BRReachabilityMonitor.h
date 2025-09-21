@class NSObject, NSHashTable;
@protocol OS_dispatch_queue, OS_nw_path_monitor;

@interface BRReachabilityMonitor : NSObject {
    NSHashTable *_reachabilityObservers;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _isNetworkReachable;
    NSObject<OS_nw_path_monitor> *_pathMonitor;
    BOOL _isCellularNetwork;
}

@property (readonly, nonatomic) BOOL isNetworkReachable;
@property (readonly, nonatomic) BOOL isCellularNetwork;

+ (id)sharedReachabilityMonitor;

- (void)dealloc;
- (void)invalidate;
- (void)removeObserver:(id)a0;
- (id)init;
- (void)_updateCellularNetworkStatusForObserver:(id)a0 isCellularNetwork:(BOOL)a1 previousCellularStatus:(BOOL)a2;
- (void)addObserver:(id)a0;
- (void).cxx_destruct;

@end
