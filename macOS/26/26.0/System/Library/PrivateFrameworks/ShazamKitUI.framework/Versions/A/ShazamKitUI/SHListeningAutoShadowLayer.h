@class CALayer, CAShapeLayer;

@interface SHListeningAutoShadowLayer : SHPaletteLayer

@property (retain) CALayer *autoShadowBackgroundLayer;
@property (retain) CAShapeLayer *autoShadowOuterLayer;

- (void)setup;
- (void)layoutSublayers;
- (void).cxx_destruct;

@end
