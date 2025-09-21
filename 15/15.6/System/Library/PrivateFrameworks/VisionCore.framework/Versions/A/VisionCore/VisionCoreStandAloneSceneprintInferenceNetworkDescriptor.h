@class VisionCoreTensorDescriptor;

@interface VisionCoreStandAloneSceneprintInferenceNetworkDescriptor : VisionCoreEspressoNetworkDescriptor

@property (readonly, nonatomic) VisionCoreTensorDescriptor *sceneprintOutput;

+ (char)supportsSecureCoding;
+ (id)descriptorAndReturnError:(id *)a0;

- (char)isEqual:(id)a0;

@end
