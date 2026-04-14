@class NSDebugTDViewHierarchyItem, NSString, NSDebugTDInspectorResultsData, NSDebugTDInspectorResultsView, NSTimer;

@interface NSDebugTDInspectorResultsViewController : NSViewController <NSTableViewDelegate, NSTableViewDataSource> {
    NSString *_liveToggleOnTitle;
    NSString *_liveToggleOffTitle;
    NSTimer *_scrollingDebouncingTimer;
}

@property (retain, nonatomic) NSDebugTDInspectorResultsView *inspectorView;
@property (retain, nonatomic) NSDebugTDInspectorResultsData *resultsData;
@property (retain, nonatomic) NSDebugTDViewHierarchyItem *selectedItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reloadData;
- (void)viewDidLoad;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (void)boundsChanged:(id)a0;
- (BOOL)isMakingLiveChanges;
- (long long)numberOfRowsInTableView:(id)a0;
- (void)registerForDataChangeNotifications;
- (void)reloadScrollingData;
- (void)reloadSelectionData;
- (void)reloadTextData;
- (double)tableView:(id)a0 heightOfRow:(long long)a1;
- (id)tableView:(id)a0 objectValueForTableColumn:(id)a1 row:(long long)a2;
- (id)tableView:(id)a0 rowViewForRow:(long long)a1;
- (BOOL)tableView:(id)a0 shouldSelectRow:(long long)a1;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (void)toggleButtonClicked:(id)a0;
- (void)turnLiveToggleOff;
- (void)turnLiveToggleOn;

@end
