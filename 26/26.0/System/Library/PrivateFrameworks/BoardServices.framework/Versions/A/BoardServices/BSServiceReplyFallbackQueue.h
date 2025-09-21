@class BSServiceQueue, BSServiceDispatchQueue;

@interface BSServiceReplyFallbackQueue : BSServiceQueue {
    BSServiceDispatchQueue *_replyQueue;
    BSServiceQueue *_serviceQueue;
}

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)assertBarrierOnQueue;
- (void)performAfter:(double)a0 withBlock:(id /* block */)a1;
- (void)performAsync:(id /* block */)a0;
- (void)_performAsync:(id /* block */)a0 withHandoff:(id)a1;
- (id)_xpcReplyQueue;
- (void)_xpcReplyQueue_performReply:(id /* block */)a0;

@end
