@class CIImage, NSNumber;

@interface CIPhotoEffect : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (copy, nonatomic) NSNumber *inputExtrapolate;

+ (id)customAttributes;

- (void)setDefaults;
- (int)_defaultVersion;
- (id)outputImage;
- (int)_maxVersion;
- (id)init;
- (id)cubeColorSpaceName;
- (id)cubeName;
- (id)cubePath;

@end
