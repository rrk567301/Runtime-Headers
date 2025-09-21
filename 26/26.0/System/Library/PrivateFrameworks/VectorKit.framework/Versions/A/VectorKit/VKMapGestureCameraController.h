@class VKTimedAnimation;
@protocol VKMovableCamera;

@interface VKMapGestureCameraController : VKGestureCameraBehavior {
    struct CGPoint { double x; double y; } _panLastScreenPoint;
    BOOL _isPitchIncreasing;
    double _beganPitch;
    double _currentPitch;
    VKTimedAnimation *_zoomAnimation;
    struct optional<double> { union { char __null_state_; double __val_; } ; BOOL __engaged_; } _rubberbandZoomStartFactor;
    struct optional<double> { union { char __null_state_; double __val_; } ; BOOL __engaged_; } _zoomPreviousT;
    id<VKMovableCamera> _moveableCamera;
}

@property (nonatomic) id<VKMovableCamera> moveableCamera;

- (void)endZoom:(struct CGPoint { double x0; double x1; })a0;
- (void)beginPitch:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)isPitchIncreasing;
- (void)updatePitch:(struct CGPoint { double x0; double x1; })a0 translation:(double)a1;
- (void)updateRotate:(double)a0 atScreenPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)updateZoom:(struct CGPoint { double x0; double x1; })a0 oldFactor:(double)a1 newFactor:(double)a2;
- (void)updatePan:(struct CGPoint { double x0; double x1; })a0 lastScreenPoint:(struct CGPoint { double x0; double x1; })a1;
- (id)initWithCameraController:(id)a0;
- (struct Matrix<double, 3, 1> { double x0[3]; })positionClampedToCameraRestriction:(struct Matrix<double, 3, 1> { double x0[3]; })a0;
- (struct Matrix<double, 3, 1> { double x0[3]; })positionClampedToCameraRestriction:(struct Matrix<double, 3, 1> { double x0[3]; })a0 delta:(struct Matrix<double, 3, 1> { double x0[3]; })a1;
- (id).cxx_construct;
- (void)updatePitch:(struct CGPoint { double x0; double x1; })a0 degrees:(double)a1;
- (void).cxx_destruct;

@end
