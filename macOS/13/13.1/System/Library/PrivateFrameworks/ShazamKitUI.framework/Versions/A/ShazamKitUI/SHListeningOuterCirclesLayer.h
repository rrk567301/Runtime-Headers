@class NSArray, CAMediaTimingFunction;

@interface SHListeningOuterCirclesLayer : SHPaletteLayer

@property (retain) NSArray *outerCircleLayers;
@property (readonly) CAMediaTimingFunction *inOutSineTimingFunction;
@property (readonly) CAMediaTimingFunction *inOutQuartTimingFunction;
@property (readonly) CAMediaTimingFunction *linearTimingFunction;

- (void).cxx_destruct;
- (void)layoutSublayers;
- (void)setup;
- (void)startListeningAnimation;
- (id)buildOuterCircleLayers;
- (void)addScaleAnimationToCircleLayer:(id)a0;
- (void)addCoreAnimationToOuterCircleLayer:(id)a0 withStartOffset:(double)a1;
- (id)scaleNullAnimation;
- (id)outerCircleCoreSizeAnimation;
- (id)outerCircleCoreBorderWidthAnimation;
- (id)outerCircleCoreScaleAnimation;

@end
