@class NSButton, _NSDrawingHandlerView;

@interface NSPopoverColorWellVisualProvider : NSColorWellAppearanceBasedVisualProvider {
    NSButton *_bezelRenderingButton;
    _NSDrawingHandlerView *_colorRenderer;
    unsigned char _renderUsingSubviews : 1;
}

@property BOOL rendersUsingSubviews;
@property (getter=isEmptyColor) BOOL emptyColor;
@property BOOL noSelection;
@property (readonly) struct CGSize { double x0; double x1; } renderingButtonIntrinsicContentSize;
@property (readonly) struct NSEdgeInsets { double x0; double x1; double x2; double x3; } renderingButtonAlignmentRectInsets;
@property (copy) id /* block */ afterRenderer;

+ (void)drawEmptyColorDiagonalLineInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 lineWidth:(double)a1;
+ (void)drawEmptyColorSwatchInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 enabled:(BOOL)a1;
+ (void)drawNoColorSwatchInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 enabled:(BOOL)a1 active:(BOOL)a2;

- (void)setControlSize:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)popoverWillShow;
- (void)setControlView:(id)a0;
- (id)_bezelRenderingButton;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })_colorSwatchEdgeInsets;
- (void)_drawBorderInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_drawColor:(BOOL)a0;
- (BOOL)drawColor;
- (struct CGSize { double x0; double x1; })minimumDrawingSize;
- (void)popoverWillClose;
- (void)setNeedsDisplay:(BOOL)a0;

@end
