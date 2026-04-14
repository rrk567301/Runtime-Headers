@class FI_TKeyValueObserverGlue, NSIndexSet, FI_TRunAfterHelper, NSArray, NSObjectController, NSObject;

@interface FI_IBaseTableViewController : FI_TViewController {
    NSObjectController *_dataSource;
    NSIndexSet *_columnIndexesToResizeToFitContents;
    struct TNSWeakPtr<FI_TRunAfterHelper> { FI_TRunAfterHelper *fWeakObject; } _updateColumnWidthsToFitContentsToken;
    struct TKeyValueObserver { FI_TKeyValueObserverGlue *fObserver; NSObject *fObjectToObserve; NSArray *fArrayOfObjectsToObserve; NSIndexSet *fIndexesOfObjectsToObserve; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fKeyPathToObserve; } _arrangedObjectsObserver;
}

@property (retain, nonatomic) NSIndexSet *columnIndexesToResizeToFitContents;

- (void)addColumn:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)setView:(id)a0;
- (void)dealloc;
- (void)configureView;
- (id)_dataSource;
- (Class)dataSourceClass;
- (id)selectionIndexesForProposedSelection:(id)a0;
- (void)updateColumnWidthsToFitContents;
- (void)arrangedObjectsChanged;

@end
