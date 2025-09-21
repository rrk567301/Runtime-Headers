@interface SCDASafetyBlock : NSObject {
    struct atomic_flag { _Atomic BOOL _Value; } _hasInvoked;
    id /* block */ _block;
}

- (void)dealloc;
- (void).cxx_destruct;
- (char)invoke;
- (id)initWithBlock:(id /* block */)a0;
- (char)invokeWithSignal:(long long)a0;

@end
