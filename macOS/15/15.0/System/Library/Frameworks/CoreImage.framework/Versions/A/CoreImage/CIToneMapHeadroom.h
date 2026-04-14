@class CIImage, NSNumber;

@interface CIToneMapHeadroom : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputSourceHeadroom;
@property (retain, nonatomic) NSNumber *inputTargetHeadroom;

+ (id)customAttributes;

- (id)outputImage;
- (id)outputValue:(id)a0;
- (float)targetHeadroom;
- (struct Uniforms { float x0; float x1; float x2; float x3; float x4; float x5; float x6; })uniforms:(float)a0;

@end
