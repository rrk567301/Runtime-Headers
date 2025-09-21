@class NSView;

@interface VUICollectionViewFeaturedView : VUIBaseView

@property (retain, nonatomic) NSView *imageView;
@property (retain, nonatomic) NSView *gradientView;
@property (retain, nonatomic) NSView *overlayView;
@property (nonatomic) double preferredGradientHeight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;

@end
