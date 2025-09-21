@class NSHashTable;

@interface TSUObserverNotifier : NSObject {
    NSHashTable *_observers;
}

- (void)removeObserver:(id)a0;
- (id)init;
- (void)addObserver:(id)a0;
- (void).cxx_destruct;
- (void)notifyObserversUsingBlock:(id /* block */)a0;

@end
