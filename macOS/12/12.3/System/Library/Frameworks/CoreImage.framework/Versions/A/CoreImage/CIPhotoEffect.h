@class CIImage;

@interface CIPhotoEffect : CIFilter

@property (retain, nonatomic) CIImage *inputImage;

+ (id)customAttributes;

- (id)init;
- (void)setDefaults;
- (id)outputImage;
- (int)_defaultVersion;
- (int)_maxVersion;
- (id)cubeName;
- (id)cubePath;
- (id)cubeColorSpaceName;

@end
