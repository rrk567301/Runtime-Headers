@interface _LTDContinuationOperation : NSBlockOperation {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _isAsynchronous;
    BOOL _isCancelled;
    BOOL _isFinished;
}

@property double operationTimeout;
@property (getter=isAsynchronous, setter=setAsynchronous:) BOOL isAsynchronous;
@property (getter=isFinished, setter=setFinished:) BOOL isFinished;

+ (id)continuationOperationWithBlock:(id /* block */)a0;

- (void)dealloc;
- (void)start;
- (void)cancel;
- (BOOL)isCancelled;
- (void)setCancelled:(BOOL)a0;
- (id)initWithContinuationBlock:(id /* block */)a0;

@end
