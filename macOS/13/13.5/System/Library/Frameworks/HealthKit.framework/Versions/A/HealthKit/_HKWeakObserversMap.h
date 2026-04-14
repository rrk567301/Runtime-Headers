@class NSMutableDictionary;

@interface _HKWeakObserversMap : NSObject {
    NSMutableDictionary *_observers;
}

- (void).cxx_destruct;
- (void)addObserver:(id)a0 forKey:(id)a1;
- (void)removeObserver:(id)a0 forKey:(id)a1;
- (unsigned long long)observerCountForKey:(id)a0;
- (id)observersForKey:(id)a0;

@end
