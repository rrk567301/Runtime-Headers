@interface IKImageFlowScrollingAnimation : IKAnimationGroup {
    id _delegate;
}

- (id)delegate;
- (void)setDelegate:(id)a0;
- (void).cxx_destruct;
- (BOOL)animationManager:(id)a0 processStep:(id)a1;
- (BOOL)handleChannel:(id)a0;

@end
