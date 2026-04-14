@class NSMutableSet;

@interface KNAnimationDelayedCallbacks : NSObject {
    NSMutableSet *_delayedCallbacks;
}

- (void)removeCallback:(id)a0;
- (id)performBlock:(id /* block */)a0 afterDelay:(double)a1;
- (void).cxx_destruct;
- (void)cancelAllCallbacks;
- (id)init;
- (void)p_setupCallback:(id)a0;
- (void)pauseAllCallbacks;
- (id)performSelector:(SEL)a0 onTarget:(id)a1 withObject:(id)a2 afterDelay:(double)a3;
- (void)resumeAllCallbacks;

@end
