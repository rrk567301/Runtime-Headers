@interface CCAdaptiveMeshGenerationAlgorithmDescriptor : CCAlgorithmDescriptor

@property (nonatomic) unsigned long long numberOfLevels;
@property (nonatomic) unsigned long long avfwTriangleBudget;
@property (nonatomic) float depthDisparityThreshold;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
