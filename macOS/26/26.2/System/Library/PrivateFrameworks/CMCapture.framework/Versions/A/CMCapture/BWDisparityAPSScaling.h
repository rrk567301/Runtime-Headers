@interface BWDisparityAPSScaling : NSObject {
    float _focusRegionDisparityPercentile;
    float _focusRegionMinArea;
    float _focusRegionMinApsDistanceMeters;
    float _focusRegionMaxApsDistanceMeters;
    float _focusRegionMinDisparityDistanceMeters;
    float _focusRegionMaxDisparityDistanceMeters;
    float _scaleRecoveryMinScalingFactor;
    float _scaleRecoveryMaxScalingFactor;
    int _focusRegionDisparitySamplingRate;
}

+ (void)initialize;

- (id)initWithDepthScalingTuningParameters:(id)a0;
- (id)initWithPortType:(id)a0 sensorIDString:(id)a1;
- (BOOL)isAPSScalingNeededForSbuf:(struct opaqueCMSampleBuffer { } *)a0;
- (float)previewScalingFactorWithDisparityBuffer:(struct __CVBuffer { } *)a0 sbuf:(struct opaqueCMSampleBuffer { } *)a1;
- (float)stillImageScalingFactorWithDisparityBuffer:(struct __CVBuffer { } *)a0 sbuf:(struct opaqueCMSampleBuffer { } *)a1 scaleFactorFromEFL:(float)a2;

@end
