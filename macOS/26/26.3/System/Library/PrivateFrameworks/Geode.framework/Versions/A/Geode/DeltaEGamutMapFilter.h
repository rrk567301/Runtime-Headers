@class CIImage, NSNumber;

@interface DeltaEGamutMapFilter : CIFilter {
    CIImage *inputImage;
    id inputColorSpace;
    NSNumber *inputShouldWarn;
}

- (id)customAttributes;
- (id)outputImage;
- (id)kernelToRun:(long long)a0;

@end
