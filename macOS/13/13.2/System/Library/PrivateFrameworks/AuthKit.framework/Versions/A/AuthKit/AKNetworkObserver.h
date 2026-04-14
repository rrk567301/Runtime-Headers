@class NSMutableDictionary, NSObject;
@protocol OS_nw_path_monitor, OS_dispatch_queue;

@interface AKNetworkObserver : NSObject {
    NSObject<OS_nw_path_monitor> *_pathMonitor;
    NSObject<OS_dispatch_queue> *_observerQueue;
    NSMutableDictionary *_invocationByObserver;
}

@property (readonly, nonatomic) BOOL isNetworkReachable;

+ (id)sharedNetworkObserver;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_startPathMonitor;
- (void)_stopPathMonitor;
- (void)_networkReachabilityDidChange;
- (void)addNetworkReachableObserver:(id)a0 selector:(SEL)a1;
- (void)removeNetworkReachableObserver:(id)a0;

@end
