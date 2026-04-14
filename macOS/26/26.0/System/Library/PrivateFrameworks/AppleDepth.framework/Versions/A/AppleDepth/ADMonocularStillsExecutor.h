@class ADMonocularStillsExecutorParameters, ADMonocularStillsPipeline;

@interface ADMonocularStillsExecutor : ADExecutor {
    BOOL _isPrepared;
    struct __CVBuffer { } *_itmCroppedScaledColor;
    struct __CVBuffer { } *_itmRotatedColor;
    struct __CVBuffer { } *_itmPreProcessedColor;
    struct __CVBuffer { } *_itmUnprocessedOutputDisparity;
}

@property (retain, nonatomic) ADMonocularStillsExecutorParameters *executorParameters;
@property (readonly, retain, nonatomic) ADMonocularStillsPipeline *pipeline;

- (id)initWithParameters:(id)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (long long)allocateIntermediateBuffers;
- (struct __CVBuffer { } *)createDepthBuffer;
- (void)deallocateEspressoBuffers;
- (long long)executeWithColor:(struct __CVBuffer { } *)a0 efl:(float)a1 outputDepth:(struct __CVBuffer { } *)a2;
- (long long)executeWithColor:(struct __CVBuffer { } *)a0 outputDepth:(struct __CVBuffer { } *)a1;
- (id)getIntermediates;
- (id)initForDimensions:(id)a0;
- (long long)numberOfExecutionSteps;
- (long long)prepareForEngineType:(unsigned long long)a0 inputColorROI:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
