@class FI_TKeyValueObserverGlue, NSIndexSet, NSArray, NSValue, NSObjectController, NSObject;

@interface FI_IBaseTableViewController : FI_TViewController {
    NSObjectController *_dataSource;
    struct TNSRef<NSIndexSet, void> { NSIndexSet *fRef; } _columnIndexesToResizeToFitContents;
    struct TNSWeakPtr<FI_TRunAfterHelper, void> { NSValue *fWeakObject; } _updateColumnWidthsToFitContentsToken;
    struct TKeyValueObserver { struct TNSRef<FI_TKeyValueObserverGlue, void> { FI_TKeyValueObserverGlue *fRef; } fObserver; NSObject *fObjectToObserve; NSArray *fArrayOfObjectsToObserve; struct TNSRef<NSIndexSet, void> { NSIndexSet *fRef; } fIndexesOfObjectsToObserve; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fKeyPathToObserve; } _arrangedObjectsObserver;
}

@property (retain, nonatomic) NSIndexSet *columnIndexesToResizeToFitContents;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)setView:(id)a0;
- (id)_dataSource;
- (void)configureView;
- (Class)dataSourceClass;
- (void)addColumn:(id)a0;
- (id)selectionIndexesForProposedSelection:(id)a0;
- (void)updateColumnWidthsToFitContents;
- (id)columnIndexesToResizeToFitContents;
- (void)setColumnIndexesToResizeToFitContents:(id)a0;
- (void)arrangedObjectsChanged;

@end
