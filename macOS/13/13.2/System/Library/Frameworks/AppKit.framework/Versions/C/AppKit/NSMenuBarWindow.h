@interface NSMenuBarWindow : NSWindow

- (id)initWithView:(id)a0;
- (BOOL)_canMiniaturize;
- (BOOL)_ignoreForFullScreenTransition;
- (void)_setWindowTag;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })constrainFrameRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toScreen:(id)a1;
- (BOOL)worksWhenModal;
- (BOOL)_isNonactivatingPanel;
- (BOOL)canHide;
- (BOOL)_showToolTip;
- (void)_orderForwardWithEvent:(id)a0;
- (id)_displayChangedSoAdjustWindows:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRectToScreen:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRectFromScreen:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGPoint { double x0; double x1; })convertPointToScreen:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })convertPointFromScreen:(struct CGPoint { double x0; double x1; })a0;
- (double)_r2LConversionDelta;

@end
