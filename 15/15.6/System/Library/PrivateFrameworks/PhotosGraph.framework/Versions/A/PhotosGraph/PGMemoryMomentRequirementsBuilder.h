@interface PGMemoryMomentRequirementsBuilder : PGConfiguration

@property (readonly, nonatomic) char filterUninterestingWithAlternateJunking;
@property (readonly, nonatomic) char filterUninterestingForMemories;
@property (readonly, nonatomic) char filterMomentsWithNotEnoughScenesProcessed;
@property (readonly, nonatomic) unsigned long long minimumNumberOfRelevantAssets;
@property (readonly, nonatomic) unsigned long long minimumNumberOfAssetsInExtendedCuration;
@property (readonly, nonatomic) double aboveContentScoreThreshold;
@property (readonly, nonatomic) unsigned long long minimumNumberOfPersons;

- (id)memoryMomentRequirements;

@end
