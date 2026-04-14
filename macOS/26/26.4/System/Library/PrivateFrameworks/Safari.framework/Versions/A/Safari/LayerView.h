@class NSColor;

@interface LayerView : NSView

@property (nonatomic) double cornerRadius;
@property (nonatomic) double borderWidth;
@property (retain, nonatomic) NSColor *borderColor;

- (void).cxx_destruct;
- (void)viewDidChangeEffectiveAppearance;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)_updateBorderAppearance;

@end
