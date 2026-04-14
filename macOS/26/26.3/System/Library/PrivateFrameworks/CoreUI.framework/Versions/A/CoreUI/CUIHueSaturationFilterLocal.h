@class CIImage, NSNumber, CIColor;

@interface CUIHueSaturationFilterLocal : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (copy, nonatomic) NSNumber *inputCenterAngle;
@property (copy, nonatomic) NSNumber *inputAngleWidth;
@property (copy, nonatomic) CIColor *inputTintColor;

+ (id)customAttributes;
+ (id)filterWithName:(id)a0;

- (id)_kernel;
- (id)outputImage;
- (void)dealloc;
- (void)setDefaults;
- (struct CGColor { } *)_newColorByProcessingColor:(struct CGColor { } *)a0;

@end
