@class NSRemoteTitlebarRenamingSession;

@interface NSLocalTitlebarRenamingWindow : NSLocalWindowWrappingRemoteWindow {
    NSRemoteTitlebarRenamingSession *_session;
}

- (void).cxx_destruct;
- (id)accessibilityFocusedUIElement;
- (BOOL)accessibilityIsIgnored;
- (BOOL)canBecomeKeyWindow;
- (void)resignKeyWindow;
- (BOOL)_sharesParentKeyState;
- (void)_setSession:(id)a0;

@end
