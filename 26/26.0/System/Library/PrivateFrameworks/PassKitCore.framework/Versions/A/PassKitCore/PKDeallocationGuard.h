@interface PKDeallocationGuard : NSObject {
    struct atomic_flag { _Atomic BOOL _Value; } _invalidated;
    id /* block */ _block;
}

- (id)initWithBlock:(id /* block */)a0;
- (void)dealloc;
- (BOOL)invalidate;
- (id)init;
- (void).cxx_destruct;

@end
