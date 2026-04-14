@class NSObject, NSArray, NSIndexSet, FI_TKeyValueObserverGlue, FI_TTableViewShrinkToFitController, FI_TNotificationCenterObserverGlue;
@protocol TTagColumnTableViewDelegate;

@interface FI_TTagColumnTableView : FI_TTableView {
    FI_TTableViewShrinkToFitController *_stfController;
    struct TNotificationCenterObserver { NSObject *fObservedObject; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fNotificationName; FI_TNotificationCenterObserverGlue *fFunctorGlue; BOOL fIsDistributedObserving; struct function<NSNotificationCenter *()> { struct __value_func<NSNotificationCenter *()> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } fCenterProvider; } _clipViewBoundsDidChangeObserver;
    struct TKeyValueObserver { struct TNSRef<FI_TKeyValueObserverGlue, void> { FI_TKeyValueObserverGlue *fRef; } fObserver; NSObject *fObjectToObserve; NSArray *fArrayOfObjectsToObserve; struct TNSRef<NSIndexSet, void> { NSIndexSet *fRef; } fIndexesOfObjectsToObserve; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fKeyPathToObserve; } _delegateTornDownObserver;
}

@property (weak) NSObject<TTagColumnTableViewDelegate> *delegate;

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)keyDown:(id)a0;
- (id)menuForEvent:(id)a0;
- (id)preparedCellAtColumn:(long long)a0 row:(long long)a1;
- (BOOL)canDragRowsWithIndexes:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)aboutToTearDown;
- (void)awakeCommon;

@end
