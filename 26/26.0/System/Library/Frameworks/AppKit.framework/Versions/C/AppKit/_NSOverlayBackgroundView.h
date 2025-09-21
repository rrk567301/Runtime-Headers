@class CALayer, CABackdropLayer;

@interface _NSOverlayBackgroundView : NSView {
    CALayer *_materialLayer;
    CALayer *_tintLayer;
    CABackdropLayer *_backdropLayer;
    CALayer *_backgroundLayer;
    double _defaultBlurRadius;
    double _defaultSaturationMultiplier;
    struct CGColor { } *_defaultBackgroundColor;
    BOOL _isActive;
    BOOL _hasAcceleration;
    BOOL _hasAccelerationCached;
    BOOL _pressed;
}

@property (retain) id backgroundImageRef;
@property double backgroundScaleFactor;
@property (setter=setActive:) BOOL isActive;
@property (setter=setDarkened:) BOOL darkened;
@property (weak) id target;
@property SEL action;
@property double paletteScaleFactor;
@property BOOL debugMode;

- (void)mouseDown:(id)a0;
- (void)mouseUp:(id)a0;
- (void)updateLayer;
- (void)mouseDragged:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)setPressed:(BOOL)a0;
- (void).cxx_destruct;
- (id)_cuiOptionsForCurrentMaterial;
- (void)_updateMaterialForState;
- (BOOL)wantsLayer;

@end
