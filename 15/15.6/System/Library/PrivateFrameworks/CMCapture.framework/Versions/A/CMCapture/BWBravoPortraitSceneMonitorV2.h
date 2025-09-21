@class NSString, NSArray;

@interface BWBravoPortraitSceneMonitorV2 : NSObject <BWPortraitSceneMonitor> {
    int _numberOfFramesWithStableFocusThreshold;
    char _oneShotFocusScanInProgress;
    char _focusLocked;
    int _numFramesSinceFocusLocked;
    int _numFramesSinceFocusBecameStable;
    char _focusHasBeenAttainedAfterStart;
    int _numFramesSinceFocusFirstAttainedStability;
    char _focusIsStationaryBeyondThreshold;
    char _subjectTooCloseMonitoringEnabled;
    char _subjectTooCloseMonitoringForcingWideLens;
    float _subjectTooCloseFocusDistanceThreshold;
    float _subjectTooCloseHysteresis;
    char _subjectIsTooClose;
    char _subjectTooClosePreviousFrame;
    char _subjectTooFarMonitoringEnabled;
    float _subjectTooFarFocusDistanceThreshold;
    float _subjectTooFarBackgroundShiftSumTooLowThreshold;
    char _subjectTooFarDistanceThresholdReached;
    float _subjectTooFarDistanceThresholdHysteresis;
    char _backgroundShiftSumTooLowThresholdReached;
    float _subjectTooFarBackGroundShiftSumIsTooLowHysteresis;
    float _jasperDistanceAtFocus;
    char _subjectIsTooFarDigitalFlash;
    char _subjectIsTooFarForStageDigitalFlash;
    float _subjectTooFarDigitalFlashThreshold;
    float _stageTooFarDigitalFlashThreshold;
    float _sceneTooDarkGainThresholdHard;
    float _jasperDistanceAtFocusSmoothingFactor;
    char _subjectIsTooFar;
    char _subjectIsTooFarForStage;
    char _subjectIsTooFarForStageNoFaces;
    char _deliveryOfShiftsHasStarted;
    float _backgroundShiftSumSmoothed;
    float _backgroundShiftSumSmoothingTrend;
    float _backgroundShiftSumSmoothingFactor;
    float _backgroundShiftSumSmoothingTrendUpdateFactor;
    float _invalidShiftRatioSmoothed;
    float _invalidShiftRatioSmoothingFactor;
    char _sceneTooDarkMonitoringEnabled;
    float _sceneTooDarkGainThreshold;
    float _sceneTooDarkAEAverageAETargetFractionThreshold;
    float _sceneTooDarkAEAverageAETargetFractionThresholdHysteresisLag;
    char _sceneIsTooDark;
    char _stageFaceMonitoringEnabled;
    int _stageFaceNumberOfFramesSinceLastFace;
    char _stageFaceHasBeenSeen;
    int _stageFaceNumberOfFramesSinceLastFaceThreshold;
    NSArray *_stageMostRecentFaces;
    char _stageTooFarMonitoringEnabled;
    float _stageTooFarFocusDistanceThreshold;
    char _stageTooFarDistanceThresholdReached;
    float _stageTooFarDistanceThresholdHysteresis;
    char _stageBackgroundShiftSumTooLowThresholdReached;
    float _stageTooFarBackgroundShiftSumTooLowThreshold;
    float _stageTooFarBackGroundShiftSumIsTooLowHysteresis;
    char _stageTooFarBackgroundShiftSumNoFacesIsTooLow;
    float _stageTooFarBackgroundShiftSumNoFacesThreshold;
    int _lastSDOFEffectStatus;
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
