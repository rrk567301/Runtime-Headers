@class CIImage, NSNumber;

@interface IKTintCorrection : CIFilter {
    CIImage *inputImage;
    NSNumber *inputPower;
}

+ (id)filterWithName:(id)a0;
+ (void)registerFilter;

- (id)outputImage;
- (id)init;
- (BOOL)_isIdentity;
- (id)customAttributes;

@end
