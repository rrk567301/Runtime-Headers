@class NSArray, CAMediaTimingFunction;

@interface SHTaggingViewInnerCirclesLayer : CALayer

@property (retain) NSArray *innerCircleLayers;
@property (readonly) CAMediaTimingFunction *inOutSineTimingFunction;
@property (readonly) CAMediaTimingFunction *linearTimingFunction;

- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)layoutSublayers;
- (void)setupSublayers;
- (id)buildInnerCircleLayers;
- (void)addCoreAnimationToInnerCircleLayer:(id)a0 withStartOffset:(double)a1;
- (void)addScaleNullAnimationToInnerCircleLayer:(id)a0;
- (id)innerCircleCoreAnimation;
- (id)innerCircleScaleNullAnimation;
- (void)startTaggingAnimation;

@end
