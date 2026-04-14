@class BWPixelTransferNode, BWVideoCompressorNode, BWQuickTimeMovieFileSinkNode, BWSmartCropNode, FigCaptureVISPipeline, NSMutableDictionary, BWBackPressureNode;
@protocol BWMRCSceneObserver, BWNodeBackPressureSource;

@interface FigCaptureMovieFileSinkTailPipeline : FigCapturePipeline {
    FigCaptureVISPipeline *_stereoVideoCompanionVISPipeline;
    BWVideoCompressorNode *_depthCompressorNode;
    NSMutableDictionary *_smartStyleCompressorNodesByAttachedMediaKey;
    BWBackPressureNode *_irisIntermediateJPEGDecompressionBackPressureNode;
    BWBackPressureNode *_visBackPressureNode;
    BWBackPressureNode *_scalerBackPressureNode;
    BWBackPressureNode *_irisSDOFVISBackPressureNode;
    id<BWNodeBackPressureSource> _visBackPressureSourceNode;
    unsigned long long _tailIndex;
    int _visBackPressureExtraRetainedBufferCount;
    int _videoStabilizationType;
    BOOL _offlineVISEnabled;
}

@property (nonatomic) id<BWMRCSceneObserver> mrcSceneObserver;
@property (readonly, nonatomic) BWQuickTimeMovieFileSinkNode *movieFileSinkNode;
@property (readonly, nonatomic) BWPixelTransferNode *scalerNode;
@property (readonly, nonatomic) BWVideoCompressorNode *videoCompressorNode;
@property (readonly, nonatomic) BWVideoCompressorNode *sdofCompressorNode;
@property (readonly, nonatomic) FigCaptureVISPipeline *visPipeline;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } irisVISCleanOutputRectForCLAP;
@property (readonly, nonatomic) struct { int x0; int x1; } offlineVISDimensions;
@property (nonatomic) BOOL recording;
@property (nonatomic) BOOL sceneClassifierSuspended;
@property (readonly, nonatomic) BWSmartCropNode *smartCropNode;

- (void)dealloc;
- (id)initWithConfiguration:(id)a0 tailIndex:(unsigned long long)a1 numTailPipelines:(unsigned long long)a2 graph:(id)a3 parentPipeline:(id)a4 captureDevicesByConnectionID:(id)a5 inferenceScheduler:(id)a6 recordingStatusDelegate:(id)a7 multiCamClientCompositingCallback:(id /* block */)a8 workgroup:(id)a9;

@end
