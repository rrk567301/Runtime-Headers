@class ADMetricDepthExecutorParameters, ADJasperPointCloud, ADMetricDepthFrameStatistics, ADMetricDepthPipeline, ADEspressoBufferHandle;

@interface ADMetricDepthExecutor : ADExecutor {
    BOOL _isPrepared;
    ADJasperPointCloud *_aggregatedPrimaryPointCloud;
    ADJasperPointCloud *_aggregatedSecondaryPointCloud;
    ADEspressoBufferHandle *_itmPreProcessedCameraEmbBuffer;
    ADEspressoBufferHandle *_itmPreProcessedJasperEmbBuffer;
    ADEspressoBufferHandle *_itmPreProcessedPearlBuffer;
    struct __CVBuffer { } *_itmPreProcessedPearl;
    struct __CVBuffer { } *_itmPreProcessedPearlProjectedOnSecondary;
    struct PixelBufferUtilsSession { struct __CVBuffer *x0; struct OpaqueVTPixelTransferSession *x1; struct OpaqueVTPixelRotationSession *x2; struct CGSize { double x0; double x1; } x3; unsigned int x4; struct CGSize { double x0; double x1; } x5; unsigned int x6; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x7; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x8; int x9; int x10; } *_colorScalingSession;
    unsigned long long _espressoEngine;
    struct PixelBufferUtilsTiledView { struct TileConfig *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; struct __CVBuffer *x6; } *_tiledView;
}

@property (readonly, retain, nonatomic) ADMetricDepthFrameStatistics *lastFrameStatistics;
@property (retain, nonatomic) ADMetricDepthExecutorParameters *executorParameters;
@property (readonly, retain, nonatomic) ADMetricDepthPipeline *pipeline;

+ (id)defaults;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (long long)allocateIntermediateBuffers;
- (void)deallocInferenceBuffers;
- (BOOL)doesSupportBufferCopyPolicy:(unsigned long long)a0;
- (id)espressoRunner;
- (long long)executeWithPrimaryColor:(struct __CVBuffer { } *)a0 secondaryColor:(struct __CVBuffer { } *)a1 pearl:(struct __CVBuffer { } *)a2 pointClouds:(id)a3 primaryColorCalibration:(id)a4 secondaryColorCalibration:(id)a5 pearlCalibration:(id)a6 lidarCameraCalibration:(id)a7 primaryColorPose:(struct { void /* unknown type, empty encoding */ x0[4]; })a8 secondaryColorPose:(struct { void /* unknown type, empty encoding */ x0[4]; })a9 pearlPose:(struct { void /* unknown type, empty encoding */ x0[4]; })a10 pointCloudPoses:(struct { void /* unknown type, empty encoding */ x0[4]; } *)a11 timestamp:(double)a12 outputDepthMap:(struct __CVBuffer **)a13 outputUncertaintyMap:(struct __CVBuffer **)a14 outputConfidenceMap:(struct __CVBuffer **)a15 outputConfidenceLevels:(struct __CVBuffer **)a16 outputNormalsMap:(struct __CVBuffer **)a17 outputActiveDepthMaskMap:(struct __CVBuffer **)a18 outputDepthCalibration:(id *)a19;
- (id)getIntermediates;
- (id)initForEspressoEngine:(unsigned long long)a0;
- (long long)numberOfExecutionSteps;
- (long long)prepareForInputRoi:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (long long)prepareForInputRoi:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 engineType:(unsigned long long)a1;
- (void)writeMetricDepthToJPEG:(id)a0 timestamp:(double)a1 preProcessedJasper:(struct __CVBuffer { } *)a2 preProcessedPearl:(struct __CVBuffer { } *)a3 preProcessedPrimaryColor:(struct __CVBuffer { } *)a4 rawConfOut:(struct __CVBuffer { } *)a5 rawDepthOut:(struct __CVBuffer { } *)a6;

@end
