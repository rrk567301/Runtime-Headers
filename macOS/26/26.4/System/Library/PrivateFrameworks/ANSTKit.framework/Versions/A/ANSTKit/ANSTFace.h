@class ANSTSkinToneEstimate, ANSTEyeRectEstimate, ANSTFacialLandmarkEstimate, ANST3DPoseEstimate, ANSTSmileEstimate, ANSTEyeBlinkEstimate;

@interface ANSTFace : ANSTObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL poseEstimateExists;
@property (readonly, nonatomic) BOOL skinToneEstimateExists;
@property (readonly, nonatomic) BOOL smileEstimateExists;
@property (readonly, nonatomic) BOOL eyeBlinkEstimateExists;
@property (readonly, nonatomic) BOOL eyeRectEstimateExists;
@property (readonly, nonatomic) BOOL facialLandmarkEstimateExists;
@property (readonly, nonatomic, getter=isFrontal) BOOL frontal;
@property (readonly, nonatomic) long long faceMaskConfidence;
@property (readonly, nonatomic) long long eyeCoveringConfidence;
@property (readonly, nonatomic) ANST3DPoseEstimate *poseEstimate;
@property (readonly, nonatomic) ANSTSkinToneEstimate *skinToneEstimate;
@property (readonly, nonatomic) ANSTSmileEstimate *smileEstimate;
@property (readonly, nonatomic) ANSTEyeBlinkEstimate *eyeBlinkEstimate;
@property (readonly, nonatomic) ANSTEyeRectEstimate *eyeRectEstimate;
@property (readonly, nonatomic) ANSTFacialLandmarkEstimate *facialLandmarkEstimate;
@property (readonly, nonatomic) ANSTFacialLandmarkEstimate *facialLandmarkFDMEstimate;

+ (id)new;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithAcFace:(struct { unsigned int x0; unsigned int x1; int x2; struct { float x0; float x1; float x2; float x3; } x3; unsigned int x4; unsigned int x5; unsigned int x6; float x7; int x8; int x9; int x10; int x11; int x12; int x13; int x14; int x15; struct { float x0; float x1; float x2; float x3; } x16; struct { float x0; float x1; float x2; float x3; } x17; unsigned char x18; unsigned char x19; unsigned char x20; unsigned char x21; unsigned char x22; unsigned int x23; struct { float x0; float x1; float x2; float x3; } x24; unsigned char x25; unsigned int x26; unsigned char x27; float x28[64]; unsigned char x29; unsigned int x30; int x31; int x32; int x33; int x34; int x35; int x36; int x37; int x38; int x39; int x40; int x41; unsigned char x42; struct { float x0; float x1; unsigned int x2; unsigned int x3; } x43[98]; struct { float x0; float x1; unsigned int x2; unsigned int x3; } x44[98]; int x45; } *)a0;
- (id)debugJSONDictionary;
- (id)initWithAcObject:(struct { unsigned int x0; unsigned int x1; int x2; struct { float x0; float x1; float x2; float x3; } x3; unsigned int x4; unsigned int x5; unsigned int x6; float x7; int x8; } *)a0;
- (id)initWithObjectID:(unsigned long long)a0 groupID:(unsigned long long)a1 category:(id)a2 boundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 confidence:(unsigned long long)a4 distance:(float)a5;
- (id)initWithObjectID:(unsigned long long)a0 groupID:(unsigned long long)a1 category:(id)a2 boundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 confidence:(unsigned long long)a4 distance:(float)a5 frontal:(BOOL)a6 faceMaskConfidence:(long long)a7 eyeCoveringConfidence:(long long)a8 poseEstimate:(id)a9 skinToneEstimate:(id)a10 smileEstimate:(id)a11 eyeBlinkEstimate:(id)a12 eyeRectEstimate:(id)a13;
- (id)initWithObjectID:(unsigned long long)a0 groupID:(unsigned long long)a1 category:(id)a2 boundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 confidence:(unsigned long long)a4 distance:(float)a5 frontal:(BOOL)a6 faceMaskConfidence:(long long)a7 eyeCoveringConfidence:(long long)a8 poseEstimate:(id)a9 skinToneEstimate:(id)a10 smileEstimate:(id)a11 eyeBlinkEstimate:(id)a12 eyeRectEstimate:(id)a13 facialLandmarkEstimate:(id)a14 facialLandmarkFDMEstimate:(id)a15;

@end
