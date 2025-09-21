@interface VSAsyncOperation : NSOperation {
    _Atomic int _state;
}

- (BOOL)isAsynchronous;
- (BOOL)isFinished;
- (BOOL)isExecuting;
- (void)start;
- (void)cancel;
- (void)executionDidBegin;
- (void)finishExecutionIfPossible;

@end
