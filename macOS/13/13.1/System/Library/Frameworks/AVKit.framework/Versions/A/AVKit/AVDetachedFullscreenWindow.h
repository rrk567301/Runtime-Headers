@interface AVDetachedFullscreenWindow : NSWindow

- (void)performClose:(id)a0;
- (BOOL)canBecomeKeyWindow;
- (BOOL)canBecomeMainWindow;
- (void)exitFullScreenMode:(id)a0;
- (void)avkit_exitFullscreenModeImmediately:(id)a0;
- (void)avkit_performCloseImmediately:(id)a0;
- (id)_avkitWindowController;

@end
