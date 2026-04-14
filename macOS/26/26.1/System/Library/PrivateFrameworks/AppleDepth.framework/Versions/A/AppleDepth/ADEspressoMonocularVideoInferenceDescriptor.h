@class ADEspressoImageDescriptor;

@interface ADEspressoMonocularVideoInferenceDescriptor : ADEspressoInferenceDescriptor

@property (readonly, nonatomic) ADEspressoImageDescriptor *colorInput;
@property (readonly, nonatomic) ADEspressoImageDescriptor *prevDepthFeaturesInput;
@property (readonly, nonatomic) ADEspressoImageDescriptor *prevColorFeaturesInput;
@property (readonly, nonatomic) ADEspressoImageDescriptor *outputScale;
@property (readonly, nonatomic) ADEspressoImageDescriptor *disparityOutput;
@property (readonly, nonatomic) ADEspressoImageDescriptor *depthFeaturesOutput;
@property (readonly, nonatomic) ADEspressoImageDescriptor *colorFeaturesOutput;

- (void).cxx_destruct;
- (id)initWithNetworkProvider:(id)a0 inputColorFormat:(unsigned int)a1 outputDisparityFormat:(unsigned int)a2;

@end
