@class NSMethodSignature, NSArray;

@interface AFMultiArgumentSafetyBlock : NSObject {
    struct atomic_flag { _Atomic BOOL _Value; } _hasInvoked;
    id _block;
    NSMethodSignature *_blockMethodSignature;
    NSArray *_defaultValueArray;
}

- (void).cxx_destruct;
- (char)invoke;
- (id)initWithBlock:(id)a0;
- (id)initWithBlock:(id)a0 defaultValueArray:(id)a1;
- (id)initWithBlock:(id)a0 defaultValues:(id)a1;
- (char)invokeWithValueArray:(id)a0;
- (char)invokeWithValues:(id)a0;

@end
