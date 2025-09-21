@interface NSDockMiniViewWindow : NSWindow {
    char shown;
}

- (char)_allowsOrdering;
- (char)_isNonactivatingPanel;
- (void)_setShown:(char)a0;
- (void)_setVisible:(char)a0;
- (char)_windowManagerAware;
- (char)canBecomeKeyWindow;
- (void)makeKeyAndOrderFront:(id)a0;

@end
