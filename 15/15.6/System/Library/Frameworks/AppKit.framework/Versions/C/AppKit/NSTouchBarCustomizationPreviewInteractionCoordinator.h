@class _NSTouchBarCustomizationDragRecord, NSView, NSMapTable, NSDate;
@protocol NSTouchBarCustomizationPreviewInteractionCoordinatorDelegate;

@interface NSTouchBarCustomizationPreviewInteractionCoordinator : NSObject {
    NSView *_referenceCoordinateSpace;
    id<NSTouchBarCustomizationPreviewInteractionCoordinatorDelegate> _delegate;
    NSMapTable *_dragRecords;
}

@property (copy) NSDate *interactionStartTime;
@property (readonly) _NSTouchBarCustomizationDragRecord *cursorDragRecord;

- (void)dealloc;
- (id)beginDragOfItem:(id)a0 anchorPoint:(struct CGPoint { double x0; double x1; })a1 dragType:(long long)a2 atPoint:(struct CGPoint { double x0; double x1; })a3 isInsertion:(char)a4;
- (void)cancelDragOfItem:(id)a0 isRemoval:(char)a1;
- (id)dragRecordForItem:(id)a0;
- (void)endDragOfItem:(id)a0 isRemoval:(char)a1;
- (id)initWithDelegate:(id)a0 referenceCoordinateSpace:(id)a1;
- (char)isItemBeingDragged:(id)a0;
- (void)updateDragOfItem:(id)a0 toPoint:(struct CGPoint { double x0; double x1; })a1;

@end
