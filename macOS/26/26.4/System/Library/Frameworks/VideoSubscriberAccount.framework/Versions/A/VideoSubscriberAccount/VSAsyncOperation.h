@interface VSAsyncOperation : NSOperation {
    _Atomic int _state;
}

- (BOOL)isAsynchronous;
- (BOOL)isFinished;
- (BOOL)isExecuting;
- (void)cancel;
- (void)executionDidBegin;
- (void)start;
- (void)finishExecutionIfPossible;

@end
