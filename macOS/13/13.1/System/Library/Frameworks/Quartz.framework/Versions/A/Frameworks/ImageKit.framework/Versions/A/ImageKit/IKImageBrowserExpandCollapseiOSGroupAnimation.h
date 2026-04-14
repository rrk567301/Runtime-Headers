@interface IKImageBrowserExpandCollapseiOSGroupAnimation : IKImageBrowserExpandCollapseItemsAnimation

- (BOOL)animationManager:(id)a0 processCell:(id)a1 channel:(id)a2;
- (BOOL)handleChannel:(id)a0;
- (BOOL)animationManager:(id)a0 processStep:(id)a1;
- (void)_delayedRedraw:(id)a0;
- (void)_delayedDidFinish:(id)a0;
- (void)didFinish:(id)a0;

@end
