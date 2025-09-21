@interface VideosUI.DocumentViewController : VideosUI.VUIViewController <VideosUI.VUIDeeplinkURLHandlingInterceptor, VUINSNavigationControllerDelegate> {
    void /* unknown type, empty encoding */ viewWillAppearAfterTabSwitch;
    void /* unknown type, empty encoding */ reportImpressionsInViewWillDisappear;
    void /* unknown type, empty encoding */ templateViewController;
    void /* unknown type, empty encoding */ hasViewAppeared;
    void /* unknown type, empty encoding */ deferLoadingTemplateController;
    void /* unknown type, empty encoding */ alwaysShowTemplateWithAnimation;
    void /* unknown type, empty encoding */ pendingDeeplinkURL;
    void /* unknown type, empty encoding */ documentDelegate;
    void /* unknown type, empty encoding */ ignoreDidMoveToNilParent;
    void /* unknown type, empty encoding */ rebaseIdentifier;
    void /* unknown type, empty encoding */ isInTabBarMode;
    void /* unknown type, empty encoding */ loadingViewManager;
    void /* unknown type, empty encoding */ documentDidSetHandler;
    void /* unknown type, empty encoding */ document;
    void /* unknown type, empty encoding */ isTransitioning;
    void /* unknown type, empty encoding */ navBarOpacity;
    void /* unknown type, empty encoding */ navBarTintColor;
    void /* unknown type, empty encoding */ navBarPrefersLargeTitles;
    void /* unknown type, empty encoding */ navBarTitleView;
    void /* unknown type, empty encoding */ navBarTitle;
    void /* unknown type, empty encoding */ navBarCachedWidth;
    void /* unknown type, empty encoding */ needsConfigurationWhenMovesToParent;
}

@property (nonatomic, readonly) char vuiShouldAutomaticallyForwardAppearanceMethods;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)didEnterBackground:(id)a0;
- (void)willEnterForeground:(id)a0;
- (void)willTerminate:(id)a0;
- (char)handleDeeplink:(id)a0;
- (void)vui_viewDidLoad;
- (char)deeplinkURLWasHandled:(id)a0;
- (void)scrollToTopWithAnimated:(char)a0 needsFocusUpdate:(char)a1;
- (void)vui_didMoveToParentViewController:(id)a0;
- (void)vui_viewDidAppear:(char)a0;
- (void)vui_viewDidDisappear:(char)a0;
- (void)vui_viewDidLayoutSubviews;
- (void)vui_viewWillAppear:(char)a0;
- (void)vui_viewWillDisappear:(char)a0;

@end
