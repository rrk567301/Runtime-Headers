@interface VSAsyncOperation : NSOperation {
    int _state;
}

- (void)start;
- (void)cancel;
- (BOOL)isAsynchronous;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (void)executionDidBegin;
- (void)finishExecutionIfPossible;

@end
