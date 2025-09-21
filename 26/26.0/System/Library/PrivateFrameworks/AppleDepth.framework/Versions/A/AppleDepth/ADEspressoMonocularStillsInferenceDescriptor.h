@class ADEspressoImageDescriptor;

@interface ADEspressoMonocularStillsInferenceDescriptor : ADEspressoInferenceDescriptor

@property (readonly, nonatomic) ADEspressoImageDescriptor *colorInput;
@property (readonly, nonatomic) ADEspressoImageDescriptor *disparityOutput;

- (void).cxx_destruct;
- (id)initWithNetworkProvider:(id)a0;

@end
