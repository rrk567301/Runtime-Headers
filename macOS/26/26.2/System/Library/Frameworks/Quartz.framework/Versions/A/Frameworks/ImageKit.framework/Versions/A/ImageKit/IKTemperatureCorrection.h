@class CIImage, NSNumber;

@interface IKTemperatureCorrection : CIFilter {
    CIImage *inputImage;
    NSNumber *inputPower;
}

+ (id)filterWithName:(id)a0;
+ (void)registerFilter;

- (BOOL)_isIdentity;
- (id)outputImage;
- (id)customAttributes;
- (id)init;

@end
