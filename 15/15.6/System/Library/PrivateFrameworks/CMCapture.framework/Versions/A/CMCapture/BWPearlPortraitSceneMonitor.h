@class NSString;

@interface BWPearlPortraitSceneMonitor : NSObject <BWPortraitSceneMonitor> {
    int _numberOfFramesToWaitForAEAndLTMToStabilize;
    float _sdofDepthQualitySmoothingFactor;
    float _luxLevelSmoothingFactor;
    int _numberOfDisabledFramesInARow;
    int _numberOfFramesToStayEnabledThreshold;
    unsigned short _sdofTooBrightLuxLevelThreshold;
    unsigned short _sdofTooBrightMaxLuxLevelThreshold;
    float _sdofTooBrightDepthQualityMinThreshold;
    float _sdofDepthQualityKCount;
    float _sdofTooCloseDepthDistanceThreshold;
    float _sdofTooFarDepthDistanceThreshold;
    float _sdofTooBrightTooFarDepthDistanceThreshold;
    int _sdofNumberOfFramesSinceLastFaceThreshold;
    float _stageTooBrightDepthQualityThreshold;
    float _stageTooCloseDepthDistanceThreshold;
    float _stageTooFarDepthDistanceThreshold;
    float _stageBackgroundTooFarDepthQualityThreshold;
    unsigned short _stageBackgroundTooFarLuxLevelThreshold;
    int _stageFaceNumberOfFramesSinceLastFaceThreshold;
    float _closeDepthDistanceAverage;
    float _sdofDepthQuality;
    float _sdofDepthQualityFiltered;
    float _stageDepthQuality;
    float _luxLevelFiltered;
    char _aeStableAfterStartStreaming;
    int _sdofNumFramesSinceAEBecameStable;
    char _depthSensorOccluded;
    char _stageFaceDetected;
    int _numberOfFramesSinceLastFace;
    char _stageFaceHasBeenSeen;
    int _stageMostRecentFacesCount;
}

@property (nonatomic) char portraitSceneMonitoringRequiresStageThresholds;
@property (readonly, nonatomic) float focusDistanceToMaxAllowedFocusDistanceRatio;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)dealloc;
- (void)focusScanDidComplete;
- (id)initWithTuningParameters:(id)a0 attachDebugFrameStatistics:(char)a1;
- (char)resolveSDOFStatusWithSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 frameStatisticsByPortType:(id)a1 sceneFlags:(unsigned long long)a2 flashOrTorchWillBeActive:(char)a3 digitalFlashWillFire:(char)a4 thermalPressureLevel:(int)a5 peakPowerPressureLevel:(int)a6 effectStatus:(int *)a7 stagePreviewStatus:(int *)a8;
- (void)setAutoFocusInProgress:(char)a0 focusLocked:(char)a1 oneShotFocusScanInProgress:(char)a2;
- (void)setSDOFBackgroundShiftSum:(float)a0 invalidShiftRatio:(float)a1 closeCanonicalDisparityAverage:(float)a2 faceCanonicalDisparityAverages:(id)a3 erodedForegroundRatio:(float)a4 foregroundRatio:(float)a5 occluded:(char)a6 faces:(id)a7 personSegmentationRatio:(float)a8;

@end
