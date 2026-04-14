@class LACThreadSafeCollection;

@interface LACKeyBagObserverCollection : NSObject {
    LACThreadSafeCollection *_observers;
    long long _lastPublishedState;
}

- (id)initWithState:(long long)a0;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void).cxx_destruct;
- (void)publishKeybagStateUpdate:(id)a0 state:(long long)a1;

@end
