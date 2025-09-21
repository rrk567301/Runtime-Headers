@class NSString;
@protocol _LTDContinuationOperationDelegate;

@interface _LTDContinuationOperation : NSBlockOperation {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    char _isAsynchronous;
    char _isCancelled;
    char _isFinished;
}

@property double operationTimeout;
@property (getter=isAsynchronous, setter=setAsynchronous:) char isAsynchronous;
@property (getter=isFinished, setter=setFinished:) char isFinished;
@property (readonly) NSString *groupID;
@property (readonly, weak, nonatomic) id<_LTDContinuationOperationDelegate> delegate;

+ (id)continuationOperationWithGroupID:(id)a0 delegate:(id)a1 block:(id /* block */)a2;

- (void)dealloc;
- (void).cxx_destruct;
- (void)start;
- (void)cancel;
- (char)isCancelled;
- (void)setCancelled:(char)a0;
- (id)initWithGroupID:(id)a0 delegate:(id)a1 continuationBlock:(id /* block */)a2;

@end
