@class ADNetworkProvider, ADMonocularStillsPipelineParameters, ADEspressoMonocularStillsInferenceDescriptor;

@interface ADMonocularStillsPipeline : NSObject {
    ADNetworkProvider *_networkProvider;
    ADEspressoMonocularStillsInferenceDescriptor *_inferenceDesc;
    float _networkNominalEFL;
}

@property (copy, nonatomic) ADMonocularStillsPipelineParameters *pipelineParameters;
@property (readonly, nonatomic) ADEspressoMonocularStillsInferenceDescriptor *inferenceDescriptor;

+ (id)defaults;
+ (id)supportedDimensions;

- (id)init;
- (id)initWithParameters:(id)a0;
- (void).cxx_destruct;
- (float)getMetricScaleFactorForEFL:(float)a0;

@end
