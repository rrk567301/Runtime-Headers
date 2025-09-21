@class NSString;

@interface BWBravoCinematicVideoSceneMonitor : NSObject <BWPortraitSceneMonitor> {
    char _oneShotFocusScanInProgress;
    char _sceneTooDarkMonitoringEnabled;
    int _sceneTooDarkLuxThreshold;
    char _sceneIsTooDark;
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
