@class NSThread, CADisplayLink;

@interface RBAnimationThread : NSObject {
    struct objc_ptr<NSThread *> { NSThread *_p; } _thread;
    struct objc_ptr<CADisplayLink *> { CADisplayLink *_p; } _link;
    unsigned int _empty_ttl;
    int _frame_rate;
    int _pending_frame_rate;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)thread:(id)a0;
- (void)dispatchHandlers:(id)a0;

@end
