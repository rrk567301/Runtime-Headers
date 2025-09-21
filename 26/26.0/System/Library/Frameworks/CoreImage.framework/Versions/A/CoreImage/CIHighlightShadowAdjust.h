@class CIImage, NSNumber;

@interface CIHighlightShadowAdjust : CIFilter <_CIFilterProperties>

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputRadius;
@property (retain, nonatomic) NSNumber *inputShadowAmount;
@property (retain, nonatomic) NSNumber *inputHighlightAmount;

+ (id)customAttributes;

- (id)_kernelSnoB_v0;
- (id)_kernelSH_v1;
- (id)_kernelSH_v2;
- (id)outputImage;
- (id)_kernelSHnoB_v1;
- (BOOL)_isIdentity;
- (id)_kernelSH_v0;
- (id)_outputProperties;
- (int)_defaultVersion;
- (int)_maxVersion;
- (id)_initFromProperties:(id)a0;
- (id)_kernelSHnoB_v0;
- (void)setDefaults;
- (id)_kernelSHnoB_v2;

@end
