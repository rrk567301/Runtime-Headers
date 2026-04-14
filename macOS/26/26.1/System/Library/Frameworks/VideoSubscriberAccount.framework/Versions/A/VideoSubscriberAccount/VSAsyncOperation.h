@interface VSAsyncOperation : NSOperation {
    _Atomic int _state;
}

- (BOOL)isExecuting;
- (void)start;
- (BOOL)isFinished;
- (void)cancel;
- (BOOL)isAsynchronous;
- (void)executionDidBegin;
- (void)finishExecutionIfPossible;

@end
