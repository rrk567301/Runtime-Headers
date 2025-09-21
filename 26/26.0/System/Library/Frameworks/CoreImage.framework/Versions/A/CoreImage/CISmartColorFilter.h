@class CIImage, NSNumber;

@interface CISmartColorFilter : CIFilter {
    CIImage *_cubeImage;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputVibrancy;
@property (retain, nonatomic) NSNumber *inputContrast;
@property (retain, nonatomic) NSNumber *inputCast;
@property (retain, nonatomic) NSNumber *inputUseCube;
@property (retain, nonatomic) id inputUseCubeColorSpace;

+ (id)customAttributes;

- (void)dealloc;
- (id)outputImage;
- (BOOL)_isIdentity;
- (void)setValue:(id)a0 forKey:(id)a1;
- (id)_kernelCNeg;
- (id)_kernelCPos;
- (id)_kernelCast;
- (id)_kernelV_gt1;
- (id)_kernelV_lt1;

@end
