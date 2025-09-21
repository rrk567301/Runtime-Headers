@class NSArray, NSHashTable;

@interface ARNetworkingWeakObserverCollection : NSObject {
    NSHashTable *_observers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _observersLock;
}

@property (readonly) NSArray *observers;

- (id)init;
- (void).cxx_destruct;
- (void)addDataObserver:(id)a0;
- (void)removeDataObserver:(id)a0;

@end
