@class NSView, NSColor;

@interface VUISeparatorView : VUIBaseView

@property (retain, nonatomic) NSView *line;
@property (retain, nonatomic) NSColor *color;
@property (retain, nonatomic) NSColor *darkColor;
@property (nonatomic) double lineHeight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)lineColor;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)_updateLineColor;
- (void)initializeVUISeparatorView;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;

@end
