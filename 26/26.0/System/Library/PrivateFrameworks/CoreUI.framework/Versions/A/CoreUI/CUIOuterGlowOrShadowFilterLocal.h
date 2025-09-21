@class CIVector, CIColor, CIImage, NSNumber;

@interface CUIOuterGlowOrShadowFilterLocal : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIVector *inputOffset;
@property (retain, nonatomic) NSNumber *inputRange;
@property (retain, nonatomic) NSNumber *inputSize;
@property (retain, nonatomic) NSNumber *inputSpread;
@property (retain, nonatomic) CIColor *inputColor;

+ (id)customAttributes;
+ (id)filterWithName:(id)a0;

- (void)dealloc;
- (id)_kernel;
- (id)outputImage;
- (void)setDefaults;
- (id)_kernelWithImageMask;

@end
