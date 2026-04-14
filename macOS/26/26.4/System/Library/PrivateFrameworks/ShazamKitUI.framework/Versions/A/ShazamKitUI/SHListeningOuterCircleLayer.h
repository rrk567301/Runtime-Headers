@class CALayer;

@interface SHListeningOuterCircleLayer : SHPaletteLayer

@property (retain) CALayer *circleContainerLayer;
@property (retain) CALayer *circleLayer;

- (void)layoutSublayers;
- (void)setup;
- (void).cxx_destruct;

@end
