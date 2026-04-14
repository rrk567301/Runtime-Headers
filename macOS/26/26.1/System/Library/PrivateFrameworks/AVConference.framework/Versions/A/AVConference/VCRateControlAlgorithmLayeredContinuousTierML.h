@class VCRateControlMachineLearningInference;

@interface VCRateControlAlgorithmLayeredContinuousTierML : VCRateControlAlgorithmLayeredContinuousTier {
    VCRateControlMachineLearningInference *_model;
    struct tagVCRateControlMachineLearningInferenceInput { float targetBitrate; float bitrate; float bandwidthEstimate; float audioPacketLossRate; float videoPacketLossRate; float owrd; float nowrd; float roundTripTime; float bytesInFlight; float basebandExpectedQueuingDelay; float basebandAverageBitrate; float maxTargetBitrate; float mode; float localRAT; float remoteRAT; float timestampDelta; float rateControlTimeDelta; float rateControlTime; } _inferenceInputs;
    struct tagVCRateControlMachineLearningInferenceOutput { float value; float targetBitrate; float actionLogProbability; float entropy; } _inferenceOutputs;
    double _previousRateControlTimeForDelta;
    double _previousArrivalTimeForDelta;
    double _startingRateControlTime;
    int _machineLearningModeAfterDisengagement;
    unsigned int _numberOfStableTimesteps;
    double _smoothedTargetBitrate;
    double _firstRateControlTime;
    double _targetBitrateStabilityCriteria;
}

- (void)dealloc;
- (id)initWithModelPath:(id)a0;
- (BOOL)setUpVTable;

@end
