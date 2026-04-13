@class NSArray, CAMediaTimingFunction;

@interface SHTaggingViewOuterCirclesLayer : CALayer

@property (retain) NSArray *outerCircleLayers;
@property (readonly) CAMediaTimingFunction *inOutSineTimingFunction;
@property (readonly) CAMediaTimingFunction *inOutQuartTimingFunction;
@property (readonly) CAMediaTimingFunction *linearTimingFunction;

- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)layoutSublayers;
- (void)setupSublayers;
- (void)startTaggingAnimation;
- (id)buildOuterCircleLayers;
- (void)addCoreAnimationToOuterCircleLayer:(id)a0 withStartOffset:(double)a1;
- (void)addScaleAnimationToCircleLayer:(id)a0;
- (id)scaleNullAnimation;
- (id)outerCircleCoreSizeAnimation;
- (id)outerCircleCoreBorderWidthAnimation;
- (id)outerCircleCoreScaleAnimation;

@end
