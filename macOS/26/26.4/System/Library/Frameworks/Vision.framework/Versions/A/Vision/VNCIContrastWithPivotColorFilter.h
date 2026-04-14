@class NSNumber;

@interface VNCIContrastWithPivotColorFilter : VNCIFilter

@property (copy, nonatomic) NSNumber *inputContrast;
@property (copy, nonatomic) NSNumber *inputPivot;

- (void).cxx_destruct;
- (id)outputImage;
- (id)init;
- (id)initWithInputParameters:(id)a0;

@end
