@interface VideosUI.StackTemplateController : VideosUI.StackViewController {
    void /* unknown type, empty encoding */ supportsTabBarChildControllerBehaviours;
    void /* unknown type, empty encoding */ supportsTabBarChildContentInsets;
    void /* unknown type, empty encoding */ anchorIdToHighlight;
    void /* unknown type, empty encoding */ showcasePercentageObserver;
    void /* unknown type, empty encoding */ lastShowcasePercentage;
    void /* unknown type, empty encoding */ notificationCenter;
    void /* unknown type, empty encoding */ pagePerformanceProvider;
}

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)vui_viewDidLayoutSubviews;
- (void)vui_viewDidLoad;
- (void)vui_viewWillDisappear:(BOOL)a0;
- (void)vui_viewWillAppear:(BOOL)a0;
- (void)vui_viewDidAppear:(BOOL)a0;
- (void)vui_didMoveToParentViewController:(id)a0;
- (void)vui_viewDidDisappear:(BOOL)a0;

@end
