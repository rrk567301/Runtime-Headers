@class NSMutableArray;

@interface CNFutureCompletionBlocks : NSObject {
    NSMutableArray *_completionBlocks;
    BOOL _shouldCallImmediately;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)shouldCallImmediately;
- (void)setShouldCallImmediately:(BOOL)a0;
- (void)addSuccessBlock:(id /* block */)a0 orCallWithFutureResult:(id)a1;
- (void)addFailureBlock:(id /* block */)a0 orCallWithFutureResult:(id)a1;
- (void)addCompletionBlock:(id /* block */)a0 orCallWithFutureResult:(id)a1;
- (void)flushCompletionBlocksWithFutureResult:(id)a0;

@end
