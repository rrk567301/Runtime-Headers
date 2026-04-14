@class NSMutableDictionary, NSMutableIndexSet;

@interface NPKObserverManager : NSObject {
    NSMutableIndexSet *_priorityIndexSet;
    NSMutableDictionary *_observersTables;
}

- (void).cxx_destruct;
- (void)unregisterObserver:(id)a0;
- (id)init;
- (BOOL)hasObservers;
- (void)registerObserver:(id)a0;
- (void)_enumerateObserversUsingBlock:(id /* block */)a0;
- (BOOL)_hasObservers;
- (void)enumerateObserversUsingBlock:(id /* block */)a0;
- (void)_registerObserver:(id)a0;
- (void)_enumerateObserversTablesCopy:(BOOL)a0 withBlock:(id /* block */)a1;
- (void)_registerObserver:(id)a0 withRelativePriority:(unsigned long long)a1;
- (void)_unregisterObserver:(id)a0;
- (void)registerObserver:(id)a0 withRelativePriority:(unsigned long long)a1;

@end
