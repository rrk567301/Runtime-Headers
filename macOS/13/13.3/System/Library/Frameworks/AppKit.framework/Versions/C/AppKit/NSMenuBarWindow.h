@interface NSMenuBarWindow : NSWindow

- (BOOL)_canMiniaturize;
- (id)_displayChangedSoAdjustWindows:(BOOL)a0;
- (BOOL)canHide;
- (BOOL)_ignoreForFullScreenTransition;
- (BOOL)_isNonactivatingPanel;
- (void)_orderForwardWithEvent:(id)a0;
- (double)_r2LConversionDelta;
- (void)_setWindowTag;
- (BOOL)_showToolTip;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })constrainFrameRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toScreen:(id)a1;
- (struct CGPoint { double x0; double x1; })convertPointFromScreen:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })convertPointToScreen:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRectFromScreen:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRectToScreen:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithView:(id)a0;
- (BOOL)worksWhenModal;

@end
