@class NSButton, NSWindow;

@interface NSLocalWindowSharingWindow : NSWindow {
    NSWindow *_hostWindow;
    NSButton *_trackedCloseButton;
    char _menuIsOpen;
}

@property (weak) NSWindow *hostWindow;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)hostButtonRevealAmountDidChange;
- (char)_ignoredForScripting;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_overrideDefeatingConstrainFrameRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toScreen:(id)a1 fullScreenConstrainToTile:(char)a2;
- (void)_setIsSelectivelyShared:(char)a0;
- (void)_setWantsChildConfinement:(char)a0;
- (void)_setWindowTag;
- (void)_syncToWindowControls;
- (void)_trackCloseButton:(id)a0;
- (void)_updateParentWindow;
- (void)closeButtonDidChangeGeometry:(id)a0;
- (void)closeButtonDidHideOrShow;
- (void)hostButtonDidChange;
- (void)hostFullScreenStatusDidChange;
- (char)mouseIsInside;
- (void)setMenuIsOpen:(char)a0;
- (void)windowDidResize:(id)a0;
- (void)windowTitlebarDidChangeAlphaValue;

@end
