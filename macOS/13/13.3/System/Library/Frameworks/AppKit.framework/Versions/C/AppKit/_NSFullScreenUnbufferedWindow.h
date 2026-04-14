@class NSColor;

@interface _NSFullScreenUnbufferedWindow : _NSBorderlessLayerTreeProjectionWindow {
    BOOL _useBlurredBackground;
}

@property (copy) NSColor *customColor;

- (void)setCustomColor:(id)a0;
- (id)_createContentViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 customColor:(id)a1;
- (BOOL)_ignoreForFullScreenTransition;
- (void)_setWindowTag;
- (BOOL)canEnterFullScreenMode;
- (id)customColor;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 screen:(id)a1 customColor:(id)a2 useBlurredBackground:(BOOL)a3;
- (void)invalidateRestorableState;

@end
