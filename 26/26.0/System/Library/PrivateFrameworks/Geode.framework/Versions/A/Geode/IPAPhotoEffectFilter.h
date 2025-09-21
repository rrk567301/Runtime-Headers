@class CIImage, NSNumber;

@interface IPAPhotoEffectFilter : CIFilter {
    CIImage *inputImage;
    NSNumber *inputEffectNumber;
    NSNumber *inputEffectVersion;
}

+ (void)initialize;
+ (id)filterWithName:(id)a0;

- (id)outputImage;
- (id)customAttributes;
- (void).cxx_destruct;
- (BOOL)_isValidEffectVersion:(int)a0;

@end
