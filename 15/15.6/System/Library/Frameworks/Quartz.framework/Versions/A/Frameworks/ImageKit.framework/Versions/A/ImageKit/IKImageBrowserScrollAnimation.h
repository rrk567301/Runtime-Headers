@interface IKImageBrowserScrollAnimation : IKAnimationGroup

@property (nonatomic) struct CGPoint { double x; double y; } offset_i;
@property (nonatomic) struct CGPoint { double x; double y; } offset_f;

- (char)animationManager:(id)a0 processStep:(id)a1;
- (char)handleChannel:(id)a0;

@end
