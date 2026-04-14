@class NSObject;
@protocol CBRampManagerI;

@interface CBGammaContrastPreservation : CBChromaticCorrection

@property (nonatomic) float AODFadeFactor;
@property (nonatomic) float enableFactor;
@property (retain) NSObject<CBRampManagerI> *rampManager;

- (id)initWithParams:(id)a0;
- (void)dealloc;
- (float)currentStrength;
- (float)combinedFactor;
- (void)handleAutoBrightnessStateUpdate:(BOOL)a0;

@end
