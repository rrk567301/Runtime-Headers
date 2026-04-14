@interface LPHighlightGestureRecognizer : NSGestureRecognizer {
    struct CGPoint { double x; double y; } _startPointInWindowCoordinates;
}

- (void)mouseDown:(id)a0;
- (void)mouseUp:(id)a0;
- (void)mouseDragged:(id)a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (struct CGPoint { double x0; double x1; })_locationInWindow;
- (void)updateHighlight;
- (void)cancelHighlight;
- (void)startHighlightIfPossible;

@end
