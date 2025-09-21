@class NSRemoteTitlebarRenamingSession;

@interface NSLocalTitlebarRenamingWindow : NSLocalWindowWrappingRemoteWindow {
    NSRemoteTitlebarRenamingSession *_session;
}

- (void).cxx_destruct;
- (void)resignKeyWindow;
- (char)_sharesParentKeyState;
- (id)accessibilityFocusedUIElement;
- (char)accessibilityIsIgnored;
- (char)canBecomeKeyWindow;
- (void)_setSession:(id)a0;

@end
