@class NAFuture;

@interface HMBFutureOperation : HMFOperation

@property (readonly, copy) id /* block */ block;
@property (readonly) NAFuture *future;

+ (id)logCategory;

- (id)initWithBlock:(id /* block */)a0;
- (void)main;
- (void)cancelWithError:(id)a0;
- (void).cxx_destruct;

@end
