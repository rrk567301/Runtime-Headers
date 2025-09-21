@interface ARCancellableMainQueueDispatchExecutor : NSObject <ARCancellableDelayedExecutor>

@property long long executionId;

- (void)cancel;
- (void)executeWithDelay:(double)a0 block:(id /* block */)a1;

@end
