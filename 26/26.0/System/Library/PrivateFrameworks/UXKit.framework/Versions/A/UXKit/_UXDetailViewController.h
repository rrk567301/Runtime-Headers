@interface _UXDetailViewController : UXViewController {
    double _previousViewWidth;
}

- (id)transitionCoordinator;
- (void)viewWillLayout;
- (void)contentRepresentingViewControllerDidChange;
- (void)windowWillEnterFullScreen;
- (void)windowWillExitFullScreen;

@end
