@interface MKCalloutShadowView : NSView

@property (nonatomic) long long anchorPosition;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateLayer;
- (void)viewDidChangeEffectiveAppearance;
- (void)viewDidChangeBackingProperties;
- (id)calloutLayer;

@end
