@interface PXAsyncOperation : NSOperation {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _stateLock;
    int _operationState;
}

@property (readonly, nonatomic) BOOL px_shouldWaitForCancel;

- (BOOL)isExecuting;
- (void)cancel;
- (BOOL)isFinished;
- (void)start;
- (BOOL)isAsynchronous;
- (id)init;
- (void)px_finishIfPossible;
- (void)px_start;

@end
