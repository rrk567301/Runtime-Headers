@interface WorkflowEditor.EditorDragGestureRecognizerItemSource : NSObject <NSDraggingSource> {
    void /* unknown type, empty encoding */ gestureRecognizer;
    void /* unknown type, empty encoding */ velocityFilter;
    void /* unknown type, empty encoding */ dragParameters;
}

- (id)init;
- (void).cxx_destruct;
- (void)draggingSession:(id)a0 endedAtPoint:(struct CGPoint { double x0; double x1; })a1 operation:(unsigned long long)a2;
- (void)draggingSession:(id)a0 movedToPoint:(struct CGPoint { double x0; double x1; })a1;
- (unsigned long long)draggingSession:(id)a0 sourceOperationMaskForDraggingContext:(long long)a1;
- (void)draggingSession:(id)a0 willBeginAtPoint:(struct CGPoint { double x0; double x1; })a1;

@end
