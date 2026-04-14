@interface PKCaptureExclusionView : NSView

- (void)layout;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)a0;
- (void)windowDidChangeID:(id)a0;
- (void)_updateWindowCaptureExcludeShape;

@end
