@class NSString, NSDictionary, BWRamp, BWPreviewGyroStabilization;

@interface BWPreviewStabilizationNode : BWNode {
    BWPreviewGyroStabilization *_previewStabilization;
    NSDictionary *_staticParametersByPortType;
    BOOL _updateFinalCropRectWithStabilizationShift;
    BOOL _stabilizeFallbackCamera;
    BOOL _enableStabilizationTransitionRamps;
    BWRamp *_stabilizationTransitionRamp;
    BWRamp *_stabilizationCameraFallbackRamp;
    BOOL _stabilizationCameraFallbackRampEnabled;
    int _stabilizationEnterRampFrameCount;
    int _stabilizationExitRampFrameCount;
    int _stabilizationCameraFallbackRampFrameCount;
    int _stabilizationGraphStopRampOffFrameCount;
    int _lastRecommendedMasterSelectionReason;
    NSString *_lastRecommendedMasterPortType;
    NSString *_lastPortType;
    BOOL _lastStabilizingEnabled;
    struct CGPoint { double x; double y; } _appliedTranslation;
    struct CGPoint { double x; double y; } _lastTranslationBeforeCameraFallbackRampStart;
    BOOL _isStillImagePreview;
    float _minimumSupportedUIZoomFactor;
    float _photoModeFullStrengthUIZoomFactor;
}

@property (nonatomic) BOOL rampOffStabilizationForGraphStop;

+ (void)initialize;

- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (id)nodeType;
- (void)dealloc;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (id)initWithCameraInfoByPortType:(id)a0 forStillImagePreview:(BOOL)a1 updateFinalCropRectWithStabilizationShift:(BOOL)a2 minimumSupportedUIZoomFactor:(float)a3;

@end
