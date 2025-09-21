@interface AKTextFieldAnnotationEventHandler : AKAnnotationEventHandler

+ (char)allowsDragging;

- (char)continueDraggableAreaEventTrackingLoopWithEvent:(id)a0 orRecognizer:(id)a1;
- (char)enterDraggableAreaEventTrackingLoopWithEvent:(id)a0 orRecognizer:(id)a1;
- (char)handleDownEvent:(id)a0 orRecognizer:(id)a1;

@end
