@interface VUIAsynchronousOperation : NSOperation {
    int _state;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _stateLock;
}

- (BOOL)isAsynchronous;
- (BOOL)isFinished;
- (BOOL)isExecuting;
- (void)executionDidBegin;
- (id)init;
- (void)start;
- (void)setState:(int)a0;
- (int)state;
- (void)finishExecutionIfPossible;

@end
