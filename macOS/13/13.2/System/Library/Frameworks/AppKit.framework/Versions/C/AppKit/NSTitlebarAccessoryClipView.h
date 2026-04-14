@class NSTitlebarAccessoryViewController;

@interface NSTitlebarAccessoryClipView : NSClipView

@property (weak) NSTitlebarAccessoryViewController *accessoryViewController;

+ (id)_findFirstKeyViewInDirection:(unsigned long long)a0 forKeyLoopGroupingView:(id)a1;

- (void).cxx_destruct;
- (void)mouseDown:(id)a0;
- (BOOL)mouseDownCanMoveWindow;
- (void)_windowChangedKeyState;
- (void)resizeSubviewsWithOldSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)_isKeyLoopGroup;
- (BOOL)_shouldFixupChildAutoresizingMaskOnResizeSubviewsOverride;

@end
