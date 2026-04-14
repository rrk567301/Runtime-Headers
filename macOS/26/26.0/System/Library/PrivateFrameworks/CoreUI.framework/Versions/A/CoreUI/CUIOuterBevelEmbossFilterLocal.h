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
- (id)_kernel;
- (id)outputImage;
- (id)customAttributes;
- (id)_kernelColorize;
- (id)_kernelColorizeWithImageMask;

@end
