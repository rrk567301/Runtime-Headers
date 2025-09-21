@class BWPixelTransferNode, FigCaptureSemanticStyle, BWPreviewStitcherNode, NSDictionary, BWPreviewStabilizationNode, NSObject, BWPreviewTimeMachineSinkNode, BWVideoPIPOverlayNode, NSString, BWImageQueueSinkNode, BWStreamingFilterNode, BWSceneClassifierSinkNode, NSArray, BWFaceTrackingNode, BWInferenceNode, BWNodeOutput;
@protocol BWSemanticStyleSceneObserver, BWMRCSceneObserver, OS_dispatch_queue;

@interface FigCapturePreviewSinkPipeline : FigCaptureSinkPipeline {
    BWSceneClassifierSinkNode *_sceneClassifierSinkNode;
    BWVideoPIPOverlayNode *_zoomPIPOverlayNode;
    BWNodeOutput *_sceneClassifierPipelineUpstreamOutput;
    BWInferenceNode *_personSegmentationAndDepthNode;
    BWInferenceNode *_semanticStylePersonSegmentationNode;
    BWInferenceNode *_portraitOnlyPersonSegmentationNode;
    BWPreviewStabilizationNode *_previewStabilizationNode;
    BWFaceTrackingNode *_faceTrackingNode;
    char _cinematicVideoEnabled;
    char _overCaptureEnabled;
    double _videoStabilizationOverscan;
    long long _primaryCaptureRectUniqueID;
    char _applyPreviewShiftToMomentCapture;
    char _smartStyleRenderingEnabled;
    NSObject<OS_dispatch_queue> *_metalSubmissionAndCompletionQueue;
}

@property (nonatomic) id<BWMRCSceneObserver> mrcSceneObserver;
@property (nonatomic) id<BWSemanticStyleSceneObserver> semanticStyleSceneObserver;
@property (readonly, nonatomic) NSString *sourceID;
@property (readonly, nonatomic) int sourceDeviceType;
@property (readonly, nonatomic) BWImageQueueSinkNode *imageQueueSinkNode;
@property (readonly, nonatomic) BWPreviewStitcherNode *previewStitcherNode;
@property (readonly, nonatomic) BWStreamingFilterNode *filterNode;
@property (readonly, nonatomic) BWPixelTransferNode *scalerNode;
@property (readonly, nonatomic) BWPreviewTimeMachineSinkNode *timeMachineSinkNode;
@property (readonly, nonatomic) BWNodeOutput *metadataSinkOutput;
@property (readonly, nonatomic) BWNodeOutput *videoThumbnailSinkOutput;
@property (readonly, nonatomic) BWNodeOutput *depthDataSinkOutput;
@property (readonly, nonatomic) NSDictionary *imageQueueUpdatedPayloadToBeSentAfterCommitConfiguration;
@property (readonly, nonatomic) char depthFilterRenderingEnabled;
@property (readonly, nonatomic) struct FigCaptureVideoTransform { char mirrored; int rotationDegrees; struct { int width; int height; } dimensions; } outputTransform;
@property (readonly, nonatomic) struct FigCaptureVideoTransform { char mirrored; int rotationDegrees; struct { int width; int height; } dimensions; } videoThumbnailSinkOutputTransform;
@property (nonatomic) char discardsImageQueueSampleData;
@property (nonatomic) char sceneClassifierSuspended;
@property (retain, nonatomic) NSArray *filters;
@property (nonatomic) float simulatedAperture;
@property (nonatomic) float portraitLightingEffectStrength;
@property (retain, nonatomic) FigCaptureSemanticStyle *semanticStyle;
@property (readonly) double primaryCaptureRectAspectRatio;
@property (readonly) struct CGPoint { double x0; double x1; } primaryCaptureRectCenter;
@property (readonly) long long primaryCaptureRectUniqueID;
@property char displaysWidestCameraOnly;

+ (void)initialize;

- (void)dealloc;
- (void)setSemanticStyle:(id)a0 animated:(char)a1;
- (id)initWithConfiguration:(id)a0 sourcePreviewOutput:(id)a1 imageQueueSinkNode:(id)a2 graph:(id)a3 name:(id)a4 inferenceScheduler:(id)a5 captureDevice:(id)a6 previewTapDelegate:(id)a7 zoomPIPOverlayDelegate:(id)a8;
- (void)prepareForRenderingWithPreparedPixelBufferPool;
- (void)setPreviewTapRegistered:(char)a0;
- (void)setPrimaryCaptureRectAspectRatio:(double)a0 center:(struct CGPoint { double x0; double x1; })a1 trueVideoTransitionPercentComplete:(double)a2 fencePortSendRight:(id)a3 uniqueID:(long long)a4;
- (void)setSemanticStyleRenderingSuspended:(char)a0 animated:(char)a1;
- (void)setSemanticStyleSet:(id)a0 fencePortSendRight:(id)a1;
- (void)setStoppingForClientBackgrounded:(char)a0;
- (void)setStoppingForModeSwitch:(char)a0 parallelGraphRebuildEnabled:(char)a1 ispFastSwitchEnabled:(char)a2 smartStyleRenderingEnabledInTrueVideoGraph:(char)a3;
- (void)setVideoStabilizationOverscanCropEnabled:(char)a0 momentMovieRecordingEnabled:(char)a1;
- (void)updateClientAuditToken:(struct { unsigned int x0[8]; })a0;

@end
