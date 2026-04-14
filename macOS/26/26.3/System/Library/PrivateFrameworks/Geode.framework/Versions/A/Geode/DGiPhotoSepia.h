@class CIImage, NSNumber;

@interface DGiPhotoSepia : CIFilter {
    CIImage *inputImage;
    NSNumber *inputIntensity;
}

+ (void)initialize;

- (id)customAttributes;
- (id)outputImage;

@end
