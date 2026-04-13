@class NSString, NSLayoutConstraint, CNGroupListView, ABGroupEntriesList;
@protocol ABGroupHelperFactory;

@interface CNGroupListController : NSObject <NSOutlineViewDataSource, NSOutlineViewDelegate> {
    unsigned long long _countOfGroupsViewed;
    BOOL _ignoreSelectionDidChange;
}

@property (retain, nonatomic) NSLayoutConstraint *groupListViewWidthConstraint;
@property (copy) NSString *selectedGroupEntryIdentifier;
@property (retain, nonatomic) CNGroupListView *groupListView;
@property (weak, nonatomic) ABGroupEntriesList *groupEntriesList;
@property (retain) id<ABGroupHelperFactory> helperFactory;
@property (readonly) unsigned long long countOfGroupsViewed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)registerForDraggedTypes:(id)a0;
- (double)outlineView:(id)a0 heightOfRowByItem:(id)a1;
- (long long)outlineView:(id)a0 numberOfChildrenOfItem:(id)a1;
- (id)outlineView:(id)a0 child:(long long)a1 ofItem:(id)a2;
- (BOOL)outlineView:(id)a0 isItemExpandable:(id)a1;
- (void)outlineViewSelectionDidChange:(id)a0;
- (BOOL)outlineView:(id)a0 shouldSelectItem:(id)a1;
- (id)outlineView:(id)a0 viewForTableColumn:(id)a1 item:(id)a2;
- (id)outlineView:(id)a0 rowViewForItem:(id)a1;
- (BOOL)outlineView:(id)a0 shouldShowOutlineCellForItem:(id)a1;
- (unsigned long long)outlineView:(id)a0 validateDrop:(id)a1 proposedItem:(id)a2 proposedChildIndex:(long long)a3;
- (BOOL)outlineView:(id)a0 acceptDrop:(id)a1 item:(id)a2 childIndex:(long long)a3;
- (void)setupListView;
- (BOOL)isValidRow:(long long)a0;
- (void)reloadAndRestoreSelection;
- (void)performInitialSelection;
- (BOOL)outlineViewNeedsIndentation:(id)a0;
- (void)groupEntriesDidChange:(id)a0;
- (long long)selectableRowForPreviouslySelectedRow:(long long)a0;
- (void)programaticallyChangeSelectionWithBlock:(id /* block */)a0;
- (void)selectGroupEntryWithIdentifier:(id)a0;
- (void)updateUIForCurrentSelection;
- (void)selectGroupEntry:(id)a0;
- (BOOL)canSelectEntryAtRow:(long long)a0;
- (id)childrenForEntry:(id)a0;
- (void)configureCellView:(id)a0 forEntry:(id)a1;
- (id)groupEntries;
- (void)updateSelectionAppearance;
- (BOOL)canDropOnEntry:(id)a0;
- (id)dropHelperWithDraggingInfo:(id)a0 droppedEntry:(id)a1 childIndex:(long long)a2;
- (id)selectedGroupEntry;
- (void)resetCountOfGroupsViewed;

@end
