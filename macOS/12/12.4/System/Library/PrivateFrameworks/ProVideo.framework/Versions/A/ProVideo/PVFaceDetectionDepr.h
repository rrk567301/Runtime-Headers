@interface PVFaceDetectionDepr : NSObject

@property (nonatomic) long long ID;
@property (nonatomic) BOOL hasRollAngle;
@property (nonatomic) double rollAngleInDegrees;
@property (nonatomic) BOOL hasYawAngle;
@property (nonatomic) double yawAngleInDegrees;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } boundingBox;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } time;
@property (nonatomic) long long detectionOrientation;
@property (retain) id faceObject;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)debugDescription;
- (void).cxx_destruct;
- (BOOL)isEqualToFaceDetection:(id)a0;

@end
