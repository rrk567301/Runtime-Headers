@class CIImage, NSNumber;

@interface DGiPhotoEffectsFilter01 : CIFilter {
    CIImage *inputImage;
    NSNumber *inputIntensity;
    NSNumber *inputW;
    NSNumber *inputH;
    NSNumber *inputColor;
    NSNumber *inputVariant;
}

+ (void)initialize;

- (id)customAttributes;
- (id)outputImage;

@end
