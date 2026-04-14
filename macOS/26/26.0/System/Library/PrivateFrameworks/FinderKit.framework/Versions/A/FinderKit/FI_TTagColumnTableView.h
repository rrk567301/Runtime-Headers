@class NSObject, NSArray, NSIndexSet, FI_TKeyValueObserverGlue, FI_TTableViewShrinkToFitController, FI_TNotificationCenterObserverGlue;
@protocol TTagColumnTableViewDelegate;

@interface FI_TTagColumnTableView : FI_TTableView {
    FI_TTableViewShrinkToFitController *_stfController;
    struct TNotificationCenterObserver { NSObject *fObservedObject; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fNotificationName; FI_TNotificationCenterObserverGlue *fFunctorGlue; BOOL fIsDistributedObserving; struct function<NSNotificationCenter *()> { struct __value_func<NSNotificationCenter *()> { union type { unsigned char __data[24]; } __buf_; void *__f_; } __f_; } fCenterProvider; } _clipViewBoundsDidChangeObserver;
    struct TKeyValueObserver { FI_TKeyValueObserverGlue *fObserver; NSObject *fObjectToObserve; NSArray *fArrayOfObjectsToObserve; NSIndexSet *fIndexesOfObjectsToObserve; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fKeyPathToObserve; } _delegateTornDownObserver;
}

@property (weak) NSObject<TTagColumnTableViewDelegate> *delegate;

- (void)keyDown:(id)a0;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (id)menuForEvent:(id)a0;
- (void).cxx_destruct;
- (BOOL)canDragRowsWithIndexes:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1;
- (id)preparedCellAtColumn:(long long)a0 row:(long long)a1;
- (void)aboutToTearDown;
- (void)awakeCommon;

@end
