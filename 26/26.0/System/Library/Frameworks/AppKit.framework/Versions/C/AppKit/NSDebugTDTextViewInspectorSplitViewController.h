@class NSDebugTDInspectorResultsViewController, NSDebugTDViewHierarchyListViewController, NSDebugTDViewHierarchyItem;

@interface NSDebugTDTextViewInspectorSplitViewController : NSSplitViewController

@property (retain, nonatomic) NSDebugTDViewHierarchyListViewController *viewHierarchyViewController;
@property (retain, nonatomic) NSDebugTDInspectorResultsViewController *inspectorResultsViewController;
@property (retain, nonatomic) NSDebugTDViewHierarchyItem *selectedItem;

- (void)viewDidLoad;
- (void).cxx_destruct;

@end
