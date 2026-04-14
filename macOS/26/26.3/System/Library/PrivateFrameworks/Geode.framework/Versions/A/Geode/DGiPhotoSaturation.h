@class CIImage, NSNumber;

@interface DGiPhotoSaturation : CIFilter {
    CIImage *inputImage;
    NSNumber *inputSaturation;
    NSNumber *inputAlgorithm;
}

+ (void)initialize;

- (id)customAttributes;
- (id)outputImage;

@end
