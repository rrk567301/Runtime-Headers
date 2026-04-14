@class CIImage, NSNumber;

@interface CICheapBlur : CIFilter {
    CIImage *inputImage;
    NSNumber *inputPasses;
    NSNumber *inputSampling;
}

+ (id)customAttributes;

- (id)outputImage;
- (id)_CICheapBlur;
- (id)_CILerp;

@end
