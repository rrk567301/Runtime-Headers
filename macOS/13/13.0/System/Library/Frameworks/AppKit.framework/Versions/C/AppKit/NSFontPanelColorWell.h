@class NSColor, _NSDrawingHandlerView, NSButton, NSLayoutConstraint;

@interface NSFontPanelColorWell : NSColorWell {
    NSButton *_button;
    _NSDrawingHandlerView *_colorRenderer;
    NSLayoutConstraint *_widthConstraintForColorRenderer;
    NSColor *_foregroundColor;
}

+ (id)_bezelRenderingButton;

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void)setColor:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (void)setNeedsDisplay:(BOOL)a0;
- (void)_windowChangedKeyState;
- (BOOL)_hasExtra10_11BordersInToolbars;
- (void)_commonInit;
- (BOOL)drawColor;
- (void)_drawInteriorBorderInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_drawBorderInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_ownsColorPanelExclusively;
- (id)_bezelRenderingButton;
- (BOOL)_drawColor:(BOOL)a0;
- (void)setBezelImage:(id)a0;
- (void)setForegroundColor:(id)a0;

@end
