@class PTEffectRingLightConfig, NSMutableData, PTMedianFilter, PTEffectFaceLuxEstimation;

@interface PTEffectRingLightEstimation : NSObject {
    int _frameIndex;
    double _lastFrameTimeSecondsScreenNitsEstimation;
    float _currentScreenNits;
    float _currentRingLightWidth;
    float _screenNitsDeadzone;
    float _EMAFactorPerFrame;
    float _faceLuxLevelFiltered;
    PTEffectFaceLuxEstimation *_faceLuxEstimation;
    struct PTEffectFaceLuxEstimationOutput { float faceLuxValue; float lumaToLuxFactor; float skinAreaToFullFrameFactor; float skinLumaFullRes; float lumaSumAll; float skinLumaSumAll; float skinSumAll; } _faceLuxLevel;
    BOOL _effectEnabled;
    PTMedianFilter *_globalLuxLevelFilter;
    PTEffectRingLightConfig *_ringlightConfig;
    float _deadZoneFactorPerFrame;
    float _effectEnableAtLux;
    float _effectDisableAtLux;
    float _effectMinAtLux;
    float _effectMaxAtLux;
    float _minNits;
    float _maxNits;
    float _effectStrength;
    NSMutableData *_effectStrengthData;
    float _minNitsMinEffectStrength;
    float _minNitsMaxEffectStrength;
    float _maxNitsMinEffectStrength;
    float _maxNitsMaxEffectStrength;
}

- (void)reset;
- (void).cxx_destruct;
- (void)updateDefaults:(id)a0;
- (float)computeNormalizedEffectStrength;
- (void)updateNitsBasedOnEffectStrength;
- (void)detectAdaptiveBehavior:(id)a0;
- (int)estimateScreenNits:(id)a0;
- (struct PTEffectFaceLuxEstimationOutput { float x0; float x1; float x2; float x3; float x4; float x5; float x6; })faceLuxLevel;
- (float)faceLuxLevelFiltered;
- (id)initWithMetalContext:(id)a0 humanDetections:(id)a1 effectDescriptor:(id)a2;
- (float)mapEffectStrengthToRingLightWidth:(float)a0;
- (float)mapEffectStrengthToScreenNits:(float)a0;
- (void)updateFaceLuxLevelFiltered:(float)a0 frameIndex:(int)a1;

@end
