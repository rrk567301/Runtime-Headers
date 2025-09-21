@class NSDictionary;

@interface BWActionCameraFlickerAvoidanceMonitor : NSObject {
    int _frameRateCompatibleFlickerFrequency;
    int _confidenceThreshold;
    int _confidenceHysteresis;
    char _frameRateAware;
    float _currentFrameRate;
    int _frameRateUpdateCounter;
    NSDictionary *_defaultMaxExposureDurationFrameworkOverrideByPortType;
}

@property (nonatomic) int flickerFrequency;

+ (void)initialize;

- (void)dealloc;
- (char)detectFlickerWithSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 fromCaptureStreamWithPortType:(id)a1;
- (id)initWithDefaultMaxExposureDurationFrameworkOverrideByPortType:(id)a0;

@end
