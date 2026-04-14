@class CIImage, NSNumber;

@interface CUIScaleClampFilterLocal : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputScale;

+ (id)customAttributes;
+ (id)filterWithName:(id)a0;

- (void)dealloc;
- (id)_kernel;
- (id)outputImage;
- (void)setDefaults;

@end
