@interface IKImageBrowserFreezeAnimation : IKAnimationGroup

- (char)animationManager:(id)a0 processCell:(id)a1 channel:(id)a2;
- (char)handleChannel:(id)a0;
- (id)initialKeysNeeded;
- (char)needFinalDataForKey:(id)a0;
- (char)needInitialDataForKey:(id)a0;

@end
