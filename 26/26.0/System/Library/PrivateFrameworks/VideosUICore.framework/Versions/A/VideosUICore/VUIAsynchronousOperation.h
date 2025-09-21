@interface VUIAsynchronousOperation : NSOperation {
    int _state;
}

- (BOOL)isAsynchronous;
- (BOOL)isFinished;
- (BOOL)isExecuting;
- (void)start;
- (void)executionDidBegin;
- (void)finishExecutionIfPossible;

@end
