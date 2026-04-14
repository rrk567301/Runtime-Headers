@interface IKImageBrowseriOSGroupDimCellsAnimation : IKAnimationGroup {
    BOOL _expandMode;
}

- (BOOL)handleChannel:(id)a0;
- (BOOL)animationManager:(id)a0 processStep:(id)a1;
- (BOOL)expandMode;
- (void)setExpandMode:(BOOL)a0;

@end
