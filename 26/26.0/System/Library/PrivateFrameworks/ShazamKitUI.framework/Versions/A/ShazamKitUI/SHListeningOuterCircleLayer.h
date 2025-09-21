@class CALayer;

@interface SHListeningOuterCircleLayer : SHPaletteLayer

@property (retain) CALayer *circleContainerLayer;
@property (retain) CALayer *circleLayer;

- (void)setup;
- (void)layoutSublayers;
- (void).cxx_destruct;

@end
