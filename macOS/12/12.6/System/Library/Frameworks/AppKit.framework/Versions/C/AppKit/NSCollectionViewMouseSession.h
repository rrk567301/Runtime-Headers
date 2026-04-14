@class NSView, NSSet, NSEvent, NSMutableSet, NSTimer, NSIndexPath, NSCollectionView;

@interface NSCollectionViewMouseSession : NSResponder {
    long long sessionNumber;
    NSCollectionView *collectionView;
    long long state;
    NSEvent *mouseDownEvent;
    struct CGPoint { double x; double y; } mouseDownPointInCollectionView;
    NSEvent *lastNonPeriodicEvent;
    NSSet *selectedIndexPathsAtStart;
    NSMutableSet *indexPathsToSelect;
    NSMutableSet *indexPathsToDeselect;
    NSIndexPath *indexPathToDeselectOnMouseUpIfNoDrag;
    NSMutableSet *dragCandidateIndexPaths;
    BOOL unmodifiedMouseDownInAlreadySelectedItem;
    BOOL dragSelectShouldModifyExistingSelection;
    BOOL itemsBeingDraggedAreHidden;
    BOOL trackingModally;
    NSTimer *autoscrollTimer;
    NSView *rubberbandView;
}

@property (readonly) NSSet *indexPathsBeingDragged;

+ (id)mouseSessionWithCollectionView:(id)a0;

- (void)dealloc;
- (void)setState:(long long)a0;
- (void)draggingEnded:(id)a0;
- (BOOL)handleEvent:(id)a0;
- (BOOL)_performDragFromMouseDown:(id)a0;
- (id)initWithCollectionView:(id)a0;
- (void)clearAutoscrollTimer;
- (void)autoscrollTimerFired:(id)a0;
- (BOOL)addIndexPathsToSelect:(id)a0;
- (id)setHighlightState:(long long)a0 forItemsAtIndexPaths:(id)a1;
- (id)nextIndexPathAfter:(id)a0;
- (id)previousIndexPathBefore:(id)a0;
- (BOOL)addIndexPathsToDeselect:(id)a0;
- (BOOL)addIndexPathToDeselect:(id)a0;
- (BOOL)addIndexPathToSelect:(id)a0;
- (void)commitSelectionAndClearHighlighting;
- (void)updateDragSelectionForEvent:(id)a0;
- (void)autoscrollAndDragSelectWithLastNonPeriodicEvent;
- (BOOL)extendRangeSelectionToEntireSection:(unsigned long long)a0;
- (BOOL)replaceSelectedIndexPathsWith:(id)a0;
- (BOOL)extendRangeSelectionToIndexPath:(id)a0;
- (void)deselectAllNow;
- (void)detachFromCollectionView;
- (long long)highlightStateForIndexPath:(id)a0;
- (void)clearHighlightingBeforeCompletingDrag;
- (void)trackWithEvent:(id)a0;

@end
