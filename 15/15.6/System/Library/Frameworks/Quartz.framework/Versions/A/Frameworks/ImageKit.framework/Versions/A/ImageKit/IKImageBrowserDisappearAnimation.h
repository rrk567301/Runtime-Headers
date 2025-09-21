@interface IKImageBrowserDisappearAnimation : IKAnimationGroup

- (void)dealloc;
- (char)animationManager:(id)a0 processStep:(id)a1;
- (char)handleChannel:(id)a0;
- (id)initialKeysNeeded;
- (char)needFinalDataForKey:(id)a0;
- (char)needInitialDataForKey:(id)a0;

@end
