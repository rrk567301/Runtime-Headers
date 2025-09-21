@interface PGMeaningfulEventLocationCollectionTrait : PGMeaningfulEventCollectionTrait

@property (nonatomic) char useStrictNegativeNodesMatching;
@property (nonatomic) char skipNegativeRequirementForMissingLocation;

- (id)initWithNodes:(id)a0 negativeNodes:(id)a1;

@end
