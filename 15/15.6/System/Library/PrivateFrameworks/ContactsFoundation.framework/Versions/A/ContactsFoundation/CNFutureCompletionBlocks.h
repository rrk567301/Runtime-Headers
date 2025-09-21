@class NSMutableArray;

@interface CNFutureCompletionBlocks : NSObject {
    NSMutableArray *_completionBlocks;
    char _shouldCallImmediately;
}

- (id)init;
- (void).cxx_destruct;
- (void)addCompletionBlock:(id /* block */)a0 orCallWithFutureResult:(id)a1;
- (void)addFailureBlock:(id /* block */)a0 orCallWithFutureResult:(id)a1;
- (void)addSuccessBlock:(id /* block */)a0 orCallWithFutureResult:(id)a1;
- (void)flushCompletionBlocksWithFutureResult:(id)a0;
- (void)setShouldCallImmediately:(char)a0;
- (char)shouldCallImmediately;

@end
