@class GainValueArray, NSArray;

@interface VNRTuning : NSObject {
    GainValueArray *_deghostPatchSigmaLumaGVA;
    GainValueArray *_deghostPatchSigmaChromaGVA;
    GainValueArray *_deghostBoostFactorGVA;
    GainValueArray *_fusionStrengthLumaGVA;
    GainValueArray *_fusionStrengthChromaGVA;
    GainValueArray *_ghostAttenuationLumaGVA;
    GainValueArray *_ghostAttenuationBreakthroughSigmaLumaGVA;
    GainValueArray *_ghostAttenuationChromaGVA;
    GainValueArray *_ghostAttenuationBreakthroughSigmaChromaGVA;
    float _deghostPatchSigmaLuma;
    float _deghostPatchSigmaChroma;
    float _deghostBoostFactor;
    float _fusionStrengthLuma;
    float _fusionStrengthChroma;
    float _ghostAttenuationLuma;
    float _ghostAttenuationBreakthroughSigmaLuma;
    float _ghostAttenuationChroma;
    float _ghostAttenuationBreakthroughSigmaChroma;
    NSArray *_lumaBands;
    NSArray *_chromaBands;
}

- (void).cxx_destruct;
- (id)initWithTuningParamsDict:(id)a0;
- (int)updateWithGain:(float)a0;

@end
