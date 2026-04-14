@class NSViewController, NSArray, VUINSNavigationController;

@interface VideosUI.TabBarViewHostingController : VUIBaseViewController <VUITVAppRootViewController, VUITabBarProtocol> {
    void /* unknown type, empty encoding */ previousSelectedIndex;
    void /* unknown type, empty encoding */ tabBarInfo;
    void /* unknown type, empty encoding */ cancellable;
    void /* unknown type, empty encoding */ $__lazy_storage_$_hostingViewController;
}

@property (nonatomic, readonly) VUINSNavigationController *currentNavigationController;
@property (nonatomic, readonly) NSViewController *currentViewController;
@property (nonatomic, readonly) NSArray *tabBarItems;
@property (nonatomic) unsigned long long selectedIndex;

- (void)updateWithTabBarItems:(id)a0 setSelectedIndexFromDefaults:(BOOL)a1 appContext:(id)a2;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0;
- (void)vui_viewDidLayoutSubviews;

@end
