@class HMFAsyncFuture;

@interface HMFPromise : NSObject {
    HMFAsyncFuture *_future;
    id /* block */ _completion;
    struct atomic_flag { _Atomic BOOL _Value; } _resolved;
}

@property (readonly, copy) id /* block */ resolverBlock;
@property (readonly, copy) id /* block */ errorOnlyResolverBlock;
@property (readonly, copy) id /* block */ voidResolverBlock;

- (void)dealloc;
- (void).cxx_destruct;
- (char)fulfillWithValue:(id)a0;
- (char)fulfillWithNoValue;
- (char)rejectWithError:(id)a0;
- (char)resolveWithFuture:(id)a0;

@end
