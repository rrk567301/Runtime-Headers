@interface _NSObserverList : NSObject {
    id _owner;
    id _observers;
    _Atomic unsigned int _observerCount;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _observersLock;
}

- (void)finishObserving;
- (id)description;
- (void)removeObservation:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id)debugDescription;
- (void)_receiveBox:(id)a0;
- (id)init;

@end
