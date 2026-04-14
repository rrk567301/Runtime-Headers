@class CIImage, CIVector, NSNumber;

@interface CIZoomBlur : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIVector *inputCenter;
@property (retain, nonatomic) NSNumber *inputAmount;

+ (id)customAttributes;

- (id)valueForUndefinedKey:(id)a0;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (id)_kernel;
- (BOOL)_isIdentity;
- (id)outputImage;
- (id)_blur:(id)a0 pass:(int)a1 weightsFactor:(float)a2;
- (id)_kernelNew;

@end
