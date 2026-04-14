@class ADEspressoImageDescriptor;

@interface ADEspressoMetricDepthInferenceDescriptor : ADEspressoInferenceDescriptor

@property (readonly, nonatomic) ADEspressoImageDescriptor *primaryColorInput;
@property (readonly, nonatomic) ADEspressoImageDescriptor *secondaryColorInput;
@property (readonly, nonatomic) ADEspressoImageDescriptor *jasperInput;
@property (readonly, nonatomic) ADEspressoImageDescriptor *pearlInput;
@property (readonly, nonatomic) ADEspressoImageDescriptor *cameraEmbeddingInput;
@property (readonly, nonatomic) ADEspressoImageDescriptor *depthOutput;
@property (readonly, nonatomic) ADEspressoImageDescriptor *confidenceOutput;
@property (readonly, nonatomic) ADEspressoImageDescriptor *normalsOutput;

- (void).cxx_destruct;
- (id)initWithNetworkProvider:(id)a0 espressoEngine:(unsigned long long)a1;

@end
