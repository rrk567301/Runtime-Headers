@class CALayer;

@interface CUIWindowFrameLayer : CALayer

@property CALayer *backgroundHighlightLayer;
@property CALayer *titlebarGradientLayer;
@property CALayer *titlebarBackgroundLayer;
@property CALayer *borderLayer;
@property CALayer *overlayLayer;
@property CALayer *titlebarSeparatorLayer;
@property CALayer *bottomGradientLayer;
@property CALayer *bottomDividerLayer;

- (void)setContentsScale:(double)a0;
- (void)setDelegate:(id)a0;
- (void)dealloc;
- (id)init;
- (id)addAndSetupSublayer:(id)a0;
- (id)layerNamed:(id)a0 makeIfNecessary:(BOOL)a1;
- (id)makeAndAddSublayer;

@end
