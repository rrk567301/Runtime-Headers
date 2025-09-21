@interface NSMenuBarReplicantWindow : NSWindow <NSMenuWindow>

+ (char)_hiddenInWindowList;
+ (Class)frameViewClassForStyleMask:(unsigned long long)a0;

- (char)_canMiniaturize;
- (id)_displayChangedSoAdjustWindows:(char)a0;
- (char)canHide;
- (char)_excludeFromOrderingGroup;
- (char)_ignoreForFullScreenTransition;
- (char)_ignoredForScripting;
- (char)_isNonactivatingPanel;
- (void)_orderForwardWithEvent:(id)a0;
- (void)_setWindowTag;
- (char)_shouldReallyOrderWindow;
- (char)_showToolTip;
- (char)_wantsAsyncContext;
- (char)_windowManagerAware;
- (char)accessibilityIsIgnored;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })constrainFrameRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toScreen:(id)a1;
- (struct CGPoint { double x0; double x1; })convertPointFromScreen:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })convertPointToScreen:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRectFromScreen:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRectToScreen:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)hasDynamicDepthLimit;
- (id)initWithView:(id)a0;
- (char)isExcludedFromWindowsMenu;
- (void)recalculateKeyViewLoop;
- (void)setAutorecalculatesContentBorderThickness:(char)a0 forEdge:(unsigned long long)a1;
- (void)setLevel:(long long)a0;
- (id)standardWindowButton:(unsigned long long)a0;
- (char)worksWhenModal;

@end
