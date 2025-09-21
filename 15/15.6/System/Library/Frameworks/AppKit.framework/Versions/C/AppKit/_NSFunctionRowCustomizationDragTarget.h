@class NSTrackingArea;
@protocol _NSFunctionRowCustomizationDragTargetDelegate;

@interface _NSFunctionRowCustomizationDragTarget : NSView {
    NSTrackingArea *_trackingArea;
}

@property id<_NSFunctionRowCustomizationDragTargetDelegate> delegate;
@property char dragInBounds;

- (void)draggingExited:(id)a0;
- (void)concludeDragOperation:(id)a0;
- (unsigned long long)draggingEntered:(id)a0;
- (unsigned long long)draggingUpdated:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (char)performDragOperation:(id)a0;
- (char)prepareForDragOperation:(id)a0;
- (void)updateTrackingAreas;

@end
