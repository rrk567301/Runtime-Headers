@class NSStatusBar, NSMenu;

@interface NSStatusBarButtonCell : NSButtonCell {
    NSStatusBar *_fStatusBar;
    NSMenu *_fStatusMenu;
    BOOL _fDoubleClick;
    SEL _fDoubleAction;
    unsigned char _looksDisabled : 1;
    unsigned char _actsOnRightMouseDown : 1;
    unsigned char _actsOnRightMouseUp : 1;
    unsigned int _reservedFlags : 29;
    BOOL _appOverrodeHighlightsBy;
}

@property BOOL looksDisabled;
@property struct NSEdgeInsets { double top; double left; double bottom; double right; } selectionInset;

+ (void)popupStatusBarMenu:(id)a0 ofBar:(id)a1 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 ofView:(id)a3 withEvent:(id)a4;
+ (id)_trackNavigationLoopOnMenu:(id)a0 view:(id)a1;
+ (void)_endTrackingNavigationLoopOnMenu:(id)a0 withToken:(id)a1 view:(id)a2;

- (void)dealloc;
- (id)init;
- (void)setAttributedTitle:(id)a0;
- (void)setImage:(id)a0;
- (void)setTitle:(id)a0;
- (void)setImagePosition:(unsigned long long)a0;
- (BOOL)acceptsFirstResponder;
- (BOOL)_sendActionFrom:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFont:(id)a0;
- (void)performClick:(id)a0;
- (void)drawWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (SEL)doubleAction;
- (void)setDoubleAction:(SEL)a0;
- (void)setAlternateImage:(id)a0;
- (void)setHighlightsBy:(unsigned long long)a0;
- (id)_effectiveSymbolConfiguration;
- (id)_interiorBackgroundFillColor;
- (BOOL)_disabledForDrawingContent;
- (long long)_stateForDrawing;
- (BOOL)trackMouse:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 ofView:(id)a2 untilMouseUp:(BOOL)a3;
- (BOOL)startTrackingAt:(struct CGPoint { double x0; double x1; })a0 inView:(id)a1;
- (unsigned long long)sendActionOnMask;
- (void)stopTracking:(struct CGPoint { double x0; double x1; })a0 at:(struct CGPoint { double x0; double x1; })a1 inView:(id)a2 mouseIsUp:(BOOL)a3;
- (long long)sendActionOn:(unsigned long long)a0;
- (void)touchBeganAt:(struct CGPoint { double x0; double x1; })a0 inView:(id)a1;
- (id)_statusItem;
- (void)setStatusBar:(id)a0;
- (id)statusMenu;
- (void)setStatusMenu:(id)a0;
- (void)_updateHighlightsBy;
- (id)statusBar;
- (void)dismiss;

@end
