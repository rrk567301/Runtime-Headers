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

- (void)setInputExposure:(id)a0;
- (void).cxx_destruct;
- (id)outputImage;
- (void)setInputBias:(id)a0;
- (id)customAttributes;
- (id)outputMatrix;

@end
