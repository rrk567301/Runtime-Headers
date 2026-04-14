@class CIImage, NSNumber, NSData;

@interface CISmartToneFilter : CIFilter {
    CIImage *_cubeImage;
    NSData *_cubeData;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputExposure;
@property (retain, nonatomic) NSNumber *inputContrast;
@property (retain, nonatomic) NSNumber *inputBrightness;
@property (retain, nonatomic) NSNumber *inputShadows;
@property (retain, nonatomic) NSNumber *inputHighlights;
@property (retain, nonatomic) NSNumber *inputBlack;
@property (retain, nonatomic) NSNumber *inputRawHighlights;
@property (retain, nonatomic) NSNumber *inputLocalLight;
@property (retain, nonatomic) NSData *inputLightMap;
@property (retain, nonatomic) NSNumber *inputUseCube;
@property (retain, nonatomic) id inputUseCubeColorSpace;

+ (id)customAttributes;

- (BOOL)_isIdentity;
- (id)outputImage;
- (void)setValue:(id)a0 forKey:(id)a1;
- (id)_kernelBneg;
- (id)_kernelBpos;
- (id)_kernelH;
- (id)_kernelRH;
- (id)_kernelC;
- (void)dealloc;

@end
