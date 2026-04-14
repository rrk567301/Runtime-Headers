@class NSString, _valid;

@interface VKARWalkingCameraController : VKScreenCameraController <VKGesturingCameraController> {
    void *_arLogic;
    void *_elevationLogic;
    struct Quaternion<double> { struct Matrix<double, 3, 1> { double _e[3]; } _imaginary; double _scalar; } _rotationCorrectionQuaternion;
    struct Coordinate3D<geo::Degrees, double> { struct Unit<geo::DegreeUnitDescription, double> { double _value; } latitude; struct Unit<geo::DegreeUnitDescription, double> { double _value; } longitude; struct Unit<geo::MeterUnitDescription, double> { double _value; } altitude; } _coordinate;
    struct EulerAngles { struct Unit<geo::RadianUnitDescription, double> { double _value; } pitch; struct Unit<geo::RadianUnitDescription, double> { double _value; } yaw; struct Unit<geo::RadianUnitDescription, double> { double _value; } roll; } _eulerAngles;
    struct Unit<geo::DegreeUnitDescription, double> { double _value; } _heading;
    struct vector<std::variant<md::ARCameraPanEvent, md::ARCameraRotateEvent>, std::allocator<std::variant<md::ARCameraPanEvent, md::ARCameraRotateEvent>>> { void *__begin_; void *__end_; void *__cap_; } _gestures;
    struct Monitorable<md::ConfigValue<GEOConfigKeyDouble, double>> { struct { struct { unsigned int identifier; void *metadata; } key; } _key; double _value; _valid *_listener; struct shared_ptr<std::atomic<bool>> { void *__ptr_; struct __shared_weak_count *__cntrl_; } x0; struct function<void (double)> { struct __value_func<void (double)> { union type { unsigned char __data[24]; } __buf_; void *__f_; } __f_; } _delegate; } _maxClipDistance;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)topDownMinimumZoomLevel;
- (void)startTrackingAnnotation:(id)a0 trackHeading:(BOOL)a1 animated:(BOOL)a2 duration:(double)a3 timingFunction:(id /* block */)a4;
- (void)setPitch:(double)a0;
- (double)altitude;
- (double)currentZoomLevel;
- (void)setCamera:(struct shared_ptr<gdc::Camera> { struct Camera *x0; struct __shared_weak_count *x1; })a0;
- (void)_updateDebugOverlay:(void *)a0;
- (double)minimumZoomLevel;
- (void)stopTrackingAnnotation;
- (void)updateWithTimestamp:(double)a0 withContext:(void *)a1;
- (double)minPitch;
- (BOOL)usesVKCamera;
- (double)maxPitch;
- (void)setCenterCoordinate:(struct { double x0; double x1; })a0 altitude:(double)a1 yaw:(double)a2 pitch:(double)a3 duration:(double)a4 animationStyle:(long long)a5 timingCurve:(id /* block */)a6 completion:(id /* block */)a7;
- (double)distanceFromCenterCoordinate;
- (double)maximumZoomLevel;
- (id)initWithTaskContext:(struct shared_ptr<md::TaskContext> { struct TaskContext *x0; struct __shared_weak_count *x1; })a0 mapDataAccess:(void *)a1 animationRunner:(struct AnimationRunner { struct MapEngine *x0; } *)a2 runLoopController:(struct RunLoopController { struct MapEngine *x0; long long x1; } *)a3 cameraDelegate:(id)a4 arLogic:(void *)a5 elevationLogic:(void *)a6;
- (double)pitch;
- (void)setVkCamera:(id)a0;
- (struct { double x0; double x1; })centerCoordinate;
- (void)setAltitude:(double)a0;
- (double)heading;
- (void)_updateClipPlanes;
- (id)_buildDebugString:(void *)a0;
- (void)pushGesture:(void *)a0;
- (id).cxx_construct;
- (void)setHeading:(double)a0;
- (void *)_locationProvider;
- (void).cxx_destruct;
- (double)presentationHeading;
- (void)setCenterCoordinate:(struct { double x0; double x1; })a0;
- (void)setDistanceFromCenterCoordinate:(double)a0;

@end
