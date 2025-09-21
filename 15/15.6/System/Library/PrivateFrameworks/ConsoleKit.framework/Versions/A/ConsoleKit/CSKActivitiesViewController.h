@class CSKActivitiesOutlineView, NSString;
@protocol CSKActivitiesViewControllerDataSource;

@interface CSKActivitiesViewController : CSKTableViewController <NSOutlineViewDelegate, NSOutlineViewDataSource>

@property (readonly, nonatomic) CSKActivitiesOutlineView *outlineView;
@property (weak, nonatomic) id<CSKActivitiesViewControllerDataSource> dataSource;
@property (nonatomic) char allowsActivitiesInsertion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)outlineView:(id)a0 child:(long long)a1 ofItem:(id)a2;
- (char)outlineView:(id)a0 isItemExpandable:(id)a1;
- (long long)outlineView:(id)a0 numberOfChildrenOfItem:(id)a1;
- (id)outlineView:(id)a0 viewForTableColumn:(id)a1 item:(id)a2;
- (void)viewDidLoad;
- (id)entityAtIndex:(unsigned long long)a0;
- (void)_insertActivitiesAtIndexes:(id)a0 parentActivity:(id)a1;
- (void)_removeActivitiesAtIndexes:(id)a0 parentActivity:(id)a1;
- (void)collapseEntitiesAtIndexes:(id)a0;
- (id)defaultColumnLayout;
- (id)entitiesAtIndexes:(id)a0;
- (void)expandEntitiesAtIndexes:(id)a0;
- (void)insertActivitiesAtIndexes:(id)a0 childrenActivitiesAtIndexes:(id)a1;
- (void)insertActivitiesAtIndexes:(id)a0 parentActivity:(id)a1;
- (void)removeActivitiesAtIndexes:(id)a0 childrenActivitiesAtIndexes:(id)a1;
- (void)scrollToMostRecentRows;
- (char)supportsFind;

@end
