@class CIImage, NSNumber;

@interface CUIScaleClampFilterLocal : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputScale;

+ (id)customAttributes;
+ (id)filterWithName:(id)a0;

- (id)outputImage;
- (void)setDefaults;
- (id)_kernel;
- (void)dealloc;

@end
