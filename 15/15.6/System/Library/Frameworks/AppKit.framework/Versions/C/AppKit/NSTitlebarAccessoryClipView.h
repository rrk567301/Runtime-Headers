@class NSTitlebarAccessoryViewController;

@interface NSTitlebarAccessoryClipView : NSClipView

@property (weak) NSTitlebarAccessoryViewController *accessoryViewController;

+ (id)_findFirstKeyViewInDirection:(unsigned long long)a0 forKeyLoopGroupingView:(id)a1;

- (void).cxx_destruct;
- (char)_isKeyLoopGroup;
- (char)_shouldFixupChildAutoresizingMaskOnResizeSubviewsOverride;
- (void)_windowChangedKeyState;
- (void)resizeSubviewsWithOldSize:(struct CGSize { double x0; double x1; })a0;

@end
