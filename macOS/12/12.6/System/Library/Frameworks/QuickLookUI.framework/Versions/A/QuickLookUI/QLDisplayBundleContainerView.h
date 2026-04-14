@class QLDisplayBundleViewController;

@interface QLDisplayBundleContainerView : NSView

@property (weak) QLDisplayBundleViewController *delegate;

- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (void)viewWillStartLiveResize;
- (void)viewDidEndLiveResize;
- (void)setQuickLookFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
