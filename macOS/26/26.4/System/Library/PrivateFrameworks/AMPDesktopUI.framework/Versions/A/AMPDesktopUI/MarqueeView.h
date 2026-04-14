@class NSTimer, CAKeyframeAnimation;

@interface MarqueeView : NSView

@property (nonatomic) BOOL animating;
@property (retain, nonatomic) CAKeyframeAnimation *marqueeAnimation;
@property (nonatomic) double cachedContentFittingWidth;
@property (retain, nonatomic) NSTimer *startingScrollTimer;
@property (retain, nonatomic) NSTimer *scrollInTheGapTimer;
@property (nonatomic) double marqueeDelay;

- (void)layout;
- (void)mouseEntered:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)allowsVibrancy;
- (void)_intrinsicContentSizeInvalidatedForChildView:(id)a0;
- (id)_viewForFirstBaselineLayout;
- (id)_viewForLastBaselineLayout;
- (void)awakeFromNib;
- (id)makeBackingLayer;
- (void)prepareForInterfaceBuilder;
- (void)finishInit;
- (void)_createMarqueeAnimationIfNeeded;
- (void)removeAnimation;
- (double)_contentFittingWidth;
- (id)_createMarqueeAnimationObject:(id)a0 beginTime:(double)a1 duration:(double)a2;
- (void)restartAnimation;
- (void)scrollIsAlmostEnding:(id)a0;
- (void)scrollIsStarting:(id)a0;
- (void)setLeftMaskActive:(BOOL)a0;
- (void)setMaskWidth:(double)a0;

@end
