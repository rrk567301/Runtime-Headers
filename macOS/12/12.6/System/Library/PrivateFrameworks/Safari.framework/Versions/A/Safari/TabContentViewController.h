@class NSView, NSString, TabContentView, BrowserViewController, NSHashTable, ContinuousReadingListPageItem, ReaderContainerViewController, NSViewController, NSMutableSet, ContinuousReadingListViewController, BrowserWindowController;

@interface TabContentViewController : BrowserContainerViewController <TabContentViewDelegate, ReaderInstallationTarget, ThumbnailSnapshotProviding> {
    BrowserViewController *_browserViewController;
    ReaderContainerViewController *_readerContainerViewController;
    NSHashTable *_nativeContentViewControllersThatWereShownInWindow;
    id /* block */ _updateVisualTabPickerSnapshotBlock;
    NSMutableSet *_browserViewControllersForBackgroundLoads;
}

@property (retain) TabContentView *view;
@property (readonly, nonatomic) BrowserWindowController *browserWindowController;
@property (readonly, nonatomic) BrowserViewController *currentBrowserViewController;
@property (readonly, nonatomic) TabContentView *tabContentView;
@property (readonly, nonatomic) NSView *dockedInspectorView;
@property (nonatomic) double topContentInset;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } contentVisibleBounds;
@property (readonly, nonatomic) BOOL shouldDisableTitlebarBlurringForCurrentContentView;
@property (readonly, nonatomic) NSViewController *currentViewController;
@property (readonly, nonatomic) NSView *currentDialogOrContentView;
@property (nonatomic) BOOL didFireCloseEvent;
@property (readonly, nonatomic) BOOL isActiveWebViewMagnified;
@property (readonly, nonatomic, getter=isInContinuousMode) BOOL inContinuousMode;
@property (readonly, nonatomic) ContinuousReadingListViewController *continuousReadingListViewController;
@property (readonly, nonatomic) ContinuousReadingListPageItem *currentContinuousReadingListPageItem;
@property (readonly, nonatomic) BOOL continuousPageViewIsHandlingPageTransitionOrLoadingPageItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSView *thumbnailContentView;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } thumbnailContentViewVisibleBounds;
@property (readonly, nonatomic) long long thumbnailContentViewType;
@property (readonly, nonatomic) BOOL thumbnailContentViewWasShownInWindow;

- (void)dealloc;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewDidAppear;
- (id)browserViewController;
- (id)_browserTabViewItem;
- (id)initWithBrowserViewController:(id)a0;
- (void)removeViewControllerForBackgroundLoad:(id)a0;
- (void)addViewControllerForBackgroundLoad:(id)a0;
- (void)replaceBrowserViewControllerWithBrowserViewController:(id)a0;
- (void)installViewController:(id)a0;
- (void)installViewController:(id)a0 preserveWebInspector:(int)a1;
- (void)loadContinuousReadingListPageItem:(id)a0;
- (void)willClose;
- (BOOL)handleScrollWheelEvent:(id)a0;
- (void)beginDeferringWebViewInWindowChanges;
- (void)endDeferringWebViewInWindowChangesSync;
- (void)endDeferringWebViewInWindowChanges;
- (void)continuousBrowserPageViewController:(id)a0 didTransitionToBrowserViewController:(id)a1;
- (void)installReaderContainerViewController:(id)a0;
- (void)uninstallReaderContainerViewController:(id)a0 closedByUser:(BOOL)a1;
- (id)tabDialogHostingView;
- (id)webContentModalViewInTabContentView:(id)a0;
- (void)_installCurrentViewControllerView;
- (void)_markCurrentViewControllerAsShownInWindowIfNeeded;
- (void)_uninstallViewController:(id)a0 preserveWebInspector:(int)a1;
- (BOOL)_shouldHideBrowserViewForCurrentViewController;
- (void)_scheduleThumbnailSnapshot;
- (void)_exitContinuousMode;
- (void)_replaceBrowserViewControllerWithBrowserViewController:(id)a0 inBrowserDocument:(id)a1;
- (void)_setCurrentBrowserViewController:(id)a0 inBrowserDocument:(id)a1;

@end
