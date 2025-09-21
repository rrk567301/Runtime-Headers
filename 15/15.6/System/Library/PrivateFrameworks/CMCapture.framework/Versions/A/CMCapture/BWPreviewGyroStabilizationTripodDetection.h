@interface BWPreviewGyroStabilizationTripodDetection : NSObject {
    char _stationary[60];
    int _inputIndex;
    int _ringCount;
    int _previousLikelyPhysicalTripodCount;
    float _tripodMaxAngleThresholdInstant;
    float _tripodMaxAngleThresholdAccumulate;
    float _physicalTripodLikelyMaxAngleThreshold;
    float _physicalTripodGuaranteedMaxAngleThreshold;
}

@property (readonly, nonatomic) char empty;
@property (readonly, nonatomic) char isStationary;
@property (readonly, nonatomic) char isLikelyPhysicalTripod;
@property (readonly, nonatomic) char isPhysicalTripod;

- (void)reset;
- (void)_detectPhysicalTripodUsingMaxAngleInstant:(float)a0 frameRateNormalization:(float)a1;
- (char)_isCameraStationary;
- (void)_updateWithMaxAngleInstant:(float)a0 maxAngleAccumulate:(float)a1;
- (void)detectTripodStateUsingMaxAngleInstant:(float)a0 maxAngleAccumulate:(float)a1 frameRateNormalizationFactor:(float)a2;
- (id)initWithTripodDetectionThresholds:(float)a0 tripodMaxAngleThresholdAccumulate:(float)a1 physicalTripodLikelyMaxAngleThreshold:(float)a2 physicalTripodGuaranteedMaxAngleThreshold:(float)a3;

@end
