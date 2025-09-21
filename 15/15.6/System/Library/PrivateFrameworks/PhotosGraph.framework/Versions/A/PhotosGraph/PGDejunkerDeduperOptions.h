@class NSSet, NSString;

@interface PGDejunkerDeduperOptions : NSObject {
    NSString *_baseFlavor;
}

@property (nonatomic) char doIdenticalDeduping;
@property (nonatomic) double identicalDedupingTimeInterval;
@property (nonatomic) double identicalDedupingTimeIntervalForPeople;
@property (nonatomic) double identicalDedupingMaximumTimeGroupExtension;
@property (nonatomic) unsigned long long maximumNumberOfItemsPerIdenticalCluster;
@property (nonatomic) double identicalDedupingThreshold;
@property (nonatomic) double identicalDedupingThresholdForPeople;
@property (nonatomic) double identicalDedupingThresholdForBestItems;
@property (nonatomic) char useFaceprintsForIdenticalDeduping;
@property (nonatomic) double identicalDedupingFaceprintDistance;
@property (nonatomic) char doSemanticalDeduping;
@property (nonatomic) double semanticalDedupingTimeInterval;
@property (nonatomic) double semanticalDedupingTimeIntervalForPeople;
@property (nonatomic) double semanticalDedupingTimeIntervalForPersons;
@property (nonatomic) double semanticalDedupingMaximumTimeGroupExtension;
@property (nonatomic) unsigned long long maximumNumberOfItemsPerSemanticalCluster;
@property (nonatomic) double semanticalDedupingThreshold;
@property (nonatomic) double semanticalDedupingThresholdForPeople;
@property (nonatomic) double semanticalDedupingThresholdForPersons;
@property (nonatomic) char dontSemanticallyDedupePeople;
@property (nonatomic) char dontSemanticallyDedupePersons;
@property (nonatomic) char allowAdaptiveForSemanticalDeduping;
@property (nonatomic) char semanticalDedupingProtectSmallClusters;
@property (nonatomic) char useOnlyScenesForDeduping;
@property (nonatomic) char useAllPersonsForDeduping;
@property (nonatomic) char useFaceQualityForElection;
@property (nonatomic) char doNotDedupeVideos;
@property (nonatomic) char doNotDedupeInterestingPortraitsAndLivePictures;
@property (nonatomic) char onlyDedupeContiguousItems;
@property (nonatomic) char doDejunk;
@property (nonatomic) char returnDedupedJunkIfOnlyJunk;
@property (nonatomic) char doFinalPass;
@property (nonatomic) double finalPassTimeInterval;
@property (nonatomic) double finalPassMaximumTimeGroupExtension;
@property (nonatomic) double finalPassDedupingThreshold;
@property (nonatomic) unsigned long long duration;
@property (copy, nonatomic) NSSet *identifiersOfRequiredItems;
@property (copy, nonatomic) NSSet *identifiersOfEligibleItems;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)initForMemories;
- (id)initForCuratedLibrary;
- (id)dictionaryRepresentationRestrictingToGlobalOptions:(char)a0;

@end
