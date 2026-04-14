@class CIImage, NSNumber;

@interface DGDodgeFilter : CIFilter {
    CIImage *inputImage;
    CIImage *inputMaskImage;
    NSNumber *inputExposure;
}

+ (void)initialize;
+ (id)filterWithName:(id)a0;

- (id)customAttributes;
- (id)outputImage;

@end
