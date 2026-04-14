@class CIImage, NSNumber;

@interface CIPhotoEffect3D : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIImage *inputDepthMap;
@property (retain, nonatomic) NSNumber *inputThreshold;
@property (retain, nonatomic) NSNumber *inputGrainAmount;
@property (retain, nonatomic) NSNumber *inputScale;

+ (id)customAttributes;

- (void)setDefaults;
- (int)_defaultVersion;
- (id)outputImage;
- (int)_maxVersion;
- (id)init;
- (id)_CIPhotoEffectDepthBlend;
- (int)_maxVersionBG;
- (id)applyCubeWithName:(id)a0 toImage:(id)a1;
- (id)backgroundCubeName;
- (id)backgroundCubePath;
- (id)cubeColorSpaceName;
- (id)cubeName;
- (id)cubePath;

@end
