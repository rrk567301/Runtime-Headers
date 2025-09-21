@interface PXAsyncOperation : NSOperation {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _stateLock;
    int _operationState;
}

@property (readonly, nonatomic) BOOL px_shouldWaitForCancel;

- (BOOL)isAsynchronous;
- (BOOL)isFinished;
- (BOOL)isExecuting;
- (void)start;
- (void)cancel;
- (id)init;
- (void)px_finishIfPossible;
- (void)px_start;

@end
