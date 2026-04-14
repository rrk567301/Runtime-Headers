@class NSMutableArray;
@protocol CNFuture;

@interface ABCNChainedFutureQueue : NSObject {
    NSMutableArray *_futures;
    id<CNFuture> _currentFuture;
}

- (id)description;
- (void).cxx_destruct;
- (void)dealloc;
- (id)advanceToNextFuture;
- (void)cancelCurrentAndRemainingFutures;
- (id)initWithFutures:(id)a0;
- (id)nts_currentFuture;
- (id)nts_dequeueFuture;
- (id)nts_dequeueRemainingFutures;
- (void)nts_setCurrentFuture:(id)a0;

@end
