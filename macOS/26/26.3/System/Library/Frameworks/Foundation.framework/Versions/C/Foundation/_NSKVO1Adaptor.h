@class NSObservableKeyPath;

@interface _NSKVO1Adaptor : _NSConcreteObservation {
    NSObservableKeyPath *kp;
    BOOL emitsChanges;
}

- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_observeValueForKeyPath:(id)a0 ofObject:(id)a1 changeKind:(unsigned long long)a2 oldValue:(id)a3 newValue:(id)a4 indexes:(id)a5 context:(void *)a6;
- (void)_setEmitsChanges:(BOOL)a0;
- (void)remove;
- (void)finishObserving;
- (id)initWithObservable:(id)a0 observer:(id)a1 keyPath:(id)a2;
- (BOOL)isEqual:(id)a0;

@end
