@class NSDictionary;

@interface BWActionCameraFlickerAvoidanceMonitor : NSObject {
    int _frameRateCompatibleFlickerFrequency;
    int _confidenceThreshold;
    int _confidenceHysteresis;
    BOOL _frameRateAware;
    float _currentFrameRate;
    int _frameRateUpdateCounter;
    NSDictionary *_defaultMaxExposureDurationFrameworkOverrideByPortType;
}

@property (nonatomic) int flickerFrequency;

+ (void)initialize;

- (void)dealloc;
- (id)initWithDefaultMaxExposureDurationFrameworkOverrideByPortType:(id)a0;
- (BOOL)detectFlickerWithSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 fromCaptureStreamWithPortType:(id)a1;

@end
