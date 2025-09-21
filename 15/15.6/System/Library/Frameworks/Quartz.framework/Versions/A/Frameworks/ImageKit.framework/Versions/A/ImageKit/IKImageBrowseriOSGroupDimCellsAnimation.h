@interface IKImageBrowseriOSGroupDimCellsAnimation : IKAnimationGroup {
    char _expandMode;
}

- (char)animationManager:(id)a0 processStep:(id)a1;
- (char)expandMode;
- (char)handleChannel:(id)a0;
- (void)setExpandMode:(char)a0;

@end
