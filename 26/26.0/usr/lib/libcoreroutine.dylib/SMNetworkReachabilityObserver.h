@class NSObject;
@protocol OS_nw_path_monitor, OS_dispatch_queue;

@interface SMNetworkReachabilityObserver : NSObject {
    NSObject<OS_nw_path_monitor> *_pathMonitor;
    NSObject<OS_dispatch_queue> *_observerQueue;
}

@property (readonly, nonatomic) BOOL isNetworkReachable;

+ (id)sharedNetworkReachabilityObserver;

- (void)dealloc;
- (void)_stopPathMonitor;
- (id)init;
- (void)_startPathMonitor;
- (void).cxx_destruct;

@end
