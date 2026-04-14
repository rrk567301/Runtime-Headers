@class ADEspressoImageDescriptor;

@interface ADEspressoBinocularDepthInferenceDescriptor : ADEspressoInferenceDescriptor

@property (readonly, nonatomic) ADEspressoImageDescriptor *referenceColorInput;
@property (readonly, nonatomic) ADEspressoImageDescriptor *auxiliaryColorInput;
@property (readonly, nonatomic) ADEspressoImageDescriptor *auxiliaryDisparityOutput;
@property (readonly, nonatomic) ADEspressoImageDescriptor *auxiliaryConfidenceOutput;
@property (readonly, nonatomic) ADEspressoImageDescriptor *auxiliarySegmentationOutput;

- (void).cxx_destruct;
- (id)initWithNetworkProvider:(id)a0 prioritization:(long long)a1 espressoEngine:(unsigned long long)a2;

@end
