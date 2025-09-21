@interface AVMetadataFaceObjectInternal : NSObject

@property (nonatomic) long long faceID;
@property (nonatomic) char hasRollAngle;
@property (nonatomic) double rollAngle;
@property (nonatomic) char hasYawAngle;
@property (nonatomic) double yawAngle;
@property (nonatomic) char hasPitchAngle;
@property (nonatomic) double pitchAngle;
@property (nonatomic) char hasLeftEyeClosedConfidence;
@property (nonatomic) int leftEyeClosedConfidence;
@property (nonatomic) char hasRightEyeClosedConfidence;
@property (nonatomic) int rightEyeClosedConfidence;
@property (nonatomic) char hasSmileConfidence;
@property (nonatomic) int smileConfidence;
@property (nonatomic) char hasLeftEyeBounds;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } leftEyeBounds;
@property (nonatomic) char hasRightEyeBounds;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rightEyeBounds;
@property (nonatomic) char hasConfidence;
@property (nonatomic) double confidence;
@property (nonatomic) char hasPayingAttention;
@property (nonatomic) char payingAttention;
@property (nonatomic) char hasDistance;
@property (nonatomic) double distance;
@property (nonatomic) char hasOrientation;
@property (nonatomic) unsigned long long orientation;
@property (nonatomic) char hasOccludedFeatures;
@property (nonatomic) char occludedFeatures;

@end
