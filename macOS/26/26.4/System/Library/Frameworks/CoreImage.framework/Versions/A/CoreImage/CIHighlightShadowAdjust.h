@class CIImage, NSNumber;

@interface CIHighlightShadowAdjust : CIFilter <_CIFilterProperties>

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputRadius;
@property (retain, nonatomic) NSNumber *inputShadowAmount;
@property (retain, nonatomic) NSNumber *inputHighlightAmount;

+ (id)customAttributes;

- (void)setDefaults;
- (id)_kernelSH_v0;
- (id)_kernelSnoB_v0;
- (id)_kernelSHnoB_v1;
- (int)_defaultVersion;
- (id)_kernelSHnoB_v2;
- (id)_kernelSH_v2;
- (id)outputImage;
- (int)_maxVersion;
- (id)_kernelSH_v1;
- (BOOL)_isIdentity;
- (id)_outputProperties;
- (id)_kernelSHnoB_v0;
- (id)_initFromProperties:(id)a0;

@end
