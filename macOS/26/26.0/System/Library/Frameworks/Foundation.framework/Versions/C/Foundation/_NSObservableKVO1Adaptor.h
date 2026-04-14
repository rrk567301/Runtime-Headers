@class NSObservableKeyPath;

@interface _NSObservableKVO1Adaptor : _NSObservableObservation {
    NSObservableKeyPath *kp;
    BOOL emitsChanges;
}

- (void)finishObserving;
- (void)_observeValueForKeyPath:(id)a0 ofObject:(id)a1 changeKind:(unsigned long long)a2 oldValue:(id)a3 newValue:(id)a4 indexes:(id)a5 context:(void *)a6;
- (void)remove;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)isEqual:(id)a0;
- (id)initWithObservable:(id)a0 observer:(id)a1 keyPath:(id)a2;

@end
