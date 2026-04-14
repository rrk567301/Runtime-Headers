@class NSDebugTDViewHierarchyListView, NSDebugTDViewHierarchyItem, NSDebugTDViewHierarchyOutlineTreeNode, NSMutableOrderedSet, NSString, NSMutableArray;

@interface NSDebugTDViewHierarchyListViewController : NSViewController <NSTableViewDelegate, NSTableViewDataSource, NSOutlineViewDelegate, NSOutlineViewDataSource>

@property (retain, nonatomic) NSDebugTDViewHierarchyListView *viewHierarchyListView;
@property (retain, nonatomic) NSDebugTDViewHierarchyOutlineTreeNode *viewHierarchyRootNode;
@property (retain, nonatomic) NSMutableOrderedSet *suggestedVHItems;
@property (retain, nonatomic) NSMutableArray *potentialVHItemsToSuggest;
@property (retain, nonatomic) NSDebugTDViewHierarchyItem *selectedItem;
@property (retain, nonatomic) NSDebugTDViewHierarchyOutlineTreeNode *inspectorRootNode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reloadData;
- (void)viewDidLoad;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (void)outlineViewSelectionIsChanging:(id)a0;
- (void)calculateSuggestedItems;
- (long long)numberOfRowsInTableView:(id)a0;
- (id)outlineView:(id)a0 child:(long long)a1 ofItem:(id)a2;
- (BOOL)outlineView:(id)a0 isItemExpandable:(id)a1;
- (long long)outlineView:(id)a0 numberOfChildrenOfItem:(id)a1;
- (id)outlineView:(id)a0 objectValueForTableColumn:(id)a1 byItem:(id)a2;
- (BOOL)outlineView:(id)a0 shouldSelectItem:(id)a1;
- (id)outlineView:(id)a0 viewForTableColumn:(id)a1 item:(id)a2;
- (void)refreshButtonClicked:(id)a0;
- (id)tableView:(id)a0 objectValueForTableColumn:(id)a1 row:(long long)a2;
- (id)tableView:(id)a0 rowViewForRow:(long long)a1;
- (BOOL)tableView:(id)a0 shouldSelectRow:(long long)a1;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (void)tableViewSelectionDidChange:(id)a0;
- (id)viewHierarchyTreeForAllWindows;
- (id)viewHierarchyTreeNodeForView:(id)a0;

@end
