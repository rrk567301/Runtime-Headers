@class NSString;
@protocol NSDraggingDestination;

@interface _KHGridView : KHEditorView <NSAccessibilityGroup>

@property (weak, nonatomic) id<NSDraggingDestination> dragDestinationForwardingTarget;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)draggingExited:(id)a0;
- (void)concludeDragOperation:(id)a0;
- (void)draggingEnded:(id)a0;
- (unsigned long long)draggingEntered:(id)a0;
- (char)performDragOperation:(id)a0;
- (char)prepareForDragOperation:(id)a0;
- (void)updateDraggingItemsForDrag:(id)a0;
- (char)wantsPeriodicDraggingUpdates;

@end
