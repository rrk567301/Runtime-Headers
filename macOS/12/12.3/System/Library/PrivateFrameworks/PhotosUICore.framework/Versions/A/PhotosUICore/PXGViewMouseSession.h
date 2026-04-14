@class UXView, NSTimer, NSScrollView, NSView, PXGView, PXSectionedSelectionManager, PXSectionedDataSource, PXMutableIndexPathSet, PXIndexPathSet, NSEvent;
@protocol PXGViewMouseSessionDelegate;

@interface PXGViewMouseSession : NSObject {
    long long _sessionNumber;
    NSEvent *_lastNonPeriodicEvent;
    NSEvent *_mouseDownEvent;
    struct CGPoint { double x; double y; } _mouseDownPointInGridView;
    NSTimer *_autoscrollTimer;
    NSView *_rubberbandView;
    PXIndexPathSet *_selectedIndexPathsAtStart;
    PXSectionedDataSource *_dataSourceAtStart;
    PXMutableIndexPathSet *_dragCandidateIndexPaths;
    struct PXSimpleIndexPath { long long dataSourceIdentifier; long long section; long long item; long long subitem; } _indexPathToDeselectOnMouseUpIfNoDrag;
    BOOL _unmodifiedMouseDownInAlreadySelectedItem;
    BOOL _dragSelectShouldModifyExistingSelection;
}

@property (readonly, nonatomic) NSScrollView *scrollView;
@property (readonly, nonatomic) UXView *documentView;
@property (readonly, nonatomic) BOOL allowsEmptySelection;
@property (readonly, nonatomic) BOOL allowsMultipleSelection;
@property (nonatomic) long long state;
@property (readonly, nonatomic) PXGView *gridView;
@property (readonly, nonatomic) PXSectionedSelectionManager *selectionManager;
@property (weak, nonatomic) id<PXGViewMouseSessionDelegate> delegate;
@property (nonatomic) BOOL allowsSelectionModification;
@property (nonatomic) BOOL allowsContinuousSelection;

- (id)init;
- (void).cxx_destruct;
- (BOOL)handleEvent:(id)a0;
- (BOOL)_performDragFromMouseDown:(id)a0;
- (void)autoscrollTimerFired:(id)a0;
- (BOOL)addIndexPathToDeselect:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (BOOL)addIndexPathToSelect:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (void)updateDragSelectionForEvent:(id)a0;
- (void)autoscrollAndDragSelectWithLastNonPeriodicEvent;
- (BOOL)extendRangeSelectionToIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (void)deselectAllNow;
- (id)_hitTestResultAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })_indexPathAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)_indexPathsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)canAddIndexPathToSelect:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (void)_addSelectedCursorIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0 selectionManager:(id)a1;
- (struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })_indexPathForEvent:(id)a0;
- (id)_hitTestResultForEvent:(id)a0;
- (void)removeRubberBandView;
- (id)initWithGridView:(id)a0 selectionManager:(id)a1;

@end
