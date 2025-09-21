@class ANSTSkinToneEstimate, ANSTEyeRectEstimate, ANST3DPoseEstimate, ANSTSmileEstimate, ANSTEyeBlinkEstimate;

@interface ANSTFace : ANSTObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL poseEstimateExists;
@property (readonly, nonatomic) BOOL skinToneEstimateExists;
@property (readonly, nonatomic) BOOL smileEstimateExists;
@property (readonly, nonatomic) BOOL eyeBlinkEstimateExists;
@property (readonly, nonatomic) BOOL eyeRectEstimateExists;
@property (readonly, nonatomic, getter=isFrontal) BOOL frontal;
@property (readonly, nonatomic) long long faceMaskConfidence;
@property (readonly, nonatomic) long long eyeCoveringConfidence;
@property (readonly, nonatomic) ANST3DPoseEstimate *poseEstimate;
@property (readonly, nonatomic) ANSTSkinToneEstimate *skinToneEstimate;
@property (readonly, nonatomic) ANSTSmileEstimate *smileEstimate;
@property (readonly, nonatomic) ANSTEyeBlinkEstimate *eyeBlinkEstimate;
@property (readonly, nonatomic) ANSTEyeRectEstimate *eyeRectEstimate;

+ (id)new;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithAcFace:(struct { unsigned int x0; unsigned int x1; int x2; struct { float x0; float x1; float x2; float x3; } x3; unsigned int x4; float x5; int x6; int x7; int x8; int x9; int x10; int x11; int x12; int x13; struct { float x0; float x1; float x2; float x3; } x14; struct { float x0; float x1; float x2; float x3; } x15; unsigned char x16; unsigned char x17; unsigned char x18; unsigned char x19; unsigned char x20; unsigned int x21; struct { float x0; float x1; float x2; float x3; } x22; unsigned char x23; unsigned int x24; unsigned char x25; float x26[64]; unsigned char x27; unsigned int x28; int x29; int x30; int x31; int x32; int x33; int x34; int x35; int x36; int x37; int x38; int x39; unsigned char x40; struct { float x0; float x1; float x2; } x41[98]; struct { float x0; float x1; float x2; } x42[98]; int x43; } *)a0;
- (id)debugJSONDictionary;
- (id)initWithAcObject:(struct { unsigned int x0; unsigned int x1; int x2; struct { float x0; float x1; float x2; float x3; } x3; unsigned int x4; float x5; int x6; } *)a0;
- (id)initWithObjectID:(unsigned long long)a0 groupID:(unsigned long long)a1 category:(id)a2 boundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 confidence:(unsigned long long)a4 distance:(float)a5;
- (id)initWithObjectID:(unsigned long long)a0 groupID:(unsigned long long)a1 category:(id)a2 boundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 confidence:(unsigned long long)a4 distance:(float)a5 frontal:(BOOL)a6 faceMaskConfidence:(long long)a7 eyeCoveringConfidence:(long long)a8 poseEstimate:(id)a9 skinToneEstimate:(id)a10 smileEstimate:(id)a11 eyeBlinkEstimate:(id)a12 eyeRectEstimate:(id)a13;

@end
