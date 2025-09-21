@class ADPCEDisparityColorPipelineParameters;

@interface ADPCEDisparityColorExecutorParameters : ADExecutorParameters

@property (readonly, retain, nonatomic) ADPCEDisparityColorPipelineParameters *pipelineParameters;
@property (nonatomic) char temporalConsistencyActive;
@property (nonatomic) char disparityPreprocessingActive;
@property (nonatomic) char disparityPostprocessingActive;
@property (nonatomic) long long disparityRotation;
@property (nonatomic) unsigned short disparityInvalidValue;

- (void).cxx_destruct;
- (id)initForInputSource:(unsigned long long)a0;
- (id)initForPipelineParameters:(id)a0 inputSource:(unsigned long long)a1;

@end
