@class FI_TSearchSliceController, FI_TContainerLayoutManager, NSMutableArray, NSSplitViewItemAccessoryViewController, FI_TPathBarController, FI_TBrowserSplitViewController;

@interface FI_TBrowserViewContainerController : FI_TViewController {
    NSSplitViewItemAccessoryViewController *_bannerViewController;
    NSMutableArray *_layoutConstraints;
    struct vector<TNotificationCenterObserver, std::allocator<TNotificationCenterObserver>> { struct TNotificationCenterObserver *__begin_; struct TNotificationCenterObserver *__end_; struct TNotificationCenterObserver *__cap_; } _notificationCenterObservers;
}

@property (retain, nonatomic) FI_TContainerLayoutManager *containerLayoutManager;
@property (retain, nonatomic) FI_TPathBarController *ephemeralPathBarController;
@property (nonatomic) BOOL ephemeralPathBarIsInHideAnimation;
@property (readonly, nonatomic) BOOL bannerViewIsVisible;
@property (readonly, nonatomic) FI_TBrowserSplitViewController *browserSplitViewController;
@property (readonly, nonatomic) FI_TSearchSliceController *searchSliceController;
@property (retain, nonatomic) FI_TPathBarController *pathBarController;
@property (readonly, nonatomic) BOOL isPathBarVisible;
@property (readonly, nonatomic) BOOL isEphemeralPathBarVisible;

+ (id)keyPathsForValuesAffectingIsPathBarVisible;

- (id).cxx_construct;
- (void)initCommon;
- (void).cxx_destruct;
- (void)aboutToTearDown;
- (void)configureView;
- (id)bannerView;
- (void)setPathBarTarget:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0 selectedNodes:(const void *)a1;
- (id)searchSliceView;
- (void)activateLayoutGuideRelatedConstraintsIfNeeded;
- (id)browserSplitView;
- (id)browserSplitViewWrapper;
- (void)configureBannerView:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0 isInColumnView:(BOOL)a1 isBackupBrowser:(BOOL)a2 icqMessage:(id)a3 isLayoutForced:(BOOL)a4;
- (void)configureBrowserSplitViewWithBrowserViewController:(id)a0;
- (BOOL)configureEphemeralPathBar:(BOOL)a0 ephemeralDisplayController:(id)a1 containerDelegate:(id)a2;
- (void)configureSearchSliceView:(BOOL)a0 showSliceContainer:(BOOL)a1 showSearchStringSlice:(BOOL)a2 searchFilterUTIs:(id)a3 toolbarSearchField:(id)a4 browserContainerController:(id)a5;
- (id)initWithContentView:(id)a0 containerLayoutManager:(id)a1;
- (BOOL)isSearchSliceViewVisible;
- (void)tearDownAccessoryViews;
- (id)verticalConstraintForPathBar:(id)a0;

@end
