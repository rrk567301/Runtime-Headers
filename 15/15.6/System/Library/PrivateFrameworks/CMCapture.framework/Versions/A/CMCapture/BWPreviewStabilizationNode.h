@class NSString, NSDictionary, BWRamp, BWPreviewGyroStabilization;

@interface BWPreviewStabilizationNode : BWNode {
    BWPreviewGyroStabilization *_previewStabilization;
    NSDictionary *_staticParametersByPortType;
    char _updateFinalCropRectWithStabilizationShift;
    char _stabilizeFallbackCamera;
    char _enableStabilizationTransitionRamps;
    BWRamp *_stabilizationTransitionRamp;
    BWRamp *_stabilizationCameraFallbackRamp;
    char _stabilizationCameraFallbackRampEnabled;
    int _stabilizationEnterRampFrameCount;
    int _stabilizationExitRampFrameCount;
    int _stabilizationCameraFallbackRampFrameCount;
    int _lastRecommendedMasterSelectionReason;
    NSString *_lastRecommendedMasterPortType;
    NSString *_lastPortType;
    char _lastStabilizingEnabled;
    struct CGPoint { double x; double y; } _appliedTranslation;
    struct CGPoint { double x; double y; } _lastTranslationBeforeCameraFallbackRampStart;
    char _isStillImagePreview;
}

+ (void)initialize;

- (void)dealloc;
- (id)nodeType;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (id)initWithCameraInfoByPortType:(id)a0 forStillImagePreview:(char)a1 updateFinalCropRectWithStabilizationShift:(char)a2;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;

@end
