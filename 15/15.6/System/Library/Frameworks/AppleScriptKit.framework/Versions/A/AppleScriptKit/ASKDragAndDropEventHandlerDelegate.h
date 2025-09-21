@interface ASKDragAndDropEventHandlerDelegate : ASKEventHandlerDelegate

- (void)dealloc;
- (id)init;
- (void)addEventHandler_ask:(id)a0;
- (void)concludeDragOperation:(id)a0 continueDrag:(char *)a1;
- (void)draggingEnded:(id)a0 continueDrag:(char *)a1;
- (unsigned long long)draggingEntered:(id)a0 continueDrag:(char *)a1;
- (void)draggingExited:(id)a0 continueDrag:(char *)a1;
- (unsigned long long)draggingUpdated:(id)a0 continueDrag:(char *)a1;
- (id)eventHandlerWithName_ask:(id)a0;
- (char)performDragOperation:(id)a0 continueDrag:(char *)a1;
- (char)prepareForDragOperation:(id)a0 continueDrag:(char *)a1;
- (void)removeEventHandler_ask:(id)a0;

@end
