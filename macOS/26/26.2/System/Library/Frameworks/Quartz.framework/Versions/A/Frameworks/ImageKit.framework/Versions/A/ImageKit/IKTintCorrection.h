@class CIImage, NSNumber;

@interface IKTintCorrection : CIFilter {
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
