@interface ARMainQueueDispatchExecutor : NSObject <ARDelayedExecutor>

- (void)executeWithDelay:(double)a0 block:(id /* block */)a1;

@end
