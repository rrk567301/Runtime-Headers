@class NSMutableArray, NSObject;

@interface NSAutounbinder : NSProxy {
    NSObject *_bindingTarget;
    BOOL _isRetainingBindingTarget;
    BOOL _isRecordingBindings;
    NSMutableArray *_bindingsToThisObject;
    NSMutableArray *_observancesOfThisObject;
}

- (void)dealloc;
- (void)forwardInvocation:(id)a0;
- (id)valueForKeyPath:(id)a0;
- (void)removeObserver:(id)a0 forKeyPath:(id)a1;
- (id)description;
- (void)setValue:(id)a0 forKeyPath:(id)a1;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)addObserver:(id)a0 forKeyPath:(id)a1 options:(unsigned long long)a2 context:(void *)a3;
- (BOOL)validateValue:(id *)a0 forKeyPath:(id)a1 error:(id *)a2;
- (id)mutableArrayValueForKeyPath:(id)a0;
- (id)mutableSetValueForKeyPath:(id)a0;
- (id)_autounbinder;
- (void)addBinding:(id)a0 fromObject:(id)a1;
- (void)addBinding:(id)a0 fromObject:(id)a1 isWeak:(BOOL)a2;
- (id)bindingTarget;
- (id)initWithBindingTarget:(id)a0;
- (void)removeBinding:(id)a0 fromObject:(id)a1;
- (void)retainBindingTargetAndUnbind;

@end
