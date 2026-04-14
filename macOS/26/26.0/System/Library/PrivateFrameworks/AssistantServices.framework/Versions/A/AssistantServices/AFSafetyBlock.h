@interface AFSafetyBlock : NSObject {
    struct atomic_flag { _Atomic BOOL _Value; } _hasInvoked;
    id /* block */ _block;
}

- (BOOL)invoke;
- (id)initWithBlock:(id /* block */)a0;
- (void)dealloc;
- (BOOL)invokeWithSignal:(long long)a0;
- (void).cxx_destruct;

@end
