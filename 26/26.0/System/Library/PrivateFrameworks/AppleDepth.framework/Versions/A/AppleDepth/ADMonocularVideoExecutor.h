@class ADMonocularVideoPipeline, ADMonocularVideoExecutorParameters;

@interface ADMonocularVideoExecutor : ADExecutor {
    BOOL _isPrepared;
    struct __CVBuffer { } *_refColor;
    struct __CVBuffer { } *_itmChunkyRefColor;
    struct __CVBuffer { } *_itmCroppedScaledRefColor;
    struct __CVBuffer { } *_itmRotatedRefColor;
    struct __CVBuffer { } *_scaleFactorBuffer;
    struct __CVBuffer { } *_itmPrevDepthFeatures;
    struct __CVBuffer { } *_itmPrevColorFeatures;
    struct __CVBuffer { } *_disparity;
    struct __CVBuffer { } *_itmDepthFeaturesOutput;
    struct __CVBuffer { } *_itmColorFeaturesOutput;
}

@property (retain, nonatomic) ADMonocularVideoExecutorParameters *executorParameters;
@property (readonly, retain, nonatomic) ADMonocularVideoPipeline *pipeline;

- (id)initWithParameters:(id)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (long long)allocateIntermediateBuffers;
- (void)deallocateEspressoBuffers;
- (long long)executeWithColor:(struct __CVBuffer { } *)a0 efl:(float)a1 outDisparityMap:(struct __CVBuffer **)a2;
- (long long)executeWithColor:(struct __CVBuffer { } *)a0 outDisparityMap:(struct __CVBuffer **)a1;
- (id)getIntermediates;
- (long long)numberOfExecutionSteps;
- (long long)prepareForEngineType:(unsigned long long)a0;
- (struct __CVBuffer { } *)prevColorFeatures;
- (struct __CVBuffer { } *)prevDepthFeatures;

@end
