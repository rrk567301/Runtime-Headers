@interface VUIAsynchronousOperation : NSOperation {
    int _state;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _stateLock;
}

- (BOOL)isAsynchronous;
- (BOOL)isExecuting;
- (int)state;
- (BOOL)isFinished;
- (void)executionDidBegin;
- (void)start;
- (id)init;
- (void)setState:(int)a0;
- (void)finishExecutionIfPossible;

@end
