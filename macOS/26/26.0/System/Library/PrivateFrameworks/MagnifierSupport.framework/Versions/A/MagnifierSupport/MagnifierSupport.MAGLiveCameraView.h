@class AVCaptureSession;

@interface MagnifierSupport.MAGLiveCameraView : NSView {
    void /* unknown type, empty encoding */ liveCameraLayer;
    void /* unknown type, empty encoding */ overlayView;
    void /* unknown type, empty encoding */ cameraChangedSubscription;
    void /* unknown type, empty encoding */ sessionObservation;
    void /* unknown type, empty encoding */ captureService;
}

@property (nonatomic, retain) AVCaptureSession *session;

- (void)mouseDown:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)magnifyWithEvent:(id)a0;
- (void)mouseMoved:(id)a0;
- (void)scrollWheel:(id)a0;

@end
