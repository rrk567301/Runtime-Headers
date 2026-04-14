@class AEDRadialGradientLayer;

@interface AEDRadialShieldView : NSView {
    AEDRadialGradientLayer *_radialGradientLayer;
}

- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
