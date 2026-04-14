@interface VSAsyncOperation : NSOperation {
    _Atomic int _state;
}

- (BOOL)isAsynchronous;
- (BOOL)isExecuting;
- (void)cancel;
- (BOOL)isFinished;
- (void)executionDidBegin;
- (void)start;
- (void)finishExecutionIfPossible;

@end
