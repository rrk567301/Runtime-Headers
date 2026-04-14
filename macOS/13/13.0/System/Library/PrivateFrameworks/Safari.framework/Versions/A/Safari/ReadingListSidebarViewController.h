@class SidebarScrollView, NSString, NSSearchField, ReadingListContentProvider, NSArray, SidebarPlaceholderViewController, ReadingListSegmentedControl;

@interface ReadingListSidebarViewController : ReadingListSidebarViewControllerBase <ReadingListTableViewControllerDelegate, SidebarScrollViewAccessibilityDelegate, CustomKeyViewLoop, ReadingListSegmentedControlDelegate, ReadingListSidebarViewDragAndDropDelegate, SidebarContentFiltering, SidebarSearchFieldViewDelegate> {
    SidebarPlaceholderViewController *_placeholderViewController;
    ReadingListSegmentedControl *_segmentedControl;
    SidebarScrollView *_scrollView;
    BOOL _shouldUpdatePlaceholderViewVisibilityAfterTableViewAnimation;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _sidebarBoundsUponInstallation;
    BOOL _shouldHideSaveForOfflineRowAction;
    BOOL _hasNetworkReachability;
}

@property (retain, nonatomic) ReadingListContentProvider *contentProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSSearchField *searchField;
@property (readonly, nonatomic) NSArray *allFilteringControls;

+ (BOOL)_userLikelyHasNetworkReachability;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)setWindowController:(id)a0;
- (void)loadView;
- (void)viewDidLoad;
- (id)_contentFilter;
- (id)sideBarScrollViewAccessibilityChildren:(id)a0;
- (id)safari_keyViews;
- (void)willBeInstalledBySidebarViewController:(id)a0;
- (void)_didReceiveNetworkChangeNotification:(id)a0;
- (void)sidebarSearchFieldViewSearchStringDidChange:(id)a0;
- (void)readingListSegmentedControlDidBecomeFirstResponder:(id)a0;
- (void)_thumbnailWasLoaded:(id)a0;
- (void)_readingListSaveArticlesOfflineAutomaticallyPreferenceDidChange:(id)a0;
- (void)clearAllItems:(id)a0;
- (void)selectCurrentlyLoadedReadingListItem;
- (void)readingListSegmentedControlSelectionDidChange:(id)a0;
- (void)tableViewController:(id)a0 receivedNavigationActionWithPolicy:(long long)a1 forItem:(id)a2;
- (id)tableViewController:(id)a0 menuForEvent:(id)a1 withExistingMenu:(id)a2 andItem:(id)a3;
- (void)tableViewController:(id)a0 didActivateItem:(id)a1;
- (id)tableViewController:(id)a0 accessibilityDescriptionForItem:(id)a1;
- (void)displayedItemsDidChange:(id)a0 isAnimating:(BOOL)a1;
- (void)tableViewController:(id)a0 animationsDidFinishForRows:(id)a1;
- (void)tableViewController:(id)a0 receivedRemoveActionForItem:(id)a1;
- (id)tableViewController:(id)a0 rowActionsForRow:(long long)a1 item:(id)a2 edge:(long long)a3 completionHandler:(id /* block */)a4;
- (BOOL)readingListSidebarView:(id)a0 performDragOperation:(id)a1;
- (unsigned long long)readingListSidebarView:(id)a0 draggingEntered:(id)a1;
- (void)_updateNetworkReachability;
- (void)_updateViewsForNetworkReachabilityChange;
- (void)updateCurrentBrowserURL;
- (BOOL)_shouldHideSaveOfflineControlsForReadingListItem:(id)a0;
- (BOOL)_shouldShowRemoveArchiveControlsForReadingListItem:(id)a0;
- (void)_toggleSaveOfflineForReadingListItem:(id)a0;
- (void)_removeReadingListItem:(id)a0;
- (void)_toggleReadStateOfReadingListItem:(id)a0;
- (id)_menuItemForRemovalOfReadingListItem:(id)a0;
- (void)_updatePlaceholderViewVisibility;
- (void)_updatePlaceholderDescriptionGivenUserIsUsingAutomaticArchiving:(BOOL)a0;
- (void)_presentClearAllDialog;
- (void)_loadReadingListItem:(id)a0 withPolicy:(long long)a1;
- (id)_readingListTableView;
- (void)_setUpAllUnreadSegmentedControl;
- (void)_updateSegmentedControlSelectionFromContentProvider;

@end
