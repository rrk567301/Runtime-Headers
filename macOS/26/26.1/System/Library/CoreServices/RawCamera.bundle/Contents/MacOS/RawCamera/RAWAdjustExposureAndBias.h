@class CIImage, NSNumber;

@interface RAWAdjustExposureAndBias : RAWFilter {
    CIImage *inputImage;
    id inputColorSpace;
    NSNumber *inputBaselineExposure;
    NSNumber *inputExposure;
    NSNumber *inputBias;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)customAttributes;

- (id)outputImage;
- (void)setInputBias:(id)a0;
- (void).cxx_destruct;
- (void)setInputExposure:(id)a0;
- (id)customAttributes;
- (id)outputMatrix;

@end
