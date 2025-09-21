@class BWPipelineStage, BWPixelTransferNode, NSString, FigCaptureVISPipeline, BWFigVideoCaptureDevice, BWNodeOutput;

@interface FigCaptureVideoDataSinkPipeline : FigCaptureRemoteQueueSinkPipeline {
    BWFigVideoCaptureDevice *_captureDevice;
    FigCaptureVISPipeline *_visPipeline;
    BWPipelineStage *_visPipelineStage;
    BWPixelTransferNode *_videoDataConverterRotatorNode;
    BWNodeOutput *_faceTrackingVideoCaptureOutput;
    BWNodeOutput *_offlineVISMotionDataCaptureOutput;
    NSString *_sourceID;
    int _sourceDeviceType;
    char _optimizedForPreview;
}

+ (void)initialize;

- (void)dealloc;
- (void)setDiscardsSampleData:(char)a0;

@end
