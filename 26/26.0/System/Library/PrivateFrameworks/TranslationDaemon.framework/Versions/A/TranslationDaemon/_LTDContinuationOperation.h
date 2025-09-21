@class NSString;
@protocol _LTDContinuationOperationDelegate;

@interface _LTDContinuationOperation : NSBlockOperation {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _isAsynchronous;
    BOOL _isCancelled;
    BOOL _isFinished;
}

@property double operationTimeout;
@property (getter=isAsynchronous, setter=setAsynchronous:) BOOL isAsynchronous;
@property (getter=isFinished, setter=setFinished:) BOOL isFinished;
@property (readonly) NSString *groupID;
@property (readonly, weak, nonatomic) id<_LTDContinuationOperationDelegate> delegate;

+ (id)continuationOperationWithGroupID:(id)a0 delegate:(id)a1 block:(id /* block */)a2;

- (void)setCancelled:(BOOL)a0;
- (BOOL)isCancelled;
- (void)start;
- (void)dealloc;
- (void)cancel;
- (void).cxx_destruct;
- (id)initWithGroupID:(id)a0 delegate:(id)a1 continuationBlock:(id /* block */)a2;

@end
