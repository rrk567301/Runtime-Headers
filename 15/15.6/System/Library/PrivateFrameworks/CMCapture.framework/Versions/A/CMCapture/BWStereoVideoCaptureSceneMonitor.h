@interface BWStereoVideoCaptureSceneMonitor : NSObject {
    char _oneShotFocusScanInProgress;
    char _sceneTooDarkMonitoringEnabled;
    char _subjectTooCloseMonitoringEnabled;
    char _sceneIsTooDark;
    char _subjectIsTooClose;
    double _wideMinimumValidFocusDistance;
    float _normalizedSNRThreshold;
    int _luxLevelThreshold;
    double _focusDistanceThreshold;
    double _lastWideFocusDistance;
    double _lastSuperWideFocusDistance;
}

+ (void)initialize;

- (void)dealloc;
- (void)focusScanDidComplete;
- (id)initWithTuningParametersByPortType:(id)a0 attachDebugFrameStatistics:(char)a1;
- (char)resolveStereoVideoCaptureStatusWithFrameStatistics:(id)a0 sceneFlags:(unsigned long long)a1 stereoVideoCaptureStatusOut:(int *)a2;
- (void)setAutoFocusInProgress:(char)a0 focusLocked:(char)a1 oneShotFocusScanInProgress:(char)a2;

@end
