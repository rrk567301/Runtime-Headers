@class CALayer, CABackdropLayer;

@interface _NSOverlayBackgroundView : NSView {
    CALayer *_materialLayer;
    CALayer *_tintLayer;
    CABackdropLayer *_backdropLayer;
    CALayer *_backgroundLayer;
    double _defaultBlurRadius;
    double _defaultSaturationMultiplier;
    struct CGColor { } *_defaultBackgroundColor;
    char _isActive;
    char _hasAcceleration;
    char _hasAccelerationCached;
    char _pressed;
}

@property (retain) id backgroundImageRef;
@property double backgroundScaleFactor;
@property (setter=setActive:) char isActive;
@property (setter=setDarkened:) char darkened;
@property (weak) id target;
@property SEL action;
@property double paletteScaleFactor;
@property char debugMode;

- (void)dealloc;
- (void).cxx_destruct;
- (id)_cuiOptionsForCurrentMaterial;
- (void)_updateMaterialForState;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseDown:(id)a0;
- (void)mouseDragged:(id)a0;
- (void)mouseUp:(id)a0;
- (void)setPressed:(char)a0;
- (void)updateLayer;
- (char)wantsLayer;

@end
