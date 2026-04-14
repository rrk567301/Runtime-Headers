@interface MKCalloutShadowView : NSView

@property (nonatomic) long long anchorPosition;

- (void)updateLayer;
- (void)viewDidChangeBackingProperties;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidChangeEffectiveAppearance;
- (id)calloutLayer;

@end
