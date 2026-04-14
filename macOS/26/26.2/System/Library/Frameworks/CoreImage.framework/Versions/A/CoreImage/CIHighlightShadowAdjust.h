@class CIImage, NSNumber;

@interface CIHighlightShadowAdjust : CIFilter <_CIFilterProperties>

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputRadius;
@property (retain, nonatomic) NSNumber *inputShadowAmount;
@property (retain, nonatomic) NSNumber *inputHighlightAmount;

+ (id)customAttributes;

- (BOOL)_isIdentity;
- (id)outputImage;
- (id)_kernelSnoB_v0;
- (int)_defaultVersion;
- (id)_kernelSH_v1;
- (int)_maxVersion;
- (void)setDefaults;
- (id)_kernelSHnoB_v1;
- (id)_outputProperties;
- (id)_initFromProperties:(id)a0;
- (id)_kernelSHnoB_v0;
- (id)_kernelSH_v2;
- (id)_kernelSH_v0;
- (id)_kernelSHnoB_v2;

@end
