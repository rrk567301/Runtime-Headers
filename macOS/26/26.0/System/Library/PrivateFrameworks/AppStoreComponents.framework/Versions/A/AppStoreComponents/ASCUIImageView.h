@class NSColor, JUTraitCollection;

@interface ASCUIImageView : NSImageView

@property (nonatomic) double alpha;
@property (copy, nonatomic) NSColor *backgroundColor;
@property (copy, nonatomic) NSColor *tintColor;
@property (nonatomic) unsigned long long contentMode;
@property (nonatomic) BOOL insetsLayoutMarginsFromSafeArea;
@property (nonatomic) BOOL preservesSuperviewLayoutMargins;
@property (nonatomic) long long semanticContentAttribute;
@property (readonly, nonatomic) JUTraitCollection *traitCollection;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithImage:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)didInit;
- (id)initWithCoder:(id)a0;
- (void)viewDidChangeEffectiveAppearance;
- (void).cxx_destruct;
- (void)setFrameOrigin:(struct CGPoint { double x0; double x1; })a0;
- (void)_updateLayerGeometryFromView;
- (void)setFrameCenterRotation:(double)a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)fixLayerAnchorPoint;

@end
