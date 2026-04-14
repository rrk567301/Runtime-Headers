@class CIImage;

@interface CUINarrowBlur15 : CIFilter

@property (retain, nonatomic) CIImage *inputImage;

- (id)outputImage;

@end
