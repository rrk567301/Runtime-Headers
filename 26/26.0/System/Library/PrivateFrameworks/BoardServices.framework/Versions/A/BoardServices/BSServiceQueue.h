@interface BSServiceQueue : NSObject {
    struct __CFBoolean { } *_userInteractive;
}

+ (id)queueWithMainRunLoopModes:(id)a0;
+ (id)mainDispatchQueue;
+ (id)queueWithDispatchQueue:(id)a0;

- (id)init;
- (void)assertOnQueue;
- (void)assertBarrierOnQueue;
- (void)performAfter:(double)a0 withBlock:(id /* block */)a1;
- (void)performAsync:(id /* block */)a0;
- (void)_performAsync:(id /* block */)a0 withHandoff:(id)a1;
- (id)_xpcReplyQueue;
- (void)_xpcReplyQueue_performReply:(id /* block */)a0;

@end
