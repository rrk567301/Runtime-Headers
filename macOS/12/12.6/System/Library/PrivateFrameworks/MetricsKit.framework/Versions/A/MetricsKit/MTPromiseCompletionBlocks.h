@class NSMutableArray;

@interface MTPromiseCompletionBlocks : NSObject {
    NSMutableArray *_completionBlocks;
    BOOL _shouldCallImmediately;
}

- (id)init;
- (void).cxx_destruct;
- (void)addCompletionBlock:(id /* block */)a0;
- (void)addSuccessBlock:(id /* block */)a0;
- (void)addErrorBlock:(id /* block */)a0;
- (void)flushCompletionBlocksWithPromiseResult:(id)a0;
- (void)callErrorBlock:(id /* block */)a0 withPromiseResult:(id)a1;
- (void)callCompletionBlock:(id /* block */)a0 withPromiseResult:(id)a1;
- (void)callSuccessBlock:(id /* block */)a0 withPromiseResult:(id)a1;

@end
