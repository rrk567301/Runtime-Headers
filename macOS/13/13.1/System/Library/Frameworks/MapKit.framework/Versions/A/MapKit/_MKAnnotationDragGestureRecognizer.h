@interface _MKAnnotationDragGestureRecognizer : NSPressGestureRecognizer {
    struct CGPoint { double x; double y; } _dragLocation;
    BOOL _hasCustomDragLocation;
}

- (void)reset;
- (void)mouseDragged:(id)a0;
- (struct CGPoint { double x0; double x1; })locationInView:(id)a0;
- (double)allowableMovement;

@end
