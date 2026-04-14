@interface PKDeallocationGuard : NSObject {
    struct atomic_flag { _Atomic BOOL _Value; } _invalidated;
    id /* block */ _block;
}

- (BOOL)invalidate;
- (id)initWithBlock:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;

@end
