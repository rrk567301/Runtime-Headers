@class ADJasperColorPipeline, ADLKTExecutor, ADAggregatedPointCloudRefiner, ADCameraCalibration, ADJasperColorExecutorParameters;

@interface ADJasperColorExecutor : ADExecutor {
    ADLKTExecutor *_lktExecutor;
    struct PixelBufferUtilsSession { struct __CVBuffer *x0; struct OpaqueVTPixelTransferSession *x1; struct OpaqueVTPixelRotationSession *x2; struct CGSize { double x0; double x1; } x3; unsigned int x4; struct CGSize { double x0; double x1; } x5; unsigned int x6; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x7; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x8; int x9; int x10; } *_colorProcessingSession;
    struct __CVBuffer { } *_itmPreProcessedJasper;
    struct __CVBuffer { } *_itmUnprocessedDepth;
    struct __CVBuffer { } *_itmPostProcessedDepth;
    struct __CVBuffer { } *_itmUnprocessedConf;
    struct __CVBuffer { } *_itmPostProcessedConf;
    struct __CVBuffer { } *_itmWarpedPrevDepth;
    struct __CVBuffer { } *_itmWarpedPrevConf;
    struct __CVBuffer { } *_itmOpticalFlow;
    struct __CVBuffer { } *_itmPrevProcessedFusedDepth;
    struct __CVBuffer { } *_itmCurrProcessedFusedDepth;
    struct __CVBuffer { } *_itmPrevProcessedFusedConf;
    struct __CVBuffer { } *_itmCurrProcessedFusedConf;
    BOOL _firstTimeExecution;
    BOOL _opticalFlowAllocated;
    BOOL _vioTemporalAllocated;
    struct { void /* unknown type, empty encoding */ columns[4]; } _prevPose;
    ADCameraCalibration *_prevCamCalib;
    ADAggregatedPointCloudRefiner *_pcRefiner;
}

@property (retain, nonatomic) ADJasperColorExecutorParameters *executorParameters;
@property (readonly, retain, nonatomic) ADJasperColorPipeline *pipeline;

+ (id)defaults;

- (void)dealloc;
- (void).cxx_destruct;
- (long long)allocateIntermediateBuffers;
- (int)copyConfidenceAllowPixelFormatChange:(struct __CVBuffer { } *)a0 outputConfidence:(struct __CVBuffer { } *)a1;
- (void)deallocateEspressoBuffers;
- (BOOL)doesSupportBufferCopyPolicy:(unsigned long long)a0;
- (long long)executeWithColor:(struct __CVBuffer { } *)a0 colorCameraCalibration:(id)a1 colorWorldToPlatformTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a2 pointCloud:(id)a3 outDepthMap:(struct __CVBuffer { } *)a4 outConfMap:(struct __CVBuffer { } *)a5 outNonTemporalyConsistentDepthMap:(struct __CVBuffer { } *)a6 outNonTemporalyConsistentConfMap:(struct __CVBuffer { } *)a7 outConfidenceLevels:(struct __CVBuffer { } *)a8;
- (long long)executeWithColor:(struct __CVBuffer { } *)a0 colorCameraCalibration:(id)a1 colorWorldToPlatformTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a2 pointClouds:(id)a3 lidarCameraCalibration:(id)a4 pointCloudWorldToPlatformTransforms:(struct { void /* unknown type, empty encoding */ x0[4]; } *)a5 outDepthMap:(struct __CVBuffer **)a6 outConfMap:(struct __CVBuffer **)a7;
- (long long)executeWithColor:(struct __CVBuffer { } *)a0 colorCameraCalibration:(id)a1 colorWorldToPlatformTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a2 pointClouds:(id)a3 lidarCameraCalibration:(id)a4 pointCloudWorldToPlatformTransforms:(struct { void /* unknown type, empty encoding */ x0[4]; } *)a5 outDepthMap:(struct __CVBuffer **)a6 outConfMap:(struct __CVBuffer **)a7 outNonTemporalyConsistentDepthMap:(struct __CVBuffer { } *)a8 outNonTemporalyConsistentConfMap:(struct __CVBuffer { } *)a9 outConfidenceLevels:(struct __CVBuffer { } *)a10;
- (long long)executeWithColor:(struct __CVBuffer { } *)a0 pointCloud:(id)a1 outDepthMap:(struct __CVBuffer **)a2 outConfMap:(struct __CVBuffer **)a3;
- (long long)executeWithColor:(struct __CVBuffer { } *)a0 pointCloud:(id)a1 outDepthMap:(struct __CVBuffer **)a2 outConfMap:(struct __CVBuffer **)a3 worldToCameraTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a4 cameraCalibration:(id)a5;
- (id)getIntermediates;
- (id)initWithInputPrioritization:(long long)a0;
- (id)initWithInputPrioritization:(long long)a0 parameters:(id)a1;
- (long long)numberOfExecutionSteps;
- (long long)prepareForEngineType:(unsigned long long)a0 roi:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 exifOrientation:(unsigned int)a2;
- (long long)prepareForEngineType:(unsigned long long)a0 roi:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 exifOrientation:(unsigned int)a2 rotationPreference:(unsigned long long)a3;
- (long long)prepareForEngineType:(unsigned long long)a0 roi:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 exifOrientation:(unsigned int)a2 useTemporalConsistency:(BOOL)a3;
- (long long)prepareForEngineType:(unsigned long long)a0 roi:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 exifOrientation:(unsigned int)a2 useTemporalConsistency:(BOOL)a3 rotationPreference:(unsigned long long)a4;
- (int)rotateConfidenceAllowPixelFormatChange:(struct __CVBuffer { } *)a0 rotation:(long long)a1 outputConfidence:(struct __CVBuffer { } *)a2;

@end
