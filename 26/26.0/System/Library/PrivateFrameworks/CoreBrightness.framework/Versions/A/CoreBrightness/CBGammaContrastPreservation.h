@class NSObject;
@protocol CBRampManagerI;

@interface CBGammaContrastPreservation : CBChromaticCorrection

@property (nonatomic) float AODFadeFactor;
@property (nonatomic) float enableFactor;
@property (retain) NSObject<CBRampManagerI> *rampManager;

- (void)dealloc;
- (id)initWithParams:(id)a0;
- (float)currentStrength;
- (float)combinedFactor;
- (void)handleAutoBrightnessStateUpdate:(BOOL)a0;

@end
