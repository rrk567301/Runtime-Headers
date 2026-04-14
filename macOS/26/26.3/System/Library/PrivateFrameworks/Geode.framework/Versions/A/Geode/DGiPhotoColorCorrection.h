@class CIImage, NSNumber;

@interface DGiPhotoColorCorrection : CIFilter {
    CIImage *inputImage;
    NSNumber *inputPower;
}

+ (void)initialize;

- (id)customAttributes;
- (id)outputImage;

@end
