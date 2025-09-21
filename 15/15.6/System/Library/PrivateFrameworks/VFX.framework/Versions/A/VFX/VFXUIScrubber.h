@interface VFXUIScrubber : NSTextField {
    float deltaX;
    float v0;
    struct CGPoint { double x; double y; } p0;
    float minValue;
    float maxValue;
    char drag;
    char rejectFirstResponder;
}

- (char)becomeFirstResponder;
- (void)mouseDown:(id)a0;
- (void)mouseDragged:(id)a0;
- (void)mouseUp:(id)a0;
- (float)checkBounds:(float)a0;

@end
