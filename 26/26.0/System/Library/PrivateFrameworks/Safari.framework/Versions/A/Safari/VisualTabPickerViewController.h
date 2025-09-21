@class NSString, NSArray, VisualTabPickerTransitionAnimator, NSOperationQueue, VisualTabPickerTransitionCoordinator, NSImage, CustomViewSnapshotCache, VisualTabPickerRootView;
@protocol VisualTabPickerDelegate;

@interface VisualTabPickerViewController : NSViewController <VisualTabPickerSearchFieldDelegate, VisualTabPickerTransitionAnimatorDelegate, VisualTabPickerTransitionCoordinatorDelegate, VisualTabPickerGridViewDataSource, VisualTabPickerGridViewDelegate> {
    VisualTabPickerRootView *_rootView;
    NSArray *_orderedTabViewItems;
    NSArray *_filteredTabViewItems;
    NSOperationQueue *_filterQueue;
    NSString *_searchText;
    BOOL _isPostponingClosingVisualTabPickerWhenNewTabIsInserted;
    BOOL _didReportPerformSearch;
    BOOL _isClosingBySelectingOrCreatingTab;
    VisualTabPickerTransitionAnimator *_transitionAnimator;
    VisualTabPickerTransitionCoordinator *_transitionCoordinator;
    double _transitionProgress;
    BOOL _didStartInteractiveTransition;
}

@property (nonatomic) BOOL tabsShouldBeClosable;
@property (readonly, nonatomic) CustomViewSnapshotCache *snapshotCache;
@property (weak, nonatomic) id<VisualTabPickerDelegate> delegate;
@property (readonly, nonatomic, getter=isAddingNewTab) BOOL addingNewTab;
@property (retain, nonatomic) NSImage *tabBarSnapshot;
@property (retain, nonatomic) NSImage *sidebarSnapshot;
@property (readonly, nonatomic, getter=isExitAnimationInProgress) BOOL exitAnimationInProgress;
@property (readonly, nonatomic) BOOL shouldAdjustForTopBar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)springAnimationForVisualTabPicker;

- (BOOL)control:(id)a0 textView:(id)a1 doCommandBySelector:(SEL)a2;
- (void)searchVisualTabPickerWithString:(id)a0;
- (void)loadView;
- (void)dealloc;
- (BOOL)isSearching;
- (id)init;
- (void)closeVisualTabPicker;
- (void).cxx_destruct;
- (BOOL)_doesSearchResultsContainSelectedTab;
- (void)_performAsynchronousFilter;
- (void)_reloadLocalTabData;
- (void)_resetFilterState;
- (id)_tabFilterInfoForOrderedTabs;
- (void)_updateTabsShouldBeClosable;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentLayoutRect;
- (void)createNewTabForVisualTabPickerGridView:(id)a0;
- (BOOL)entryOrExitAnimationInProgress;
- (void)focusSearchField;
- (unsigned long long)indexOfSelectedTab;
- (void)magnifyWithEvent:(id)a0;
- (id)orderedTabItemsInVisualTabPickerGridView:(id)a0;
- (void)postponeClosingVisualTabPickerWhenNewTabIsInserted;
- (void)reloadTabViewItem:(id)a0;
- (void)removeVisualTabPickerFromViewHierarchy;
- (id)selectedTabItemInVisualTabPickerGridView:(id)a0;
- (BOOL)shouldDisplayRealWebViews;
- (void)startEntryAnimation;
- (double)tabPickerAnimationDuration;
- (double)tilesHeightToWidthRatioInVisualTabPickerGridView:(id)a0;
- (void)visualTabPickerGridView:(id)a0 selectTab:(id)a1;
- (void)visualTabPickerGridViewCloseTabViewItem:(id)a0;
- (void)visualTabPickerSearchFieldTextDidChange:(id)a0;
- (void)_browserTabViewItemDidChangeIcon:(id)a0;
- (void)_didFinishExitAnimation;
- (void)_reloadGridViewWhileFiltering;
- (void)audioPlayingStateOrMutedStateDidChangeForBrowserTabViewItem:(id)a0;
- (void)beginTransitionWithEvent:(id)a0;
- (void)browserTabViewItemsDidChange;
- (void)didInsertBrowserTabViewItem:(id)a0;
- (id)initWithSnapshotCache:(id)a0;
- (void)prepareForEntryAnimation;
- (void)transitionAnimator:(id)a0 didReachFixedPoint:(float)a1 isStable:(BOOL)a2;
- (void)transitionCoordinator:(id)a0 didUpdateTransitionProgress:(double)a1;
- (void)transitionCoordinatorWillUpdateDestination:(id)a0;
- (void)updateTransitionWithEvent:(id)a0;
- (BOOL)visualTabPickerGridView:(id)a0 canCloseTab:(id)a1;
- (void)visualTabPickerGridViewToggleMuteButtonInTab:(id)a0;
- (void)willBeginTransitionInTransitionAnimator:(id)a0;
- (void)willInsertBrowserTabViewItem;

@end
