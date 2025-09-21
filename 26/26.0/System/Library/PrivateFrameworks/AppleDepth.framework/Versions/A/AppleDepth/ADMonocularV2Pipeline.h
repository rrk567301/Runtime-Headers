@class ADNetworkProvider, ADMonocularV2PipelineParameters, ADEspressoMonocularV2InferenceDescriptor;

@interface ADMonocularV2Pipeline : NSObject {
    ADNetworkProvider *_networkProvider;
    ADEspressoMonocularV2InferenceDescriptor *_inferenceDesc;
}

@property (copy, nonatomic) ADMonocularV2PipelineParameters *pipelineParameters;
@property (readonly, nonatomic) ADEspressoMonocularV2InferenceDescriptor *inferenceDescriptor;

- (void).cxx_destruct;
- (long long)adjustForEngine:(unsigned long long)a0;
- (id)initWithInputPrioritization:(long long)a0;
- (id)initWithInputPrioritization:(long long)a0 andParameters:(id)a1;
- (long long)postProcessDisparity:(struct __CVBuffer { } *)a0 output:(struct __CVBuffer { } *)a1;

@end
