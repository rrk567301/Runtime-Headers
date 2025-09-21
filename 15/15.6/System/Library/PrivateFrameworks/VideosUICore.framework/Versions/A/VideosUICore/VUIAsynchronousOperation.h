@interface VUIAsynchronousOperation : NSOperation {
    int _state;
}

- (void)start;
- (char)isAsynchronous;
- (char)isExecuting;
- (char)isFinished;
- (void)executionDidBegin;
- (void)finishExecutionIfPossible;

@end
