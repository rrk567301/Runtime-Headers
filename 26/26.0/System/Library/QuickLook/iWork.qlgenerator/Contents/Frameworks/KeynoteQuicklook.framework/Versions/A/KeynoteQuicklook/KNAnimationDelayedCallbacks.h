@class NSMutableSet;

@interface KNAnimationDelayedCallbacks : NSObject {
    NSMutableSet *_delayedCallbacks;
}

- (id)performBlock:(id /* block */)a0 afterDelay:(double)a1;
- (void)cancelAllCallbacks;
- (id)init;
- (void)removeCallback:(id)a0;
- (void).cxx_destruct;
- (void)p_setupCallback:(id)a0;
- (void)pauseAllCallbacks;
- (id)performSelector:(SEL)a0 onTarget:(id)a1 withObject:(id)a2 afterDelay:(double)a3;
- (void)resumeAllCallbacks;

@end
