@interface PXAsyncOperation : NSOperation {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _stateLock;
    int _operationState;
}

@property (readonly, nonatomic) char px_shouldWaitForCancel;

- (id)init;
- (void)start;
- (void)cancel;
- (char)isAsynchronous;
- (char)isExecuting;
- (char)isFinished;
- (void)px_finishIfPossible;
- (void)px_start;

@end
