@class NSString, NSDictionary;

@interface BWNondisruptiveSwitchingFormatSelector : NSObject {
    NSString *_portType;
    float _baseZoomFactor;
    NSDictionary *_zoomFactorToNondisruptiveSwitchingFormatIndexSIFRBinned;
    NSDictionary *_zoomFactorToNondisruptiveSwitchingFormatIndexSIFRNonBinned;
    int _ultraHighResolutionNondisruptiveStreamingFormatIndex;
    int _mainFormatSIFRBinningFactor;
    int _videoStabilizationStrength;
    NSDictionary *_quadraSubPixelSwitchingParameters;
    struct BWSmartCameraScene { char enabled; char confident; float confidenceFilterRatio; float filteredConfidence; float confidenceThreshold; float confidenceHysteresisValueLag; short confidenceHysteresisTemporalLagBeforeConfident; short confidenceHysteresisTemporalLagBeforeNotConfident; short currentTemporalHysteresis; char resetTemporalHysteresisAndFilteringOnNextUpdate; char *name; } _quadraSubPixelSceneBasedOnNormalizedSNR;
    struct BWSmartCameraScene { char enabled; char confident; float confidenceFilterRatio; float filteredConfidence; float confidenceThreshold; float confidenceHysteresisValueLag; short confidenceHysteresisTemporalLagBeforeConfident; short confidenceHysteresisTemporalLagBeforeNotConfident; short currentTemporalHysteresis; char resetTemporalHysteresisAndFilteringOnNextUpdate; char *name; } _quadraSubPixelSceneBasedOnLuxLevel;
    struct BWSmartCameraScene { char enabled; char confident; float confidenceFilterRatio; float filteredConfidence; float confidenceThreshold; float confidenceHysteresisValueLag; short confidenceHysteresisTemporalLagBeforeConfident; short confidenceHysteresisTemporalLagBeforeNotConfident; short currentTemporalHysteresis; char resetTemporalHysteresisAndFilteringOnNextUpdate; char *name; } _quadraSubPixelSceneBasedOnGain;
    char _quadraSubPixelSceneMonitoringForActionCameraEnabled;
    char _quadraSubPixelSceneMonitoringForDigitalFlashEnabled;
    char _quadraSubPixelSceneMonitoringForVideoEnabled;
    char _quadraSubPixelSceneMonitoringForPhotoEnabled;
    float _lastZoomFactor;
    int _lastDigitalFlashMode;
    char _lastStationary;
    int _lastNondisruptiveSwitchingFormatIndex;
    NSString *_lastQuadraSubPixelSwitchingIntent;
}

+ (void)initialize;

- (void)dealloc;
- (void)setVideoStabilizationStrength:(int)a0;
- (int)formatIndexForZoomFactor:(float)a0 frameStatistics:(id)a1 imageControlMode:(int)a2 stillImageDigitalFlashMode:(int)a3 isStationary:(char)a4 isSecondaryStream:(char)a5 binnedSIFROnSecondaryStreamAllowed:(char)a6 ignoreZoomFactorAndQuadraSubPixelSceneMonitoring:(char)a7 ultraHighResolutionZeroShutterLagEnabled:(char)a8;
- (id)initWithPortType:(id)a0 quadraSubPixelSwitchingParameters:(id)a1 baseZoomFactor:(float)a2 zoomFactorToNondisruptiveSwitchingFormatIndexSIFRBinned:(id)a3 zoomFactorToNondisruptiveSwitchingFormatIndexSIFRNonBinned:(id)a4 ultraHighResolutionNondisruptiveStreamingFormatIndex:(int)a5 mainFormatSIFRBinningFactor:(int)a6;

@end
