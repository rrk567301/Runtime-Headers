@class ADBinocularDepthExecutorParameters, ADBinocularDepthPipeline;

@interface ADBinocularDepthExecutor : ADExecutor {
    BOOL _isPrepared;
    unsigned long long _espressoEngine;
    unsigned long long _numberOfSaturationChecks;
    unsigned long long _coreAnalyticsToSaturationChecksRatio;
    double _lastSaturationCheckTimestamp;
    struct __CVBuffer { } *_itmProcessedRefColor;
    struct __CVBuffer { } *_itmProcessedAuxColor;
    struct __CVBuffer { } *_itmYUVColor;
    struct PixelBufferUtilsSession { struct __CVBuffer *x0; struct OpaqueVTPixelTransferSession *x1; struct OpaqueVTPixelRotationSession *x2; struct CGSize { double x0; double x1; } x3; unsigned int x4; struct CGSize { double x0; double x1; } x5; unsigned int x6; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x7; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x8; int x9; int x10; } *_colorScalingSession;
    struct __CVBuffer { } *_itmRawAuxDisparity;
    struct __CVBuffer { } *_itmRawAuxConfidence;
    struct __CVBuffer { } *_itmRawAuxSegmentation;
}

@property (retain, nonatomic) ADBinocularDepthExecutorParameters *executorParameters;
@property (readonly, retain, nonatomic) ADBinocularDepthPipeline *pipeline;

- (void)dealloc;
- (void).cxx_destruct;
- (long long)allocateIntermediateBuffers;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })computeCropForRectifiedImage:(struct __CVBuffer { } *)a0 calib:(id)a1;
- (void)deallocateEspressoBuffers;
- (id)executeWithRefColor:(struct __CVBuffer { } *)a0 auxColor:(struct __CVBuffer { } *)a1;
- (long long)executeWithRefColor:(struct __CVBuffer { } *)a0 auxColor:(struct __CVBuffer { } *)a1 auxOutputDepth:(struct __CVBuffer **)a2 auxOutputConfidence:(struct __CVBuffer **)a3;
- (long long)executeWithRefColor:(struct __CVBuffer { } *)a0 auxColor:(struct __CVBuffer { } *)a1 auxOutputDepth:(struct __CVBuffer **)a2 auxOutputConfidence:(struct __CVBuffer **)a3 timestamp:(double)a4;
- (id)executeWithRefColor:(struct __CVBuffer { } *)a0 auxColor:(struct __CVBuffer { } *)a1 refCalib:(id)a2 auxCalib:(id)a3;
- (long long)executeWithRefColor:(struct __CVBuffer { } *)a0 auxColor:(struct __CVBuffer { } *)a1 refCalib:(id)a2 auxCalib:(id)a3 auxOutputDepth:(struct __CVBuffer **)a4 auxOutputConfidence:(struct __CVBuffer **)a5;
- (long long)executeWithRefColor:(struct __CVBuffer { } *)a0 auxColor:(struct __CVBuffer { } *)a1 refCalib:(id)a2 auxCalib:(id)a3 auxOutputDepth:(struct __CVBuffer **)a4 auxOutputConfidence:(struct __CVBuffer **)a5 auxOutputCalib:(id *)a6;
- (long long)executeWithRefColor:(struct __CVBuffer { } *)a0 auxColor:(struct __CVBuffer { } *)a1 refCalib:(id)a2 auxCalib:(id)a3 auxOutputDepth:(struct __CVBuffer **)a4 auxOutputConfidence:(struct __CVBuffer **)a5 auxOutputCalib:(id *)a6 timestamp:(double)a7;
- (long long)executeWithRefColor:(struct __CVBuffer { } *)a0 auxColor:(struct __CVBuffer { } *)a1 refCalib:(id)a2 auxCalib:(id)a3 auxOutputDepth:(struct __CVBuffer **)a4 auxOutputConfidence:(struct __CVBuffer **)a5 auxOutputSegmentation:(struct __CVBuffer **)a6 auxOutputCalib:(id *)a7;
- (long long)executeWithRefColor:(struct __CVBuffer { } *)a0 auxColor:(struct __CVBuffer { } *)a1 refCalib:(id)a2 auxCalib:(id)a3 auxOutputDepth:(struct __CVBuffer **)a4 auxOutputConfidence:(struct __CVBuffer **)a5 auxOutputSegmentation:(struct __CVBuffer **)a6 auxOutputCalib:(id *)a7 timestamp:(double)a8;
- (long long)executeWithRefColor:(struct __CVBuffer { } *)a0 auxColor:(struct __CVBuffer { } *)a1 refCalib:(id)a2 auxCalib:(id)a3 auxOutputDepth:(struct __CVBuffer **)a4 auxOutputConfidence:(struct __CVBuffer **)a5 timestamp:(double)a6;
- (id)executeWithRefColor:(struct __CVBuffer { } *)a0 auxColor:(struct __CVBuffer { } *)a1 refCalib:(id)a2 auxCalib:(id)a3 timestamp:(double)a4;
- (id)executeWithRefColor:(struct __CVBuffer { } *)a0 auxColor:(struct __CVBuffer { } *)a1 timestamp:(double)a2;
- (id)getIntermediates;
- (float)getRectifiedColorInputSaturationRate;
- (id)initForEspressoEngine:(unsigned long long)a0;
- (id)initWithPrioritization:(long long)a0 espressoEngine:(unsigned long long)a1;
- (long long)numberOfExecutionSteps;
- (long long)prepareForInputRoi:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)sendAnalyticsWithRefSaturationRate:(float)a0 auxSaturationRate:(float)a1;
- (long long)setColorInput:(struct __CVBuffer { } *)a0 calib:(id)a1 toNetworkBuffer:(struct __CVBuffer { } *)a2 isRef:(BOOL)a3 crop:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a4;

@end
