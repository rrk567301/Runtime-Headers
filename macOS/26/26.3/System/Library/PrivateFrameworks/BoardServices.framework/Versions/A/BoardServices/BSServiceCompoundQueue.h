@class BSServiceQueue, BSServiceDispatchQueue;

@interface BSServiceCompoundQueue : BSServiceQueue

@property (readonly, nonatomic) BSServiceDispatchQueue *dispatchQueue;
@property (readonly, nonatomic) BSServiceQueue *targetQueue;

+ (id)queueWithDispatchQueue:(id)a0 targetQueue:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)assertBarrierOnQueue;
- (void)performAfter:(double)a0 withBlock:(id /* block */)a1;
- (void)performAsync:(id /* block */)a0;
- (void)_performAsync:(id /* block */)a0 withHandoff:(id)a1;
- (id)_xpcReplyQueue;
- (void)_xpcReplyQueue_performReply:(id /* block */)a0;

@end
