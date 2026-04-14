@interface ASKDragAndDropEventHandlerDelegate : ASKEventHandlerDelegate

- (void)dealloc;
- (id)init;
- (void)addEventHandler_ask:(id)a0;
- (void)removeEventHandler_ask:(id)a0;
- (id)eventHandlerWithName_ask:(id)a0;
- (unsigned long long)draggingEntered:(id)a0 continueDrag:(BOOL *)a1;
- (unsigned long long)draggingUpdated:(id)a0 continueDrag:(BOOL *)a1;
- (void)draggingExited:(id)a0 continueDrag:(BOOL *)a1;
- (BOOL)prepareForDragOperation:(id)a0 continueDrag:(BOOL *)a1;
- (BOOL)performDragOperation:(id)a0 continueDrag:(BOOL *)a1;
- (void)concludeDragOperation:(id)a0 continueDrag:(BOOL *)a1;
- (void)draggingEnded:(id)a0 continueDrag:(BOOL *)a1;

@end
