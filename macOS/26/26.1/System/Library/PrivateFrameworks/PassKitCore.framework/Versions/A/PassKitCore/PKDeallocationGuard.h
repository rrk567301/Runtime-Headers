@interface PKDeallocationGuard : NSObject {
    struct atomic_flag { _Atomic BOOL _Value; } _invalidated;
    id /* block */ _block;
}

- (id)initWithBlock:(id /* block */)a0;
- (BOOL)invalidate;
- (void)dealloc;
- (void).cxx_destruct;
- (id)init;

@end
