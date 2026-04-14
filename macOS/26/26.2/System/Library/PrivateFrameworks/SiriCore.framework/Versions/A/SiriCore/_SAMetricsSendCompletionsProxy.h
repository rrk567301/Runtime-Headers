@class NSMutableArray;

@interface _SAMetricsSendCompletionsProxy : NSObject {
    NSMutableArray *_blocks;
}

- (void).cxx_destruct;
- (void)addBlock:(id /* block */)a0;
- (id)init;
- (void)dealloc;
- (void)dispatchBlocksWithResult:(long long)a0 error:(id)a1;

@end
