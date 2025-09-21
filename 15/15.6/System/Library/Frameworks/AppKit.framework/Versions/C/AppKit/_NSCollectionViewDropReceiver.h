@class NSString, NSCollectionView, NSView;

@interface _NSCollectionViewDropReceiver : NSObject <NSDraggingDestination> {
    NSCollectionView *collectionView;
    long long sessionNumber;
    unsigned long long _currentDragOperation;
    long long _currentDropOperation;
    NSView *_dropTargetGapIndicatorView;
    NSView *_dropTargetSectionFrameView;
    char _sourceIsThisCollectionView;
    char _acceptedDrop;
    char _exitedDrag;
    struct CGPoint { double x; double y; } _lastDraggingLocation;
    unsigned long long _lastDraggingSourceOperationMask;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dropReceiverWithCollectionView:(id)a0;

- (void)dealloc;
- (void)draggingExited:(id)a0;
- (void)_setWholeSectionDropTargetRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_dropIndexPathForDraggingInfo:(id)a0 dropTargetRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 proposedDropOperation:(long long *)a2 allowDropOnOnly:(char)a3;
- (char)_hoverAreaIsSameAsLast:(id)a0;
- (void)_setDropTargetGapRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 newDropTargetIndexPath:(id)a1;
- (void)_updateDragAndDropStateWithDraggingInfo:(id)a0 newDragOperation:(unsigned long long)a1 newDropTargetIndexPath:(id)a2 newDropTargetRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 newDropOperation:(long long)a4;
- (unsigned long long)_validateDragWithInfo:(id)a0 dropTargetIndexPath:(id *)a1 dropTargetRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2 dropOperation:(long long *)a3 allowDropOnOnly:(char)a4;
- (void)concludeDragOperation:(id)a0;
- (void)draggingEnded:(id)a0;
- (unsigned long long)draggingEntered:(id)a0;
- (unsigned long long)draggingUpdated:(id)a0;
- (id)initWithCollectionView:(id)a0;
- (char)performDragOperation:(id)a0;
- (char)prepareForDragOperation:(id)a0;
- (id)setHighlightState:(long long)a0 forItemsAtIndexPaths:(id)a1;
- (void)updateDraggingItemsForDrag:(id)a0;

@end
