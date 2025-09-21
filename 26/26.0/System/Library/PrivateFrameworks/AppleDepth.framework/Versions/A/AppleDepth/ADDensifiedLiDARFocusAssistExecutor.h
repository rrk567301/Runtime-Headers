@class ADMutableJasperPointCloud, ADDensifiedLiDARFocusAssistPipeline, ADDensifiedLiDARFocusAssistExecutorParameters;

@interface ADDensifiedLiDARFocusAssistExecutor : ADExecutor {
    BOOL _isPrepared;
    ADDensifiedLiDARFocusAssistPipeline *_pipeline;
    struct __CVBuffer { } *_itmPreProcessedColor;
    struct PixelBufferUtilsSession { struct __CVBuffer *x0; struct OpaqueVTPixelTransferSession *x1; struct OpaqueVTPixelRotationSession *x2; struct CGSize { double x0; double x1; } x3; unsigned int x4; struct CGSize { double x0; double x1; } x5; unsigned int x6; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x7; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x8; int x9; int x10; } *_colorProcessingSession;
    struct __CVBuffer { } *_itmPreProcessedLidar;
    struct __CVBuffer { } *_itmUnprocessedDepth;
    struct __CVBuffer { } *_itmUnprocessedUncertainty;
    ADMutableJasperPointCloud *_itmPovChangedPointCloud;
    struct __CVBuffer { } *_dbgPointCloudCropped;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _expectedSensorCrop;
}

@property (retain, nonatomic) ADDensifiedLiDARFocusAssistExecutorParameters *executorParameters;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } expectedOutputSize;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } colorRoi;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } validDepthRect;

- (id)initWithParameters:(id)a0;
- (void)dealloc;
- (id)init;
- (long long)prepare;
- (void).cxx_destruct;
- (long long)updateColorROI:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (long long)allocateIntermediateBuffers;
- (void)deallocateEspressoBuffers;
- (long long)executeWithColor:(struct __CVBuffer { } *)a0 pointCloud:(id)a1 lidarToColorTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a2 colorCameraCalibration:(id)a3 outputDepthMap:(struct __CVBuffer **)a4 outputConfidenceMap:(struct __CVBuffer **)a5 outputCalibration:(id *)a6;
- (long long)executeWithColor:(struct __CVBuffer { } *)a0 timestamp:(double)a1 pointClouds:(id)a2 lidarCalibration:(id)a3 colorMetadata:(id)a4 colorCameraCalibration:(id)a5 outputDepthMap:(struct __CVBuffer **)a6 outputConfidenceMap:(struct __CVBuffer **)a7 outputCalibration:(id *)a8;
- (id)getIntermediates;
- (long long)numberOfExecutionSteps;
- (long long)prepareForColorROI:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
