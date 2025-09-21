@class NSDate, CLSInvestigationPhotoKitFeeder, PGCurationManager, NSString, CLSClueCollection, PHFetchResult, NSNumber, CLSCurationContext;

@interface PGGraphIngestMomentContainer : NSObject <PGGraphIngestMoment> {
    PGCurationManager *_curationManager;
    double _topTierAestheticScore;
    NSNumber *_scenesProcessedRatioAsNumber;
    PHFetchResult *_assetsInExtendedCuration;
}

@property (retain, nonatomic) CLSClueCollection *clueCollection;
@property (retain, nonatomic) NSNumber *isInterestingNumber;
@property (retain, nonatomic) NSNumber *isInterestingWithAlternateJunkingNumber;
@property (retain, nonatomic) NSNumber *isSmartInterestingNumber;
@property (retain, nonatomic) NSNumber *contentScoreNumber;
@property (retain, nonatomic) CLSCurationContext *curationContext;
@property (readonly, nonatomic) CLSInvestigationPhotoKitFeeder *feeder;
@property (readonly, nonatomic) NSDate *localStartDate;
@property (readonly, nonatomic) NSDate *localEndDate;
@property (readonly, nonatomic) NSDate *universalStartDate;
@property (readonly, nonatomic) NSDate *universalEndDate;
@property (readonly, nonatomic) char isSmartInteresting;
@property (readonly, nonatomic) char isInteresting;
@property (readonly, nonatomic) char isInterestingWithAlternateJunking;
@property (readonly, nonatomic) double contentScore;
@property (readonly, nonatomic) unsigned long long numberOfItems;
@property (readonly, nonatomic) unsigned long long numberOfItemsWithPersons;
@property (readonly, nonatomic) unsigned long long totalNumberOfPersons;
@property (readonly, nonatomic) NSString *uuid;
@property (readonly, nonatomic) double inhabitationScore;
@property (readonly, nonatomic) char hasHigherThanImprovedAssets;
@property (readonly, nonatomic) char hasAssetsWithInterestingScenes;
@property (readonly, nonatomic) char containsBetterScoringAsset;
@property (readonly, nonatomic) char containsNonJunkAssets;
@property (readonly, nonatomic) unsigned long long numberOfShinyGemItems;
@property (readonly, nonatomic) unsigned long long numberOfRegularGemItems;
@property (readonly, nonatomic) double behavioralScore;
@property (readonly, nonatomic) double scenesProcessedRatio;
@property (readonly, nonatomic) double facesProcessedRatio;
@property (readonly, nonatomic) unsigned long long numberOfAssetsInExtendedCuration;
@property (readonly, nonatomic) unsigned short sharingComposition;
@property (readonly, nonatomic) char happensAtSensitiveLocation;
@property (readonly, nonatomic) NSString *encodedCLIPFeatureVector;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_computeScoresIfNeeded;
- (id)assetsInExtendedCuration;
- (id)initMomentContainerWithFeeder:(id)a0 clueCollection:(id)a1 curationManager:(id)a2 topTierAestheticScore:(double)a3 curationContext:(id)a4;
- (char)location:(id)a0 isSensitiveDuringDateInterval:(id)a1;

@end
