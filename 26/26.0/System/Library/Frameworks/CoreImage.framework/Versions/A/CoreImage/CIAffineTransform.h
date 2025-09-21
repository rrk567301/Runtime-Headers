@class CIImage, NSAffineTransform;

@interface CIAffineTransform : CIFilter <_CIFilterProperties>

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSAffineTransform *inputTransform;

+ (id)customAttributes;

- (id)outputImage;
- (id)_outputProperties;
- (id)_initFromProperties:(id)a0;

@end
