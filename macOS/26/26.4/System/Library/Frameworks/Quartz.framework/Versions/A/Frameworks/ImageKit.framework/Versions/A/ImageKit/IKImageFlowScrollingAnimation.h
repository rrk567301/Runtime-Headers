@interface IKImageFlowScrollingAnimation : IKAnimationGroup {
    id _delegate;
}

- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:(id)a0;
- (BOOL)animationManager:(id)a0 processStep:(id)a1;
- (BOOL)handleChannel:(id)a0;

@end
