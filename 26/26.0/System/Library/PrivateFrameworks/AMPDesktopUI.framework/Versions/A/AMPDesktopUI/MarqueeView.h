@class NSTimer, CAKeyframeAnimation;

@interface MarqueeView : NSView

@property (nonatomic) BOOL animating;
@property (retain, nonatomic) CAKeyframeAnimation *marqueeAnimation;
@property (nonatomic) double cachedContentFittingWidth;
@property (retain, nonatomic) NSTimer *startingScrollTimer;
@property (retain, nonatomic) NSTimer *scrollInTheGapTimer;
@property (nonatomic) double marqueeDelay;

- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layout;
- (id)init;
- (void).cxx_destruct;
- (id)_viewForFirstBaselineLayout;
- (id)_viewForLastBaselineLayout;
- (void)awakeFromNib;
- (id)makeBackingLayer;
- (void)prepareForInterfaceBuilder;
- (void)finishInit;
- (void)_createMarqueeAnimationIfNeeded;
- (void)removeAnimation;
- (double)_contentFittingWidth;
- (void)removePriorAnimationAndStartANewOneIfNeeded;
- (void)scrollIsAlmostEnding:(id)a0;
- (void)scrollIsStarting:(id)a0;
- (void)setLeftMaskActive:(BOOL)a0;
- (void)setMaskWidth:(double)a0;
- (void)triggerAnimationIfNeeded;

@end
