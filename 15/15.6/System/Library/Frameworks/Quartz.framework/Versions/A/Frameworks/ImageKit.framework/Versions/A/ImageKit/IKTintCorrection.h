@class CIImage, NSNumber;

@interface IKTintCorrection : CIFilter {
    CIImage *inputImage;
    NSNumber *inputPower;
}

+ (id)filterWithName:(id)a0;
+ (void)registerFilter;

- (id)init;
- (id)outputImage;
- (id)customAttributes;
- (char)_isIdentity;

@end
