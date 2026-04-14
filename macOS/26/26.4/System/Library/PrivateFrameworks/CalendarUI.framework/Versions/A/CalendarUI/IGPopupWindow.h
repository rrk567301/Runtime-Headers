@class NSView;

@interface IGPopupWindow : NSWindow {
    NSView *_controlView;
    BOOL _hasCloseBox;
}

+ (id)popupWindowWithView:(id)a0;

- (id)initWithView:(id)a0;
- (BOOL)hasShadow;
- (void).cxx_destruct;
- (BOOL)canBecomeKeyWindow;
- (void)setView:(id)a0;
- (double)animationResizeTime:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)hasCloseBox;
- (void)orderOut:(id)a0;
- (void)hideControlView;
- (void)setHasCloseBox:(BOOL)a0;
- (void)showControlView;

@end
