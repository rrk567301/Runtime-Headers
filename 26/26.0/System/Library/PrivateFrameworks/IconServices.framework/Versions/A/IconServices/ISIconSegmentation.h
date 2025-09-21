@class ISForegroundSegmentation, ISBiasedGrayscaleConversion;

@interface ISIconSegmentation : NSObject {
    ISForegroundSegmentation *_strictForegroundSegmentation;
    ISForegroundSegmentation *_looseForegroundSegmentation;
    unsigned long long _idiom;
    int _maxNumberOfClusteringSamples;
}

@property (readonly, nonatomic) ISBiasedGrayscaleConversion *grayscaleConversion;
@property (nonatomic) BOOL enableColorEnhancementInDarkImage;
@property (nonatomic) BOOL enableRecoloringSingleForegroundColorWithGradientBackgroundInDarkImage;

- (id)initWithIdiom:(unsigned long long)a0;
- (void).cxx_destruct;
- (BOOL)_computeImageWithCGImage:(struct CGImage { } *)a0 ucharTintable:(char *)a1 ucharTintableOpacity:(char *)a2 ucharSolariumTintable:(void *)a3 ucharForeground:(void *)a4 ucharForegroundOpacity:(char *)a5 ucharDark:(void *)a6 feedback:(id *)a7;
- (BOOL)_computeImageWithWidth:(int)a0 height:(int)a1 colorSpace:(struct CGColorSpace { } *)a2 samples:(struct { int x0; int x1; int x2; unsigned int x3; void *x4; })a3 foregroundMask:(struct { int x0; int x1; int x2; BOOL x3; union { char **x0; } x4; })a4 ucharTintable:(char *)a5 ucharTintableOpacity:(char *)a6 ucharSolariumTintable:(void *)a7 ucharForeground:(void *)a8 ucharForegroundOpacity:(char *)a9 ucharDark:(void *)a10 feedback:(id *)a11;
- (BOOL)_computeImageWithWidth:(int)a0 height:(int)a1 strict:(BOOL)a2 colorSpace:(struct CGColorSpace { } *)a3 samples:(struct { int x0; int x1; int x2; unsigned int x3; void *x4; })a4 foregroundMask:(struct { int x0; int x1; int x2; BOOL x3; union { char **x0; } x4; })a5 ucharTintable:(char *)a6 ucharTintableOpacity:(char *)a7 ucharSolariumTintable:(void *)a8 ucharForeground:(void *)a9 ucharForegroundOpacity:(char *)a10 ucharDark:(void *)a11 feedback:(id *)a12;
- (struct CGImage { } *)createDarkImageWithCGImage:(struct CGImage { } *)a0;
- (struct CGImage { } *)createDarkImageWithCGImage:(struct CGImage { } *)a0 feedback:(id *)a1;
- (struct CGImage { } *)createForegroundImageWithCGImage:(struct CGImage { } *)a0 feedback:(id *)a1;
- (struct CGImage { } *)createSolariumTintableImageWithCGImage:(struct CGImage { } *)a0 feedback:(id *)a1;
- (struct CGImage { } *)createTintableImageMaskWithCGImage:(struct CGImage { } *)a0 tintableOpacityImageMask:(struct CGImage **)a1;

@end
