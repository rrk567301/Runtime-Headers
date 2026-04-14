@class NSObject, MTObserverStore;
@protocol OS_dispatch_queue;

@interface MTSpringboardStartMonitor : NSObject {
    int _notifyToken;
    BOOL _isSpringBoardStarted;
    MTObserverStore *_observers;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;

- (void)dealloc;
- (void)removeObserver:(id)a0;
- (id)init;
- (void)didReceiveSpringboardStarted:(BOOL)a0;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)addObserver:(id)a0;
- (BOOL)_checkSpringBoardStarted;
- (BOOL)isSpringboardStarted;
- (void)enumerateObservers:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_stopMonitoring;

@end
