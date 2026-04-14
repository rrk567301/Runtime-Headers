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
- (void)_startPathMonitor;
- (void)dealloc;
- (void)removeNetworkReachableObserver:(id)a0;
- (void).cxx_destruct;
- (void)addNetworkReachableObserver:(id)a0 selector:(SEL)a1;
- (void)_onqueue_networkReachabilityDidChange;
- (id)init;

@end
