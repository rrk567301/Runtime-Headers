@interface PGMemoryMomentRequirements : NSObject

@property (nonatomic) char filterUninterestingWithAlternateJunking;
@property (nonatomic) char filterUninterestingForMemories;
@property (nonatomic) char filterMomentsWithNotEnoughScenesProcessed;
@property (nonatomic) unsigned long long minimumNumberOfRelevantAssets;
@property (nonatomic) unsigned long long minimumNumberOfAssetsInExtendedCuration;
@property (nonatomic) double aboveContentScoreThreshold;
@property (nonatomic) unsigned long long minimumNumberOfPersons;

@end
