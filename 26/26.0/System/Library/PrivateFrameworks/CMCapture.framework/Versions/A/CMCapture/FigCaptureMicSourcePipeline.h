@class BWZoomCommandHandler, NSMutableArray, BWAudioSourceNode;

@interface FigCaptureMicSourcePipeline : FigCaptureSourcePipeline {
    BWAudioSourceNode *_sourceNode;
    NSMutableArray *_pipelineOutputsByMicSourcePosition[3];
    BWZoomCommandHandler *_zoomCommandHandlerForStereoAudioCapture;
}

+ (void)initialize;

- (void)dealloc;

@end
