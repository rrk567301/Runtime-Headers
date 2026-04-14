@class NSArray, NSIndexSet, NSLayoutGuide, NSObject, FI_TKeyValueObserverGlue;

@interface FI_TViewBasedBrowserTableColumnViewController : FI_TBrowserTableColumnViewController {
    NSLayoutGuide *_masterLayoutGuide;
    struct TKeyValueObserver { FI_TKeyValueObserverGlue *fObserver; NSObject *fObjectToObserve; NSArray *fArrayOfObjectsToObserve; NSIndexSet *fIndexesOfObjectsToObserve; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fKeyPathToObserve; } _masterLayoutGuideFrameDidChangeObserver;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)willBeginResizingColumn:(long long)a0;
- (void)didEndResizingColumn:(long long)a0;
- (BOOL)shouldAddColumnForSelection;
- (void)loadView;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (id)tableView:(id)a0 rowViewForRow:(long long)a1;
- (BOOL)tableView:(id)a0 shouldSelectRow:(long long)a1;
- (BOOL)tableView:(id)a0 isGroupRow:(long long)a1;
- (void)viewDidLoad;
- (id)nibBundle;

@end
