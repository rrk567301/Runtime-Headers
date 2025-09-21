@class BWFigVideoCaptureDevice, NSString, BWBackgroundBlurNode, BWPipelineStage, FigCaptureVISPipeline, BWStreamingFilterNode, BWNodeOutput, BWPixelTransferNode, BWSmartCropNode;

@interface FigCaptureVideoDataSinkPipeline : FigCaptureRemoteQueueSinkPipeline {
    BWFigVideoCaptureDevice *_captureDevice;
    FigCaptureVISPipeline *_visPipeline;
    BWPipelineStage *_visPipelineStage;
    BWStreamingFilterNode *_filterNode;
    BWPixelTransferNode *_videoDataConverterRotatorNode;
    BWPixelTransferNode *_videoDataCopierNode;
    BWSmartCropNode *_lowLatencyStabilizationNode;
    BWNodeOutput *_faceTrackingVideoCaptureOutput;
    BWNodeOutput *_offlineVISMotionDataCaptureOutput;
    NSString *_sourceID;
    int _sourceDeviceType;
    BOOL _optimizedForPreview;
    BWBackgroundBlurNode *_backgroundBlurNode;
}

+ (void)initialize;

- (void)dealloc;
- (void)setDiscardsSampleData:(BOOL)a0;

@end
