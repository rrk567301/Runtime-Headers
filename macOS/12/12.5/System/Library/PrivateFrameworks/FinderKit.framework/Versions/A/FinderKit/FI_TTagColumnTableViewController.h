@class FI_TKeyValueObserverGlue, NSString, FI_TContainerLayoutManager, NSValue, NSArray, NSObject, NSIndexSet;
@protocol TTagColumnTableViewControllerDelegate;

@interface FI_TTagColumnTableViewController : FI_TTableViewController <NSMenuDelegate, NSMenuItemValidation, TMarkTornDown> {
    struct TNSWeakPtr<NSObject<TTagColumnTableViewControllerDelegate>, void> { NSValue *fWeakObject; } _weakDelegate;
    struct TFENode { struct OpaqueNodeRef *fNodeRef; } _clickedNodeForMenuEvent;
    struct TKeyValueObserver { struct TNSRef<FI_TKeyValueObserverGlue, void> { FI_TKeyValueObserverGlue *fRef; } fObserver; NSObject *fObjectToObserve; NSArray *fArrayOfObjectsToObserve; struct TNSRef<NSIndexSet, void> { NSIndexSet *fRef; } fIndexesOfObjectsToObserve; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fKeyPathToObserve; } _selectedObjectsObserver;
    struct TKeyValueObserver { struct TNSRef<FI_TKeyValueObserverGlue, void> { FI_TKeyValueObserverGlue *fRef; } fObserver; NSObject *fObjectToObserve; NSArray *fArrayOfObjectsToObserve; struct TNSRef<NSIndexSet, void> { NSIndexSet *fRef; } fIndexesOfObjectsToObserve; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fKeyPathToObserve; } _contentInsetsDidChangeObserver;
    FI_TContainerLayoutManager *_containerLayoutManager;
}

@property (retain, nonatomic) FI_TContainerLayoutManager *containerLayoutManager;
@property (nonatomic) struct TFENode { struct OpaqueNodeRef *fNodeRef; } editedNode;
@property (nonatomic) struct TFENode { struct OpaqueNodeRef *fNodeRef; } selectedNode;
@property (weak, nonatomic) NSObject<TTagColumnTableViewControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (getter=isTornDown) BOOL tornDown;

- (void)dealloc;
- (id)delegate;
- (void)setDelegate:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)validateMenuItem:(id)a0;
- (void)menuNeedsUpdate:(id)a0;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (void)tableView:(id)a0 didAddRowView:(id)a1 forRow:(long long)a2;
- (void)tableView:(id)a0 didRemoveRowView:(id)a1 forRow:(long long)a2;
- (double)tableView:(id)a0 heightOfRow:(long long)a1;
- (id)nibName;
- (void)aboutToTearDown;
- (void)configureView;
- (Class)dataSourceClass;
- (void)aboutToShowContextMenu:(id)a0;
- (unsigned long long)indexOfTagNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (id)tagColumnDataSource;
- (id)initWithDelegate:(id)a0 containerLayoutManager:(id)a1;
- (void)updateSubviewContentInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)selectedObjectsChanged;
- (void)selectTag:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (void)selectTagWithName:(const void *)a0;
- (long long)rowForNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;

@end
