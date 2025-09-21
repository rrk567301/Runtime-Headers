@interface NSCarbonWindowFrame : NSView {
    unsigned long long _styleMask;
    char resizeByIncrement;
    struct CGSize { double width; double height; } resizeParameter;
}

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentRectForFrameRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1;
+ (struct CGSize { double x0; double x1; })minFrameSizeForMinContentSize:(struct CGSize { double x0; double x1; })a0 styleMask:(unsigned long long)a1;

- (void)dealloc;
- (void)setTitle:(id)a0;
- (id)title;
- (char)_toolbarIsShown;
- (void)setAspectRatio:(struct CGSize { double x0; double x1; })a0;
- (char)_canHaveToolbar;
- (double)_distanceFromToolbarBaseToTitlebar;
- (void)_hideToolbarWithAnimation:(char)a0;
- (void)_setFrameNeedsDisplay:(char)a0;
- (void)_setNonactivatingPanel:(char)a0;
- (void)_setSheet:(char)a0;
- (double)_sheetHeightAdjustment;
- (void)_showToolbarWithAnimation:(char)a0;
- (char)_toolbarIsHidden;
- (char)_toolbarIsInTransition;
- (char)_toolbarIsManagedByExternalWindow;
- (void)_updateButtonState;
- (void)_updateTitleProperties:(id)a0;
- (void)_windowChangedKeyState;
- (void)_windowTitlePropertiesChanged:(id)a0;
- (struct CGSize { double x0; double x1; })aspectRatio;
- (id)closeButton;
- (double)contentAlpha;
- (id)contentFill;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentRectForFrameRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })dragRectForFrameRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1 owner:(id)a2;
- (char)isOpaque;
- (struct CGSize { double x0; double x1; })minFrameSizeForMinContentSize:(struct CGSize { double x0; double x1; })a0 styleMask:(unsigned long long)a1;
- (id)minimizeButton;
- (struct CGSize { double x0; double x1; })resizeIncrements;
- (void)setResizeIncrements:(struct CGSize { double x0; double x1; })a0;
- (void)setStyleMask:(unsigned long long)a0;
- (unsigned long long)styleMask;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titlebarRect;
- (id)zoomButton;

@end
