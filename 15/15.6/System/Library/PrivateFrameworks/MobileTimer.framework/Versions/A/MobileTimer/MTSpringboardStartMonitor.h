@class NSObject, MTObserverStore;
@protocol OS_dispatch_queue;

@interface MTSpringboardStartMonitor : NSObject {
    int _notifyToken;
    char _isSpringBoardStarted;
    MTObserverStore *_observers;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)enumerateObservers:(id /* block */)a0;
- (char)_checkSpringBoardStarted;
- (char)isSpringboardStarted;
- (void)didReceiveSpringboardStarted:(char)a0;

@end
