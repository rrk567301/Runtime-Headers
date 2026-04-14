@class NSButton, _NSDrawingHandlerView, NSLayoutConstraint;

@interface NSFontPanelColorWell : NSColorWell {
    NSButton *_button;
    _NSDrawingHandlerView *_colorRenderer;
    NSLayoutConstraint *_widthConstraintForColorRenderer;
}

+ (id)_bezelRenderingButton;

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void)setNeedsDisplay:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (void)setColor:(id)a0;
- (void)_windowChangedKeyState;
- (BOOL)_hasExtra10_11BordersInToolbars;
- (void)_commonInit;
- (BOOL)drawColor;
- (void)_drawBorderInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_ownsColorPanelExclusively;
- (void)setBezelImage:(id)a0;
- (id)_bezelRenderingButton;
- (BOOL)_drawColor:(BOOL)a0;

@end
