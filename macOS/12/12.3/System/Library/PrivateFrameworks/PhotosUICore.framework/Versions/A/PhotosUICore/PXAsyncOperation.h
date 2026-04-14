@interface PXAsyncOperation : NSOperation {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _stateLock;
    int _operationState;
}

- (id)init;
- (void)start;
- (void)cancel;
- (BOOL)isFinished;
- (BOOL)isExecuting;
- (BOOL)isAsynchronous;
- (void)px_finishIfPossible;
- (void)px_start;

@end
