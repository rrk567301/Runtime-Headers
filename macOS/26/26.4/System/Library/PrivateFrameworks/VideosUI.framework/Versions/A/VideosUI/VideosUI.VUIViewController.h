@interface VideosUI.VUIViewController : NSViewController {
    void /* unknown type, empty encoding */ navigationBarTitleOpacity;
    void /* unknown type, empty encoding */ lastTitleVisibility;
}

- (void)viewDidAppear;
- (void)updateViewConstraints;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewDidLayout;
- (void)viewWillDisappear;
- (id)initWithCoder:(id)a0;
- (void)viewDidDisappear;
- (void)viewWillAppear;
- (void)viewWillLayout;
- (void)updateNavigationTitleVisibility;

@end
