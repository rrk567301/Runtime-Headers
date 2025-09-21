@class VisionCoreTensorDescriptor;
@protocol VisionCoreCamGazeClassifier;

@interface VisionCoreCamGazeNetworkDescriptor : VisionCoreEspressoNetworkDescriptor

@property (readonly, nonatomic) VisionCoreTensorDescriptor *gazeProbabilitiesOutput;
@property (readonly, nonatomic) id<VisionCoreCamGazeClassifier> gazeClassifier;

+ (char)supportsSecureCoding;
+ (id)camGazeV2AndReturnError:(id *)a0;
+ (id)camGazeV1AndReturnError:(id *)a0;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
