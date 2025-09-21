@class NSOperation;

@interface AVOperationQueueWithFundamentalDependency : NSOperationQueue {
    NSOperation *_fundamentalOperation;
}

- (void)dealloc;
- (void)addOperation:(id)a0;
- (void)addOperations:(id)a0 waitUntilFinished:(char)a1;
- (id)initWithFundamentalOperation:(id)a0;

@end
