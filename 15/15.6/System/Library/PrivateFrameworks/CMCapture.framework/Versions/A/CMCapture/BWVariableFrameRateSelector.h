@class NSMutableDictionary, BWInferenceResult;

@interface BWVariableFrameRateSelector : NSObject {
    float _suggestedFrameRate;
    int _mode;
    float _integrationTimeFrom60To30;
    float _integrationTimeFrom30To24;
    float _integrationTimeFrom30BackTo60;
    NSMutableDictionary *_vfrAEMaxGainsByPortType;
    NSMutableDictionary *_variableFrameRateInfo;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _variableFrameRateInfoLock;
    int _frameRateConversionStatus;
    char _lastStabilityFlag;
    char _deviceMotionEnabled;
    char _sceneMotionEnabled;
    char _zoomInProgress;
    struct BWSmartCameraScene { char enabled; char confident; float confidenceFilterRatio; float filteredConfidence; float confidenceThreshold; float confidenceHysteresisValueLag; short confidenceHysteresisTemporalLagBeforeConfident; short confidenceHysteresisTemporalLagBeforeNotConfident; short currentTemporalHysteresis; char resetTemporalHysteresisAndFilteringOnNextUpdate; char *name; } _sceneMotionAEInLowLight;
    struct BWSmartCameraScene { char enabled; char confident; float confidenceFilterRatio; float filteredConfidence; float confidenceThreshold; float confidenceHysteresisValueLag; short confidenceHysteresisTemporalLagBeforeConfident; short confidenceHysteresisTemporalLagBeforeNotConfident; short currentTemporalHysteresis; char resetTemporalHysteresisAndFilteringOnNextUpdate; char *name; } _sceneMotionAEInHighLight;
    struct BWSmartCameraScene { char enabled; char confident; float confidenceFilterRatio; float filteredConfidence; float confidenceThreshold; float confidenceHysteresisValueLag; short confidenceHysteresisTemporalLagBeforeConfident; short confidenceHysteresisTemporalLagBeforeNotConfident; short currentTemporalHysteresis; char resetTemporalHysteresisAndFilteringOnNextUpdate; char *name; } _deviceMotionInLowLight;
    struct BWSmartCameraScene { char enabled; char confident; float confidenceFilterRatio; float filteredConfidence; float confidenceThreshold; float confidenceHysteresisValueLag; short confidenceHysteresisTemporalLagBeforeConfident; short confidenceHysteresisTemporalLagBeforeNotConfident; short currentTemporalHysteresis; char resetTemporalHysteresisAndFilteringOnNextUpdate; char *name; } _deviceMotionInHighLight;
    struct BWSmartCameraScene { char enabled; char confident; float confidenceFilterRatio; float filteredConfidence; float confidenceThreshold; float confidenceHysteresisValueLag; short confidenceHysteresisTemporalLagBeforeConfident; short confidenceHysteresisTemporalLagBeforeNotConfident; short currentTemporalHysteresis; char resetTemporalHysteresisAndFilteringOnNextUpdate; char *name; } _aeLimits;
    struct BWSmartCameraScene { char enabled; char confident; float confidenceFilterRatio; float filteredConfidence; float confidenceThreshold; float confidenceHysteresisValueLag; short confidenceHysteresisTemporalLagBeforeConfident; short confidenceHysteresisTemporalLagBeforeNotConfident; short currentTemporalHysteresis; char resetTemporalHysteresisAndFilteringOnNextUpdate; char *name; } _zoomRequest;
    struct BWSmartCameraScene { char enabled; char confident; float confidenceFilterRatio; float filteredConfidence; float confidenceThreshold; float confidenceHysteresisValueLag; short confidenceHysteresisTemporalLagBeforeConfident; short confidenceHysteresisTemporalLagBeforeNotConfident; short currentTemporalHysteresis; char resetTemporalHysteresisAndFilteringOnNextUpdate; char *name; } _flickerDetected;
    struct BWSmartCameraScene { char enabled; char confident; float confidenceFilterRatio; float filteredConfidence; float confidenceThreshold; float confidenceHysteresisValueLag; short confidenceHysteresisTemporalLagBeforeConfident; short confidenceHysteresisTemporalLagBeforeNotConfident; short currentTemporalHysteresis; char resetTemporalHysteresisAndFilteringOnNextUpdate; char *name; } _waterSceneDetected;
    float _previousEITForAELimitsReached;
    int _globalMotionAE;
    NSMutableDictionary *_highLightSceneMotionThresholdsByPortType;
    NSMutableDictionary *_lowLightSceneMotionThresholdsByPortType;
    struct { double w; double x; double y; double z; } _lastQuaternion;
    struct { double w; double x; double y; double z; } _lastQuaternionDiff;
    char _testRun;
    char _frameRateConversionInVISNodeEnabled;
    BWInferenceResult *_mostRecentInferenceResult;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _smartCameraLock;
    struct { int reason; int mode; float fromFR; float toFR; struct { long long value; int timescale; unsigned int flags; long long epoch; } time; char isSceneStable; char aeLimitsReached; char waterSceneDetected; int currentFrameRate; } _state;
}

@property (readonly, nonatomic) float suggestedFrameRate;

+ (void)initialize;

- (void)dealloc;
- (void)addAttachmentsToSamplebuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (float)getAEMaxGainForPortType:(id)a0 suggestedFrameRate:(double)a1;
- (id)initWithPortTypes:(id)a0 forParameters:(id)a1 frameRateSwitchBasedOnMotionDisabled:(char)a2;
- (void)processSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 frameStatistics:(id)a1 currentFrameRate:(float)a2 aeMaxGain:(float)a3 zoomInProgress:(char)a4 mostRecentInferenceResult:(id)a5;

@end
