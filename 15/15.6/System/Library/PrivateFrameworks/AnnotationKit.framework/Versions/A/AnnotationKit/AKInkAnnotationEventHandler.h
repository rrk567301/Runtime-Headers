@interface AKInkAnnotationEventHandler : AKRectangularAnnotationEventHandler

+ (char)allowsDraggingOfAnnotation:(id)a0;

- (char)alwaysLockAspectRatio;
- (char)enterDraggableAreaEventTrackingLoopWithEvent:(id)a0 orRecognizer:(id)a1;
- (char)handleDownEvent:(id)a0 orRecognizer:(id)a1;
- (struct CGSize { double x0; double x1; })naturalSizeForAnnotation;

@end
