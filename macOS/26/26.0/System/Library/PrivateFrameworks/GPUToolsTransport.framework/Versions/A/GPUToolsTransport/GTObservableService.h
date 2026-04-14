@class NSMutableDictionary;

@interface GTObservableService : NSObject <GTObservableService> {
    NSMutableDictionary *_observerIdToObserver;
    unsigned long long _nextObserverId;
}

@property (readonly) unsigned long long count;

- (unsigned long long)registerObserver:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)deregisterObserver:(unsigned long long)a0;
- (void)deregisterObserversForConnection:(id)a0 path:(id)a1;
- (void)notifyAll:(id /* block */)a0;

@end
