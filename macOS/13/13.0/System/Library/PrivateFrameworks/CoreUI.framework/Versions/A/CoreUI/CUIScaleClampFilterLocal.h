@class CIImage, NSNumber;

@interface CUIScaleClampFilterLocal : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputScale;

+ (id)filterWithName:(id)a0;
+ (id)customAttributes;

- (void)dealloc;
- (void)setDefaults;
- (id)outputImage;
- (id)_kernel;

@end
