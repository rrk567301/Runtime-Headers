@interface _HMFMainThreadAsyncContext : NSObject <HMFAsyncContext>

- (void)assertIsExecuting;
- (void)performBlock:(id /* block */)a0;
- (id)description;

@end
