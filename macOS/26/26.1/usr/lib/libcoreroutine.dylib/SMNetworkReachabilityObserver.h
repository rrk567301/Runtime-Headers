@class NSObject;
@protocol OS_nw_path_monitor, OS_dispatch_queue;

@interface SMNetworkReachabilityObserver : NSObject {
    NSObject<OS_nw_path_monitor> *_pathMonitor;
    NSObject<OS_dispatch_queue> *_observerQueue;
}

@property (readonly, nonatomic) BOOL isNetworkReachable;

+ (id)sharedNetworkReachabilityObserver;

- (void)_stopPathMonitor;
- (void)_startPathMonitor;
- (void)dealloc;
- (void).cxx_destruct;
- (id)init;

@end
