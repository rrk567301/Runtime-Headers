@class NSMutableDictionary;

@interface GTObservableService : NSObject <GTObservableService> {
    NSMutableDictionary *_observerIdToObserver;
    unsigned long long _nextObserverId;
}

@property (readonly) unsigned long long count;

- (void).cxx_destruct;
- (id)init;
- (unsigned long long)registerObserver:(id)a0;
- (void)deregisterObserver:(unsigned long long)a0;
- (void)deregisterObserversForConnection:(id)a0 path:(id)a1;
- (void)notifyAll:(id /* block */)a0;

@end
