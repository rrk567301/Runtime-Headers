@class NSMutableArray, NSString, NSImage, VisualTabPickerRootView, CustomViewSnapshotCache, NSArray, NSOperationQueue;
@protocol VisualTabPickerDelegate;

@interface VisualTabPickerViewController : NSViewController <VisualTabPickerSearchFieldDelegate, VisualTabPickerCloudTabsViewDataSource, VisualTabPickerCloudTabsViewDelegate, VisualTabPickerGridViewDataSource, VisualTabPickerGridViewDelegate> {
    VisualTabPickerRootView *_rootView;
    NSArray *_orderedTabViewItems;
    NSArray *_filteredTabViewItems;
    NSOperationQueue *_filterQueue;
    NSString *_searchText;
    NSMutableArray *_allCloudTabDevices;
    NSArray *_filteredCloudTabDevices;
    BOOL _isPostponingClosingVisualTabPickerWhenNewTabIsInserted;
    BOOL _didReportPerformSearch;
    BOOL _isClosingBySelectingOrCreatingTab;
}

@property (nonatomic) BOOL tabsShouldBeClosable;
@property (readonly, nonatomic) CustomViewSnapshotCache *snapshotCache;
@property (weak, nonatomic) id<VisualTabPickerDelegate> delegate;
@property (readonly, nonatomic, getter=isAddingNewTab) BOOL addingNewTab;
@property (retain, nonatomic) NSImage *tabBarSnapshot;
@property (retain, nonatomic) NSImage *sidebarSnapshot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)springAnimationForVisualTabPicker;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)loadView;
- (BOOL)control:(id)a0 textView:(id)a1 doCommandBySelector:(SEL)a2;
- (double)tabPickerAnimationDuration;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentLayoutRect;
- (BOOL)isSearching;
- (void)visualTabPickerSearchFieldTextDidChange:(id)a0;
- (void)_updateTabsShouldBeClosable;
- (void)_resetFilterState;
- (void)closeVisualTabPicker;
- (BOOL)_doesSearchResultsContainSelectedTab;
- (void)removeVisualTabPickerFromViewHierarchy;
- (void)reloadTabViewItem:(id)a0;
- (void)focusSearchField;
- (void)_performAsynchronousFilter;
- (id)_tabFilterInfoForOrderedTabs;
- (id)orderedTabItemsInVisualTabPickerGridView:(id)a0;
- (id)selectedTabItemInVisualTabPickerGridView:(id)a0;
- (double)tilesHeightToWidthRatioInVisualTabPickerGridView:(id)a0;
- (void)createNewTabForVisualTabPickerGridView:(id)a0;
- (void)visualTabPickerGridView:(id)a0 selectTab:(id)a1;
- (void)visualTabPickerGridViewCloseTabViewItem:(id)a0;
- (void)startEntryAnimation;
- (BOOL)entryOrExitAnimationInProgress;
- (BOOL)shouldDisplayRealWebViews;
- (unsigned long long)indexOfSelectedTab;
- (void)postponeClosingVisualTabPickerWhenNewTabIsInserted;
- (void)_reloadLocalTabData;
- (void)willInsertBrowserTabViewItem;
- (void)didInsertBrowserTabViewItem:(id)a0;
- (void)browserTabViewItemsDidChange;
- (id)initWithSnapshotCache:(id)a0;
- (void)audioPlayingStateOrMutedStateDidChangeForBrowserTabViewItem:(id)a0;
- (void)_syncedCloudTabDevicesDidChange:(id)a0;
- (id)visualTabPickerCloudTabsView:(id)a0 nameOfDeviceAtIndex:(unsigned long long)a1;
- (unsigned long long)visualTabPickerCloudTabsView:(id)a0 numberOfTabsForDeviceAtIndex:(unsigned long long)a1;
- (id)visualTabPickerCloudTabsView:(id)a0 titleOfTabAtIndex:(unsigned long long)a1 forDeviceAtIndex:(unsigned long long)a2;
- (void)visualTabPickerCloudTabsView:(id)a0 didSelectCloudTabAtIndex:(unsigned long long)a1 forDeviceAtIndex:(unsigned long long)a2;
- (void)visualTabPickerCloudTabsView:(id)a0 didRemoveCloudTabAtIndex:(unsigned long long)a1 forDeviceAtIndex:(unsigned long long)a2;
- (void)visualTabPickerCloudTabsView:(id)a0 didRemoveAllCloudTabsForDeviceAtIndex:(unsigned long long)a1;
- (unsigned long long)numberOfDevicesForVisualTabPickerCloudTabsView:(id)a0;
- (BOOL)closeRequestSupportedForVisualTabPickerCloudTabsView:(id)a0 forDeviceAtIndex:(unsigned long long)a1;
- (BOOL)visualTabPickerGridView:(id)a0 canCloseTab:(id)a1;
- (void)visualTabPickerGridViewToggleMuteButtonInTab:(id)a0;
- (void)_reloadCloudTabData;
- (void)_browserTabViewItemDidChangeIcon:(id)a0;
- (void)_reloadGridViewWhileFiltering;
- (void)_reloadCloudTabsView;
- (id)_displayedCloudTabDevices;
- (id)_cloudDeviceAtIndex:(unsigned long long)a0;
- (id)_cloudTabAtIndex:(unsigned long long)a0 forDeviceAtIndex:(unsigned long long)a1;
- (id)_tabItemForRepresentedCloudTabObject:(id)a0;
- (id)visualTabPickerCloudTabsView:(id)a0 iconForDeviceAtIndex:(unsigned long long)a1;
- (id)_dictionaryForCloudDeviceAtIndex:(unsigned long long)a0;

@end
