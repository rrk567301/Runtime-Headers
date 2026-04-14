@class CALayer;

@interface SHTaggingViewOuterCircleLayer : CALayer

@property (retain) CALayer *circleContainerLayer;
@property (retain) CALayer *circleLayer;

- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)layoutSublayers;
- (void)setup;

@end
