@interface BWStereoVideoCaptureSceneMonitor : NSObject {
    BOOL _oneShotFocusScanInProgress;
    BOOL _sceneTooDarkMonitoringEnabled;
    BOOL _subjectTooCloseMonitoringEnabled;
    BOOL _sceneIsTooDark;
    BOOL _subjectIsTooClose;
    double _wideMiniumValidFocusDistance;
    int _luxLevelThreshold;
    double _focusDistanceThreshold;
    double _lastWideFocusDistance;
    double _lastSuperWideFocusDistance;
}

+ (void)initialize;

- (void)dealloc;
- (void)focusScanDidComplete;
- (id)initWithTuningParametersByPortType:(id)a0 attachDebugFrameStatistics:(BOOL)a1;
- (BOOL)resolveStereoVideoCaptureStatusWithFrameStatistics:(id)a0 stereoVideoCaptureStatusOut:(int *)a1;
- (void)setAutoFocusInProgress:(BOOL)a0 focusLocked:(BOOL)a1 oneShotFocusScanInProgress:(BOOL)a2;

@end
