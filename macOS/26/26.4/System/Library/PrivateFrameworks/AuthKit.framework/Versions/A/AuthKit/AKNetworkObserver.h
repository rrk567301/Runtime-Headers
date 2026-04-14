@class NSMutableDictionary, NSObject;
@protocol OS_nw_path_monitor, OS_dispatch_queue;

@interface AKNetworkObserver : NSObject {
    NSObject<OS_nw_path_monitor> *_pathMonitor;
    NSObject<OS_dispatch_queue> *_observerQueue;
    NSMutableDictionary *_callbacksByObserver;
}

@property (readonly, nonatomic) BOOL isNetworkReachable;

+ (id)sharedNetworkObserver;

- (void)_onqueue_networkReachabilityDidChange;
- (void)removeNetworkReachableObserver:(id)a0;
- (void).cxx_destruct;
- (void)_stopPathMonitor;
- (id)init;
- (void)_startPathMonitor;
- (void)addNetworkReachableObserver:(id)a0 selector:(SEL)a1;
- (void)dealloc;

@end
