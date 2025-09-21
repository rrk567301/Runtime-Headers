@class VKCamera, VKCameraController, ARSession;
@protocol MDRenderTarget, MDMapControllerDelegate;

@interface VKScreenCanvas : NSObject {
    struct RunLoopController { struct MapEngine *x0; long long x1; } *_runLoopController;
    struct AnimationRunner { struct MapEngine *x0; } *_animationRunner;
    struct shared_ptr<md::TaskContext> { struct TaskContext *__ptr_; struct __shared_weak_count *__cntrl_; } _taskContext;
    id<MDRenderTarget> _displayTarget;
    char _userIsGesturing;
    VKCameraController *_cameraController;
    struct VKEdgeInsets { float top; float left; float bottom; float right; } _edgeInsets;
    char _deallocing;
    struct PerspectiveView<double> { struct RigidTransform<double, double> { struct Matrix<double, 3, 1> { double _e[3]; } _translation; struct Quaternion<double> { struct Matrix<double, 3, 1> { double _e[3]; } _imaginary; double _scalar; } _rotation; } _transform; struct Matrix<double, 4, 4> { double _e[16]; } _projectionMatrix; struct Matrix<double, 4, 4> { double _e[16]; } _inverseProjection; struct Matrix<double, 4, 4> { double _e[16]; } _matrix; double _ndcZNear; double _aspectRatio; struct ViewSize { unsigned short width; unsigned short height; } _size; int _type; struct Unit<geo::RadianUnitDescription, double> { double _value; } _verticalFOV; double _near; double _far; } _view;
    ARSession *_arSession;
}

@property (nonatomic) struct _retain_ptr<VKCamera *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> { void /* function */ **_vptr$_retain_ptr; VKCamera *_obj; struct _retain_objc_arc { } _retain; struct _release_objc_arc { } _release; } vkCamera;
@property (nonatomic) struct shared_ptr<gdc::Camera> { struct Camera *__ptr_; struct __shared_weak_count *__cntrl_; } camera;
@property (readonly, nonatomic) void *mapEngine;
@property (nonatomic) struct VKEdgeInsets { float x0; float x1; float x2; float x3; } edgeInsets;
@property (nonatomic) struct VKEdgeInsets { float top; float left; float bottom; float right; } fullyOccludedEdgeInsets;
@property (weak, nonatomic) id<MDMapControllerDelegate> mapDelegate;
@property (nonatomic) long long baseDisplayRate;
@property (nonatomic) long long maxDisplayRate;
@property (nonatomic, getter=isGesturing) char gesturing;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)setContentsScale:(double)a0;
- (long long)tileSize;
- (void)runAnimation:(id)a0;
- (void)didPresent;
- (id)cameraController;
- (void)didBecomeActive;
- (id)initWithMapEngine:(void *)a0 inBackground:(char)a1;
- (void)cameraController:(id)a0 requestsDisplayRate:(long long)a1;
- (void)didBecomeInActive;
- (void)didReceiveMemoryWarning:(char)a0 beAggressive:(char)a1;
- (id)markerAtScreenPoint:(struct CGPoint { double x0; double x1; })a0 enableExtendedFeatureMarkers:(char)a1;
- (void)setCameraController:(id)a0;
- (void)transferStateFromCanvas:(id)a0;
- (void)updateCameraForFrameResize;
- (void)updateWithTimestamp:(double)a0 withContext:(void *)a1;
- (char)wantsTimerTick;

@end
