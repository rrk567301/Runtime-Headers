@class NSString, VKCameraRegionRestriction;
@protocol VKMovableCamera;

@interface VKUntetheredForwardMovableCamera : NSObject <VKMovableCamera> {
    id<VKMovableCamera> _forwardMoveableCamera;
}

@property (nonatomic) const void *position;
@property (readonly, nonatomic) double minHeight;
@property (readonly, nonatomic) double maxHeight;
@property (readonly, nonatomic) double pitchRadian;
@property (readonly, nonatomic) double yawRadian;
@property (readonly, nonatomic) struct Matrix<double, 3, 1> { double x0[3]; } rightVector;
@property (nonatomic) const void *orientation;
@property (readonly, nonatomic) struct VKCameraState { struct RigidTransform<double, double> { struct Matrix<double, 3, 1> { double x0[3]; } x0; struct Quaternion<double> { struct Matrix<double, 3, 1> { double x0[3]; } x0; double x1; } x1; } x0; double x1; struct Unit<geo::RadianUnitDescription, double> { double x0; } x2; double x3; } cameraState;
@property (readonly, nonatomic) double maxPitchRadian;
@property (readonly, retain, nonatomic) VKCameraRegionRestriction *regionRestriction;
@property (readonly, nonatomic) struct Matrix<double, 3, 1> { double x0[3]; } groundPoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setMoveableCamera:(id)a0;
- (struct optional<gm::Matrix<double, 3, 1>> { union { char x0; struct Matrix<double, 3, 1> { double x0[3]; } x1; } x0; BOOL x1; })groundPointFromScreenPoint:(struct CGPoint { double x0; double x1; })a0;
- (void).cxx_destruct;

@end
