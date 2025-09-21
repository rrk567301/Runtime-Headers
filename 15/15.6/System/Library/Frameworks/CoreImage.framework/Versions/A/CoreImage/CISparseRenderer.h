@class CIImage, NSDictionary, NSNumber;

@interface CISparseRenderer : CIFilter

@property (retain) CIImage *inputImage;
@property (retain) CIImage *inputMatteImage;
@property (retain, nonatomic) NSDictionary *inputTuningParameters;
@property (copy, nonatomic) NSNumber *inputScale;
@property (copy, nonatomic) NSNumber *inputApertureScaling;
@property (copy, nonatomic) NSNumber *inputDraftMode;
@property (copy, nonatomic) NSNumber *inputAperture;

+ (id)customAttributes;

- (id)outputImage;
- (char)_useD2XRenderer;
- (id)_kernel:(char)a0 alpha:(char)a1;
- (id)_lutKernel:(char)a0 alpha:(char)a1;
- (id)_packageParams:(char)a0 extent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 image:(id)a2 haveAlpha:(char)a3;
- (id)baseVecsLUT:(unsigned int)a0;
- (id)baseVecsLUTGenerator;
- (id)stepsLUT:(unsigned int)a0;
- (id)stepsLUTGenerator;

@end
