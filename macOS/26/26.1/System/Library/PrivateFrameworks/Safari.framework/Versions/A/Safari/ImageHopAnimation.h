@class ImageHopAnimationController;

@interface ImageHopAnimation : NSAnimation

@property (weak) ImageHopAnimationController *animationController;

- (void)setCurrentProgress:(float)a0;
- (void).cxx_destruct;
- (struct CGPoint { double x0; double x1; })_centerPointForProgress:(double)a0;

@end
