@class ADMonocularVideoPipelineParameters, ADEspressoMonocularVideoInferenceDescriptor, ADNetworkProvider;

@interface ADMonocularVideoPipeline : NSObject {
    ADNetworkProvider *_networkProvider;
    ADEspressoMonocularVideoInferenceDescriptor *_inferenceDesc;
    float _networkNominalEFL;
    float _nominalScaleFactor;
}

@property (copy, nonatomic) ADMonocularVideoPipelineParameters *pipelineParameters;
@property (readonly, nonatomic) ADEspressoMonocularVideoInferenceDescriptor *inferenceDescriptor;
@property (readonly, nonatomic) BOOL shouldPreProcessColorInputs;

+ (id)defaults;
+ (id)supportedDimensions;
+ (id)supportedDimensionsForNetwork:(id)a0;

- (id)initWithParameters:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (long long)adjustForEngine:(unsigned long long)a0;
- (float)getMetricScaleFactorForEFL:(float)a0;
- (long long)preProcessColorInput:(struct __CVBuffer { } *)a0 toBuffer:(struct __CVBuffer { } *)a1;

@end
