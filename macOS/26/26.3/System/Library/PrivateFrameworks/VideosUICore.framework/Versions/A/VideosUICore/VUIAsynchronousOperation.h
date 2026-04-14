@interface VUIAsynchronousOperation : NSOperation {
    int _state;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _stateLock;
}

- (BOOL)isExecuting;
- (BOOL)isFinished;
- (void)start;
- (BOOL)isAsynchronous;
- (id)init;
- (void)executionDidBegin;
- (int)state;
- (void)setState:(int)a0;
- (void)finishExecutionIfPossible;

@end
