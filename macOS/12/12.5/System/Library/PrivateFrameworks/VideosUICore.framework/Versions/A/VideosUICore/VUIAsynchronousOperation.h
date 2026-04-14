@interface VUIAsynchronousOperation : NSOperation {
    int _state;
}

- (void)start;
- (BOOL)isFinished;
- (BOOL)isExecuting;
- (BOOL)isAsynchronous;
- (void)finishExecutionIfPossible;
- (void)executionDidBegin;

@end
