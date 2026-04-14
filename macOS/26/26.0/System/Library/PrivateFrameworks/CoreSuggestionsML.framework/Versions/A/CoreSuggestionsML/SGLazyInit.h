@interface SGLazyInit : NSObject {
    id /* block */ _initializer;
    id /* block */ _destructor;
    id _cachedObject;
}

- (void)dealloc;
- (id)getObject;
- (void).cxx_destruct;
- (id)initWithInitializer:(id /* block */)a0 destructor:(id /* block */)a1;
- (void)destroyCachedObject;
- (id)peekAtCachedObject;

@end
