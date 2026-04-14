@class NSButton, NSWindow;

@interface NSLocalWindowSharingWindow : NSWindow {
    NSWindow *_hostWindow;
    NSButton *_trackedCloseButton;
}

@property (weak) NSWindow *hostWindow;

- (void).cxx_destruct;
- (void)windowDidResize:(id)a0;
- (void)closeButtonDidChangeGeometry:(id)a0;
- (void)_trackCloseButton:(id)a0;
- (void)_updateParentWindow;
- (void)_syncToWindowControls;
- (void)hostFullScreenStatusDidChange;
- (void)hostButtonRevealAmountDidChange;

@end
