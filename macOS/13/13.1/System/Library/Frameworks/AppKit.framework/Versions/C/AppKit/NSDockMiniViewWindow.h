@interface NSDockMiniViewWindow : NSWindow {
    BOOL shown;
}

- (BOOL)canBecomeKeyWindow;
- (void)makeKeyAndOrderFront:(id)a0;
- (BOOL)_isNonactivatingPanel;
- (void)_setVisible:(BOOL)a0;
- (BOOL)_allowsOrdering;
- (BOOL)_windowManagerAware;
- (void)_setShown:(BOOL)a0;

@end
