@protocol ADLensDistortionModel;

@interface ADCameraCalibration : NSObject <NSCopying, NSMutableCopying>

@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ columns[3]; } intrinsicMatrix;
@property (readonly, nonatomic) struct CGSize { double width; double height; } referenceDimensions;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } cameraToPlatformTransform;
@property (readonly, nonatomic) float pixelSize;
@property (readonly, nonatomic) id<ADLensDistortionModel> distortionModel;

+ (struct { void /* unknown type, empty encoding */ x0[3]; })createIntrinsicsMatrixWithEFL:(float)a0 principalPointX:(float)a1 principalPointY:(float)a2;
+ (struct { void /* unknown type, empty encoding */ x0[3]; })createIntrinsicsMatrixWithEflX:(float)a0 eflY:(float)a1 principalPointX:(float)a2 principalPointY:(float)a3;
+ (id)cameraCalibrationFromFile:(id)a0;
+ (void)transform:(unsigned long long)a0 points:(const void *)a1 with:(struct { void /* unknown type, empty encoding */ x0[4]; })a2 outPoints:(void *)a3;

- (BOOL)writeToFile:(id)a0 atomically:(BOOL)a1;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)initWithFile:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)backProject:(unsigned long long)a0 undistortedPixels:(const struct CGPoint { double x0; double x1; } *)a1 withZ:(const float *)a2 outPoints:(void *)a3;
- (void)distort:(unsigned long long)a0 undistortedPixels:(const struct CGPoint { double x0; double x1; } *)a1 outDistorted:(struct CGPoint { double x0; double x1; } *)a2;
- (struct { void /* unknown type, empty encoding */ x0[4]; })getTransformationTo:(id)a0;
- (id)initWithIntrinsics:(struct { void /* unknown type, empty encoding */ x0[3]; })a0 cameraToPlatformTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a1 pixelSize:(float)a2 referenceDimensions:(struct CGSize { double x0; double x1; })a3 distortionModel:(id)a4;
- (void)project:(unsigned long long)a0 points:(const void *)a1 outUndistortedPixels:(struct CGPoint { double x0; double x1; } *)a2;
- (void)transform:(unsigned long long)a0 points:(const void *)a1 toCamera:(id)a2 outPoints:(void *)a3;
- (void)undistort:(unsigned long long)a0 distortedPixels:(const struct CGPoint { double x0; double x1; } *)a1 outUndistorted:(struct CGPoint { double x0; double x1; } *)a2;
- (void)backProject:(unsigned long long)a0 undistortedPixels:(const struct CGPoint { double x0; double x1; } *)a1 withR:(const float *)a2 outPoints:(void *)a3;
- (id)createDictionaryRepresentationWithHumanReadable:(BOOL)a0;
- (id)initWithIntrinsics:(struct { void /* unknown type, empty encoding */ x0[3]; })a0 cameraToPlatformTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a1 pixelSize:(double)a2 forReferenceDimensions:(struct CGSize { double x0; double x1; })a3 withDistortionModel:(id)a4;
- (void)project:(unsigned long long)a0 points:(const void *)a1 outUndistortedPixels:(struct CGPoint { double x0; double x1; } *)a2 outR:(float *)a3;

@end
