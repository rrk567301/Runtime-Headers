@interface OKDocumentViewController : OKDocumentViewControllerProxy

- (void)viewDidLoad;
- (void)viewWillAppear:(char)a0;
- (void)viewDidAppear:(char)a0;
- (void)viewDidDisappear:(char)a0;
- (void)viewWillDisappear:(char)a0;
- (void)viewWillLayoutSubviews;
- (void)setEditing:(char)a0 animated:(char)a1;
- (void)viewUpdateLayer;
- (void)_viewBeginGestureNotification:(id)a0;
- (void)_viewEndGestureNotification:(id)a0;
- (void)_viewFrameDidChangeNotification:(id)a0;
- (void)_windowDidChangeBackingPropertiesNotification:(id)a0;
- (void)_windowDidEndLiveResizeNotification:(id)a0;
- (void)_windowDidEnterFullScreenNotification:(id)a0;
- (void)_windowDidExitFullScreenNotification:(id)a0;
- (void)_windowWillStartLiveResizeNotification:(id)a0;
- (void)cleanCouchLabelHUDView;
- (void)setupCouchLabelHUDView:(id /* block */)a0;

@end
