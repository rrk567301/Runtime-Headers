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
    char unmodifiedMouseDownInAlreadySelectedItem;
    char dragSelectShouldModifyExistingSelection;
    char itemsBeingDraggedAreHidden;
    char trackingModally;
    NSTimer *autoscrollTimer;
    NSView *rubberbandView;
}

@property (readonly) NSSet *indexPathsBeingDragged;

+ (id)mouseSessionWithCollectionView:(id)a0;

- (void)dealloc;
- (void)setState:(long long)a0;
- (void)trackWithEvent:(id)a0;
- (char)_performDragFromMouseDown:(id)a0;
- (char)addIndexPathToDeselect:(id)a0;
- (char)addIndexPathToSelect:(id)a0;
- (char)addIndexPathsToDeselect:(id)a0;
- (char)addIndexPathsToSelect:(id)a0;
- (void)autoscrollAndDragSelectWithLastNonPeriodicEvent;
- (void)autoscrollTimerFired:(id)a0;
- (void)clearAutoscrollTimer;
- (void)clearHighlightingBeforeCompletingDrag;
- (void)commitSelectionAndClearHighlighting;
- (void)deselectAllNow;
- (void)detachFromCollectionView;
- (void)draggingEnded:(id)a0;
- (char)extendRangeSelectionToEntireSection:(unsigned long long)a0;
- (char)extendRangeSelectionToIndexPath:(id)a0;
- (char)handleEvent:(id)a0;
- (long long)highlightStateForIndexPath:(id)a0;
- (id)initWithCollectionView:(id)a0;
- (id)nextIndexPathAfter:(id)a0;
- (id)previousIndexPathBefore:(id)a0;
- (char)replaceSelectedIndexPathsWith:(id)a0;
- (id)setHighlightState:(long long)a0 forItemsAtIndexPaths:(id)a1;
- (void)updateDragSelectionForEvent:(id)a0;

@end
