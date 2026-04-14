@class ADEspressoImageDescriptor;

@interface ADEspressoDensifiedLiDARFocusAssistInferenceDescriptor : ADEspressoInferenceDescriptor

@property (readonly, nonatomic) ADEspressoImageDescriptor *colorInput;
@property (readonly, nonatomic) ADEspressoImageDescriptor *lidarInput;
@property (readonly, nonatomic) ADEspressoImageDescriptor *recurrentInput;
@property (readonly, nonatomic) ADEspressoImageDescriptor *flowMatchInput;
@property (readonly, nonatomic) ADEspressoImageDescriptor *recurrentOutput;
@property (readonly, nonatomic) ADEspressoImageDescriptor *flowMatchOutput;
@property (readonly, nonatomic) ADEspressoImageDescriptor *depthOutput;
@property (readonly, nonatomic) ADEspressoImageDescriptor *uncertaintyOutput;

- (void).cxx_destruct;
- (id)initWithNetworkProvider:(id)a0 espressoEngine:(unsigned long long)a1 type:(long long)a2;

@end
