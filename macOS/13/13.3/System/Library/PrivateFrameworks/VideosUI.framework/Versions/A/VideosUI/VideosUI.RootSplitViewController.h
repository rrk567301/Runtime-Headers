@class NSViewController, VUINSNavigationController;

@interface VideosUI.RootSplitViewController : NSSplitViewController <VUITVAppRootViewController, VUIRootSplitViewController> {
    void /* unknown type, empty encoding */ appContext;
    void /* unknown type, empty encoding */ splitViewResorationIdentifier;
    void /* unknown type, empty encoding */ $__lazy_storage_$_sidebarViewController;
    void /* unknown type, empty encoding */ $__lazy_storage_$_detailsContainerViewController;
    void /* unknown type, empty encoding */ selectionCancellable;
    void /* unknown type, empty encoding */ detailsViewControllerCache;
}

@property (nonatomic, readonly) VUINSNavigationController *currentNavigationController;
@property (nonatomic, readonly) NSViewController *currentViewController;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (double)containerWidth;
- (void)handleDeepLinkURL:(id)a0 forBarItemIdentifier:(id)a1;
- (void)updateWithBarItems:(id)a0 setSelectedIndexFromDefaults:(BOOL)a1 appContext:(id)a2;

@end
