@interface NSDockMiniViewWindow : NSWindow {
    BOOL shown;
}

- (void)makeKeyAndOrderFront:(id)a0;
- (BOOL)canBecomeKeyWindow;
- (void)_setVisible:(BOOL)a0;
- (BOOL)_isNonactivatingPanel;
- (BOOL)_allowsOrdering;
- (void)_setShown:(BOOL)a0;

@end
