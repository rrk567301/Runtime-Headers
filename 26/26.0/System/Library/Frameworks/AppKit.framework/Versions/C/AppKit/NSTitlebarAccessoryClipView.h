@class NSTitlebarAccessoryViewController;

@interface NSTitlebarAccessoryClipView : NSClipView

@property (weak) NSTitlebarAccessoryViewController *accessoryViewController;

+ (id)_findFirstKeyViewInDirection:(unsigned long long)a0 forKeyLoopGroupingView:(id)a1;

- (void)resizeSubviewsWithOldSize:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (BOOL)_isKeyLoopGroup;
- (long long)_scrollPocketElementStyle;
- (BOOL)_shouldFixupChildAutoresizingMaskOnResizeSubviewsOverride;
- (void)_windowChangedKeyState;

@end
