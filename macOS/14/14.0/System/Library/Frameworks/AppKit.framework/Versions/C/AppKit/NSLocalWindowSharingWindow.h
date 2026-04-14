@class NSButton, NSWindow;

@interface NSLocalWindowSharingWindow : NSWindow {
    NSWindow *_hostWindow;
    NSButton *_trackedCloseButton;
}

@property (weak) NSWindow *hostWindow;

- (void).cxx_destruct;
- (void)hostButtonRevealAmountDidChange;
- (BOOL)_ignoredForScripting;
- (void)_setIsSelectivelyShared:(BOOL)a0;
- (void)_setWindowTag;
- (void)_syncToWindowControls;
- (void)_trackCloseButton:(id)a0;
- (void)_updateParentWindow;
- (void)closeButtonDidChangeGeometry:(id)a0;
- (void)hostFullScreenStatusDidChange;
- (void)windowDidResize:(id)a0;

@end
