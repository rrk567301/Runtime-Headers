@class CALayer, CAShapeLayer;

@interface SHListeningAutoShadowLayer : SHPaletteLayer

@property (retain) CALayer *autoShadowBackgroundLayer;
@property (retain) CAShapeLayer *autoShadowOuterLayer;

- (void)layoutSublayers;
- (void)setup;
- (void).cxx_destruct;

@end
