@class CIImage, CIVector, NSNumber;

@interface RAWTemperatureAdjust : RAWFilter {
    CIImage *inputImage;
    CIVector *inputWhitePoint;
    NSNumber *inputExposure;
    NSNumber *inputVersion;
    CIVector *defaultWhitePoint;
}

+ (char)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)customAttributes;

- (void).cxx_destruct;
- (id)outputImage;
- (id)customAttributes;
- (void)setInputExposure:(id)a0;
- (id)outputMatrix;
- (void)setInputWhitePoint:(id)a0;

@end
