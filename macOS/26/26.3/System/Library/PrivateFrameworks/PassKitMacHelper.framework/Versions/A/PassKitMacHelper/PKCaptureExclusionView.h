@interface PKCaptureExclusionView : NSView

- (void)viewWillMoveToWindow:(id)a0;
- (void)layout;
- (void)viewDidMoveToWindow;
- (void)_updateWindowCaptureExcludeShape;
- (void)windowDidChangeID:(id)a0;

@end
