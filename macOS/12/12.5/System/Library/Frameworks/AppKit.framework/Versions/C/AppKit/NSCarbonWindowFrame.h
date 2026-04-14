@interface NSCarbonWindowFrame : NSView {
    unsigned long long _styleMask;
    BOOL resizeByIncrement;
    struct CGSize { double width; double height; } resizeParameter;
}

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentRectForFrameRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1;
+ (struct CGSize { double x0; double x1; })minFrameSizeForMinContentSize:(struct CGSize { double x0; double x1; })a0 styleMask:(unsigned long long)a1;

- (void)dealloc;
- (void)setTitle:(id)a0;
- (id)title;
- (BOOL)isOpaque;
- (unsigned long long)styleMask;
- (void)_setSheet:(BOOL)a0;
- (void)_setFrameNeedsDisplay:(BOOL)a0;
- (void)setStyleMask:(unsigned long long)a0;
- (void)_windowChangedKeyState;
- (void)setResizeIncrements:(struct CGSize { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentRectForFrameRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1;
- (struct CGSize { double x0; double x1; })minFrameSizeForMinContentSize:(struct CGSize { double x0; double x1; })a0 styleMask:(unsigned long long)a1;
- (void)_windowTitlePropertiesChanged:(id)a0;
- (void)_updateTitleProperties:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1 owner:(id)a2;
- (void)_updateButtonState;
- (BOOL)_canHaveToolbar;
- (BOOL)_toolbarIsInTransition;
- (BOOL)_toolbarIsShown;
- (BOOL)_toolbarIsHidden;
- (BOOL)_toolbarIsManagedByExternalWindow;
- (void)_showToolbarWithAnimation:(BOOL)a0;
- (void)_hideToolbarWithAnimation:(BOOL)a0;
- (double)_distanceFromToolbarBaseToTitlebar;
- (id)closeButton;
- (id)minimizeButton;
- (id)zoomButton;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })dragRectForFrameRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titlebarRect;
- (void)_setNonactivatingPanel:(BOOL)a0;
- (double)_sheetHeightAdjustment;
- (id)contentFill;
- (double)contentAlpha;
- (struct CGSize { double x0; double x1; })resizeIncrements;
- (void)setAspectRatio:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })aspectRatio;

@end
