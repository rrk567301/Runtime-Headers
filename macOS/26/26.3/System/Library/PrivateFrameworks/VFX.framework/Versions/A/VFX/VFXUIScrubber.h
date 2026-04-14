@interface VFXUIScrubber : NSTextField {
    float deltaX;
    float v0;
    struct CGPoint { double x; double y; } p0;
    float minValue;
    float maxValue;
    BOOL drag;
    BOOL rejectFirstResponder;
}

- (void)mouseUp:(id)a0;
- (BOOL)becomeFirstResponder;
- (void)mouseDragged:(id)a0;
- (void)mouseDown:(id)a0;
- (float)checkBounds:(float)a0;

@end
