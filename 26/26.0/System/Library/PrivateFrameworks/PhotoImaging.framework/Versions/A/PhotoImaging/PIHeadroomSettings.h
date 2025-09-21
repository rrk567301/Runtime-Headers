@interface PIHeadroomSettings : NSObject

@property (nonatomic) double blurRadius;
@property (nonatomic) double blurMaskTopLocation;
@property (nonatomic) double falloffHeight;
@property (nonatomic) double gradientHeight;
@property (nonatomic) double gradientWhite;
@property (nonatomic) double highKeyGradientWhite;
@property (nonatomic) double bottomGradientAlpha;
@property (nonatomic) double bottomGradientTopLocation;
@property (nonatomic) double bottomGradientBottomLocation;
@property (nonatomic) double topGradientAlpha;
@property (nonatomic) double topGradientTopLocation;
@property (nonatomic) double topGradientBottomLocation;
@property (nonatomic) BOOL useSoftLightBlendingModeForTopGradient;
@property (nonatomic) double depthTop;
@property (nonatomic) double depthBottom;
@property (nonatomic) double vignetteRad;
@property (nonatomic) double vignetteIntensity;
@property (nonatomic) double vignetteFalloff;
@property (nonatomic) double aperture;
@property (nonatomic) double noise;
@property (nonatomic) double center;
@property (nonatomic) BOOL useLinearBlur;

+ (id)sharedInstance;

- (id)init;
- (void)_setDefaultValues;

@end
