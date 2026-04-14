@class VKCameraRegionRestriction;

@interface VKGlobeAnnotationTrackingCameraController : VKAnnotationTrackingCameraController {
    void *_anchor;
    struct { double latitude; double longitude; double altitude; } _currentAnimationStartCoordinate;
    struct { double latitude; double longitude; } _currentAnimationPresentationStartCoordinate;
    struct { double latitude; double longitude; } _currentAnimationPresentationEndCoordinate;
    struct { double latitude; double longitude; } _currentAnimationEndCoordinate;
}

@property (nonatomic) void *globeView;
@property (retain, nonatomic) VKCameraRegionRestriction *regionRestriction;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)setEdgeInsets:(struct VKEdgeInsets { float x0; float x1; float x2; float x3; })a0;
- (struct VKEdgeInsets { float x0; float x1; float x2; float x3; })_effectiveEdgeInsets;
- (void)_goToAnnotationAnimated:(BOOL)a0 duration:(double)a1 timingFunction:(id /* block */)a2 isInitial:(BOOL)a3;
- (void)_rotateToHeadingAnimated:(BOOL)a0 duration:(double)a1;
- (struct Matrix<int, 2, 1> { int x0[2]; })_nonOffsetCenterCursor;
- (struct Matrix<int, 2, 1> { int x0[2]; })_centerCursor;

@end
