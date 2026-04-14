@class ADMonocularVideoPipelineParameters, ADEspressoMonocularVideoInferenceDescriptor, ADNetworkProvider;

@interface ADMonocularVideoPipeline : NSObject {
    ADNetworkProvider *_networkProvider;
    ADEspressoMonocularVideoInferenceDescriptor *_inferenceDesc;
    float _nominalScaleFactor;
    float _nominalResolutionFactor;
    float _eflScaleFactor;
}

@property (copy, nonatomic) ADMonocularVideoPipelineParameters *pipelineParameters;
@property (readonly, nonatomic) ADEspressoMonocularVideoInferenceDescriptor *inferenceDescriptor;
@property (readonly, nonatomic) BOOL shouldPreProcessColorInputs;

+ (id)defaults;
+ (id)knownNetworksForVariant:(unsigned long long)a0;
+ (id)subVariantsForVariant:(unsigned long long)a0;
+ (id)supportedDimensions;
+ (id)supportedDimensionsForNetwork:(id)a0;
+ (id)supportedDimensionsForParameters:(id)a0;

- (id)initWithParameters:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (long long)adjustForEngine:(unsigned long long)a0;
- (float)getMetricScaleFactorFor35mmFocalLength:(float)a0;
- (float)getMetricScaleFactorForEFL:(float)a0;
- (long long)preProcessColorInput:(struct __CVBuffer { } *)a0 toBuffer:(struct __CVBuffer { } *)a1;

@end
