@interface IKImageFlowScrollingAnimation : IKAnimationGroup {
    id _delegate;
}

- (void)setDelegate:(id)a0;
- (id)delegate;
- (void).cxx_destruct;
- (BOOL)animationManager:(id)a0 processStep:(id)a1;
- (BOOL)handleChannel:(id)a0;

@end
