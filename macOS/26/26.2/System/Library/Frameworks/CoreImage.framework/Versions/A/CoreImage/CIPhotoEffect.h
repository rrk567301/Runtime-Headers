@class CIImage, NSNumber;

@interface CIPhotoEffect : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (copy, nonatomic) NSNumber *inputExtrapolate;

+ (id)customAttributes;

- (id)outputImage;
- (int)_defaultVersion;
- (int)_maxVersion;
- (void)setDefaults;
- (id)init;
- (id)cubeColorSpaceName;
- (id)cubeName;
- (id)cubePath;

@end
