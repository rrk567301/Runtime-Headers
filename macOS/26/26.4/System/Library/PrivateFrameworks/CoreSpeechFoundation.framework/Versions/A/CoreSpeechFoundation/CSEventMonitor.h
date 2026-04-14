@class NSObject, NSHashTable;
@protocol OS_dispatch_queue;

@interface CSEventMonitor : NSObject {
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)enumerateObservers:(id /* block */)a0;
- (unsigned long long)type;
- (id)init;
- (void)removeObserver:(id)a0;
- (void)notifyObserver:(id)a0;
- (void)dealloc;
- (void)enumerateObserversInQueue:(id /* block */)a0;

@end
