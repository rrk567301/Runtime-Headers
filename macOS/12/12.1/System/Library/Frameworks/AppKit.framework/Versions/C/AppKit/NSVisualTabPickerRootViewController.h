@class NSString, NSImage, NSVisualTabPickerRootView, NSArray, NSOperationQueue;
@protocol NSVisualTabPickerDelegate;

@interface NSVisualTabPickerRootViewController : NSViewController <NSVisualTabPickerSearchFieldDelegate, NSVisualTabPickerGridViewDataSource, NSVisualTabPickerGridViewDelegate> {
    NSVisualTabPickerRootView *_rootView;
    NSArray *_orderedTabViewItems;
    NSArray *_filteredTabViewItems;
    NSOperationQueue *_filterQueue;
    NSString *_searchText;
    BOOL _isPostponingClosingVisualTabPickerWhenNewTabIsInserted;
    BOOL _didReportPerformSearch;
    BOOL _isClosingBySelectingOrCreatingTab;
}

@property (nonatomic) BOOL tabsShouldBeClosable;
@property BOOL isClosing;
@property (weak, nonatomic) id<NSVisualTabPickerDelegate> delegate;
@property (nonatomic) BOOL shouldStackThumbnails;
@property (readonly, nonatomic, getter=isAddingNewTab) BOOL addingNewTab;
@property (retain, nonatomic) NSImage *tabBarSnapshot;
@property (retain, nonatomic) NSImage *sidebarSnapshot;
@property (nonatomic) BOOL shouldShowNewTabButton;
@property (nonatomic) BOOL shouldHighlightTiles;
@property (nonatomic) BOOL shouldShowCloseButtons;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)springAnimationForVisualTabPicker;

- (void)dealloc;
- (void).cxx_destruct;
- (void)loadView;
- (BOOL)control:(id)a0 textView:(id)a1 doCommandBySelector:(SEL)a2;
- (void)closeVisualTabPickerAnimated:(BOOL)a0;
- (double)tabPickerAnimationDuration;
- (id)_tabPickerThumbnailViews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentLayoutRect;
- (BOOL)isSearching;
- (void)visualTabPickerSearchFieldTextDidChange:(id)a0;
- (void)_updateTabsShouldBeClosable;
- (id)_makeTabPickerBackdropVisualEffectViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_resetFilterState;
- (void)_reloadGridView;
- (void)closeVisualTabPicker;
- (BOOL)_doesSearchResultsContainSelectedTab;
- (void)_cancelSearchAndCloseAfterDelay;
- (void)removeVisualTabPickerFromViewHierarchy;
- (void)_resetSearch;
- (void)selectTabBarItem:(id)a0;
- (void)selectedTabDidChange;
- (void)focusSearchField;
- (void)_performAsynchronousFilter;
- (void)_updateSearchTextWithValue:(id)a0;
- (id)_filterObjectsInArray:(id)a0 usingBlock:(id /* block */)a1;
- (id)_tabFilterInfoForOrderedTabs;
- (id)orderedTabItemsInVisualTabPickerGridView:(id)a0;
- (id)selectedTabItemInVisualTabPickerGridView:(id)a0;
- (id)visualTabPickerGridView:(id)a0 thumbnailViewForTabItem:(id)a1;
- (id)visualTabPickerGridView:(id)a0 imageForTabItem:(id)a1;
- (double)tilesHeightToWidthRatioInVisualTabPickerGridView:(id)a0;
- (BOOL)visualTabPickerGridView:(id)a0 highlightStateForTabItem:(id)a1;
- (BOOL)canCloseTabsInVisualTabPickerGridView:(id)a0;
- (void)createNewTabForVisualTabPickerGridView:(id)a0;
- (void)visualTabPickerGridView:(id)a0 selectTab:(id)a1;
- (void)visualTabPickerGridView:(id)a0 highlightTab:(id)a1;
- (void)visualTabPickerGridViewCloseTabViewItem:(id)a0;
- (void)startEntryAnimation;
- (BOOL)entryOrExitAnimationInProgress;
- (BOOL)shouldDisplayRealWebViews;
- (BOOL)shouldStackMultipleThumbnailsInOneContainerIfPossible;
- (unsigned long long)indexOfSelectedTab;
- (void)postponeClosingVisualTabPickerWhenNewTabIsInserted;
- (void)willInsertTabBarItem;
- (void)didInsertTabBarItem:(id)a0;
- (void)reloadTabBarItem:(id)a0;
- (void)_reloadLocalTabData;
- (void)tabPickerItemsDidChange;

@end
