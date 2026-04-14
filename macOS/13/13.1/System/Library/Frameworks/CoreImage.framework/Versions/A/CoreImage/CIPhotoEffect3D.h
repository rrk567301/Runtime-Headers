@class CIImage, NSNumber;

@interface CIPhotoEffect3D : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIImage *inputDepthMap;
@property (retain, nonatomic) NSNumber *inputThreshold;
@property (retain, nonatomic) NSNumber *inputGrainAmount;
@property (retain, nonatomic) NSNumber *inputScale;

+ (id)customAttributes;

- (id)init;
- (void)setDefaults;
- (id)outputImage;
- (int)_maxVersion;
- (int)_defaultVersion;
- (id)cubeName;
- (id)cubePath;
- (id)cubeColorSpaceName;
- (id)_CIPhotoEffectDepthBlend;
- (id)backgroundCubeName;
- (id)backgroundCubePath;
- (id)applyCubeWithName:(id)a0 toImage:(id)a1;
- (int)_maxVersionBG;

@end
