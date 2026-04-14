@interface VSAsyncOperation : NSOperation {
    int _state;
}

- (void)start;
- (void)cancel;
- (BOOL)isFinished;
- (BOOL)isExecuting;
- (BOOL)isAsynchronous;
- (void)finishExecutionIfPossible;
- (void)executionDidBegin;

@end
