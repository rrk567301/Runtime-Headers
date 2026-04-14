@interface _TtCV21ImmersiveMediaSupport26ImmersiveMediaViewInternal9MouseView : MTKView {
    void /* unknown type, empty encoding */ mouseDownStart;
    void /* unknown type, empty encoding */ cameraFov;
    void /* unknown type, empty encoding */ cameraFovRadians;
    void /* unknown type, empty encoding */ cameraFovDegrees;
    void /* unknown type, empty encoding */ mouseSensitivity;
    void /* unknown type, empty encoding */ mouseDownTransX;
    void /* unknown type, empty encoding */ mouseDownTransY;
    void /* unknown type, empty encoding */ currentTransformX;
    void /* unknown type, empty encoding */ currentTransformY;
    void /* unknown type, empty encoding */ currentTransform;
}

- (void)mouseDown:(id)a0;
- (void)mouseDragged:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 device:(id)a1;

@end
