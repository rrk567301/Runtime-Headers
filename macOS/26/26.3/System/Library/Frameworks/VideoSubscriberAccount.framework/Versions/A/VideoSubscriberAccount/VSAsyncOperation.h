@interface VSAsyncOperation : NSOperation {
    _Atomic int _state;
}

- (BOOL)isExecuting;
- (void)cancel;
- (BOOL)isFinished;
- (void)start;
- (BOOL)isAsynchronous;
- (void)executionDidBegin;
- (void)finishExecutionIfPossible;

@end
