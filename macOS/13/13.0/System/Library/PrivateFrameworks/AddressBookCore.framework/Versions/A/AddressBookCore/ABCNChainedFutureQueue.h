@class NSMutableArray;
@protocol CNFuture;

@interface ABCNChainedFutureQueue : NSObject {
    NSMutableArray *_futures;
    id<CNFuture> _currentFuture;
}

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)initWithFutures:(id)a0;
- (void)cancelCurrentAndRemainingFutures;
- (id)advanceToNextFuture;
- (id)nts_dequeueFuture;
- (id)nts_dequeueRemainingFutures;
- (id)nts_currentFuture;
- (void)nts_setCurrentFuture:(id)a0;

@end
