@class CIImage, NSNumber;

@interface DGiPhotoTintCorrection : CIFilter {
    CIImage *inputImage;
    NSNumber *inputPower;
}

+ (void)initialize;

- (id)customAttributes;
- (id)outputImage;

@end
