@class CIImage, NSNumber, CIColor;

@interface CUIOuterBevelEmbossFilterLocal : CIFilter {
    NSNumber *inputAltitude;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputSize;
@property (retain, nonatomic) NSNumber *inputAngle;
@property (retain, nonatomic) CIColor *inputHighlightColor;
@property (retain, nonatomic) CIColor *inputShadowColor;
@property (retain, nonatomic) NSNumber *inputSoften;

+ (id)filterWithName:(id)a0;

- (void)dealloc;
- (id)outputImage;
- (id)_kernelColorize;
- (id)_kernel;
- (id)_kernelColorizeWithImageMask;
- (id)customAttributes;

@end
