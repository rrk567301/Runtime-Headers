@class NSViewController, VUINSNavigationController;

@interface VideosUI.RootSplitViewController : NSSplitViewController <VUIRootSplitViewController, VUITVAppNavigationControllerObserver, VUITVAppRootViewController> {
    void /* unknown type, empty encoding */ pageDataDict;
    void /* unknown type, empty encoding */ impressionsTracker;
    void /* unknown type, empty encoding */ shouldTrackImpressions;
    void /* unknown type, empty encoding */ rootControllerConfig;
    void /* unknown type, empty encoding */ tabItemsUpdater;
    void /* unknown type, empty encoding */ mode;
    void /* unknown type, empty encoding */ $__lazy_storage_$_navFilterToolbar;
    void /* unknown type, empty encoding */ $__lazy_storage_$_sideBarController;
    void /* unknown type, empty encoding */ remoteSideBarSections;
    void /* unknown type, empty encoding */ memoryPressureNotificationSource;
    void /* unknown type, empty encoding */ controllerMap;
    void /* unknown type, empty encoding */ stackExpirationDates;
    void /* unknown type, empty encoding */ stackExpirationWorkItems;
    void /* unknown type, empty encoding */ tvTitle;
    void /* unknown type, empty encoding */ defaultSectionManager;
    void /* unknown type, empty encoding */ lastSelectedIdentifier;
    void /* unknown type, empty encoding */ hasHandledFirstSelectionFromLaunch;
    void /* unknown type, empty encoding */ selectedIndex;
    void /* unknown type, empty encoding */ previousIndex;
    void /* unknown type, empty encoding */ appContext;
    void /* unknown type, empty encoding */ $__lazy_storage_$_detailsContainerViewController;
    void /* unknown type, empty encoding */ selectionIndexInProgress;
    void /* unknown type, empty encoding */ selectionCancellable;
    void /* unknown type, empty encoding */ dataSourceCancellable;
    void /* unknown type, empty encoding */ activityButtonControler;
}

@property (nonatomic, readonly) VUINSNavigationController *currentNavigationController;
@property (nonatomic, readonly) NSViewController *currentViewController;
@property (nonatomic) void /* unknown type, empty encoding */ isShowingLibraryItem;

- (id)controllerForIdentifier:(id)a0;
- (double)containerWidth;
- (BOOL)controllerExistsForIdentifier:(id)a0;
- (void)focusOnSearchField;
- (BOOL)isTabbarMode;
- (void)numberOfChildControllersDidChangeFor:(id)a0 from:(long long)a1 to:(long long)a2 animated:(BOOL)a3;
- (void)setSelectedIndexForIdentifier:(id)a0 withDeeplinkURL:(id)a1;
- (void)updateWithBarItems:(id)a0 setSelectedIdentifierFromDefaults:(BOOL)a1 appContext:(id)a2;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)supplementalTargetForAction:(SEL)a0 sender:(id)a1;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)accountStoreDidChange:(id)a0;
- (void)didEnterBackground:(id)a0;
- (void)willEnterForeground:(id)a0;

@end
