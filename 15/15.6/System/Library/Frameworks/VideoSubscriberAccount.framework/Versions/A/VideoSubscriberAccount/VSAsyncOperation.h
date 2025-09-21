@interface VSAsyncOperation : NSOperation {
    _Atomic int _state;
}

- (void)start;
- (void)cancel;
- (char)isAsynchronous;
- (char)isExecuting;
- (char)isFinished;
- (void)executionDidBegin;
- (void)finishExecutionIfPossible;

@end
