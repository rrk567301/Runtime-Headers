@class NSMutableDictionary, NSObject;
@protocol OS_nw_path_monitor, OS_dispatch_queue;

@interface AKNetworkObserver : NSObject {
    NSObject<OS_nw_path_monitor> *_pathMonitor;
    NSObject<OS_dispatch_queue> *_observerQueue;
    NSMutableDictionary *_callbacksByObserver;
}

@property (readonly, nonatomic) BOOL isNetworkReachable;

+ (id)sharedNetworkObserver;

- (void)_stopPathMonitor;
- (void)removeNetworkReachableObserver:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)addNetworkReachableObserver:(id)a0 selector:(SEL)a1;
- (void)dealloc;
- (void)_startPathMonitor;
- (void)_onqueue_networkReachabilityDidChange;

@end
