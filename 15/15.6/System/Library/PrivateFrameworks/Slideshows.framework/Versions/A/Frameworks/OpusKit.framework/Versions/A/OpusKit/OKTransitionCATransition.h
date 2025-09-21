@class CATransition;

@interface OKTransitionCATransition : OKTransitionParallaxPush {
    CATransition *_transition;
}

- (void)dealloc;
- (id)animation;
- (void)_transitionInView:(id)a0 fromSubview:(id)a1 toSubview:(id)a2 wasInteractive:(char)a3 duration:(double)a4 doEaseIn:(char)a5 isCompleting:(char)a6 wasCancelled:(char)a7 fromProgress:(double)a8 completionHandler:(id /* block */)a9;
- (void)prepareInView:(id)a0;

@end
