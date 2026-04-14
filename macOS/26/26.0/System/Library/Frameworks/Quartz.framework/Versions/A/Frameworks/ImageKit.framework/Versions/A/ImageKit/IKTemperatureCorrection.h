@class CIImage, NSNumber;

@interface IKTemperatureCorrection : CIFilter {
    CIImage *inputImage;
    NSNumber *inputPower;
}

+ (id)filterWithName:(id)a0;
+ (void)registerFilter;

- (id)outputImage;
- (id)customAttributes;
- (id)init;
- (BOOL)_isIdentity;

@end
