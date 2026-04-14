@class CIImage, NSNumber;

@interface CIPhotoEffect : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (copy, nonatomic) NSNumber *inputExtrapolate;

+ (id)customAttributes;

- (int)_defaultVersion;
- (id)outputImage;
- (void)setDefaults;
- (int)_maxVersion;
- (id)init;
- (id)cubeColorSpaceName;
- (id)cubeName;
- (id)cubePath;

@end
