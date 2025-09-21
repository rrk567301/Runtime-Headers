@class AVMetadataFaceObjectInternal;

@interface AVMetadataFaceObject : AVMetadataObject <NSCopying> {
    AVMetadataFaceObjectInternal *_internal;
}

@property (readonly) long long faceID;
@property (readonly) char hasRollAngle;
@property (readonly) double rollAngle;
@property (readonly) char hasYawAngle;
@property (readonly) double yawAngle;

+ (id)faceObjectWithFigEmbeddedCaptureDeviceFaceDictionary:(id)a0 input:(id)a1 timeStamp:(id)a2;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (double)confidence;
- (unsigned long long)orientation;
- (char)hasConfidence;
- (double)distance;
- (char)hasDistance;
- (char)hasOrientation;
- (double)pitchAngle;
- (id)initWithFigEmbeddedCaptureDeviceFaceDictionary:(id)a0 input:(id)a1 timeStamp:(id)a2;
- (char)payingAttention;
- (int)smileConfidence;
- (char)hasLeftEyeBounds;
- (char)hasLeftEyeClosedConfidence;
- (char)hasOccludedFeatures;
- (char)hasPayingAttention;
- (char)hasPayingAttentionConfidence;
- (char)hasPitchAngle;
- (char)hasRightEyeBounds;
- (char)hasRightEyeClosedConfidence;
- (char)hasSmileConfidence;
- (id)initDerivedMetadataObjectFromMetadataObject:(id)a0 withTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 isVideoMirrored:(char)a2 rollAdjustment:(double)a3;
- (id)initWithFaceID:(long long)a0 hasRollAngle:(char)a1 rollAngle:(double)a2 hasYawAngle:(char)a3 yawAngle:(double)a4 hasPitchAngle:(char)a5 pitchAngle:(double)a6 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a7 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a8 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a9;
- (id)initWithFaceID:(long long)a0 hasRollAngle:(char)a1 rollAngle:(double)a2 hasYawAngle:(char)a3 yawAngle:(double)a4 hasPitchAngle:(char)a5 pitchAngle:(double)a6 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a7 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a8 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a9 optionalInfoDict:(id)a10 originalMetadataObject:(id)a11 sourceCaptureInput:(id)a12;
- (id)initWithType:(id)a0 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 optionalInfoDict:(id)a4 originalMetadataObject:(id)a5 sourceCaptureInput:(id)a6;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })leftEyeBounds;
- (int)leftEyeClosedConfidence;
- (char)occludedFeatures;
- (double)payingAttentionConfidence;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rightEyeBounds;
- (int)rightEyeClosedConfidence;

@end
