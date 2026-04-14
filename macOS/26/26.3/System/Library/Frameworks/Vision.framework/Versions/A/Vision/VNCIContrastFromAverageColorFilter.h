@class NSNumber;

@interface VNCIContrastFromAverageColorFilter : VNCIFilter

@property (copy, nonatomic) NSNumber *inputContrast;

- (id)init;
- (id)outputImage;
- (void).cxx_destruct;
- (id)initWithInputParameters:(id)a0;

@end
