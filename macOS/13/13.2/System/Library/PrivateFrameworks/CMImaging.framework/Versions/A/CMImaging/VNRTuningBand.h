@class GainValueArray;

@interface VNRTuningBand : NSObject {
    GainValueArray *_deghostPatchSigmaScalingGVA;
    GainValueArray *_deghostBoostFactorScalingGVA;
    GainValueArray *_fusionStrengthScalingGVA;
    float _deghostPatchSigmaScaling;
    float _deghostBoostFactorScaling;
    float _fusionStrengthScaling;
}

- (void).cxx_destruct;
- (id)initWithTuningParamsDict:(id)a0;
- (int)updateWithGain:(float)a0;

@end
