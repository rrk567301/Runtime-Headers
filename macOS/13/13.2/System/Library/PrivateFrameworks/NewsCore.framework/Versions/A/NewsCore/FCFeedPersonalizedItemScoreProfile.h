@class NSDictionary;

@interface FCFeedPersonalizedItemScoreProfile : NSObject

@property (nonatomic) double featureCtr;
@property (nonatomic) double subscribedChannelCtr;
@property (nonatomic) double paidNonpaidSubscriptionCtr;
@property (nonatomic) double autoSubscribeCtr;
@property (nonatomic) double computedGlobalScoreCoefficient;
@property (nonatomic) double userFeedbackScore;
@property (nonatomic) double rawUserFeedbackScore;
@property (nonatomic) double userConversionScore;
@property (nonatomic) double rawPersonalizationScore;
@property (nonatomic) double personalizationScore;
@property (nonatomic) double firstPassPersonalizationScore;
@property (nonatomic) double agedPersonalizationScore;
@property (nonatomic) double diversifiedPersonalizationScore;
@property (nonatomic) double bundlePaidMultiplier;
@property (nonatomic) double bundleFreeMultiplier;
@property (nonatomic) double featuredMultiplier;
@property (nonatomic) double audioMultiplier;
@property (nonatomic) double evergreenMultiplier;
@property (nonatomic) double conversionMultiplier;
@property (nonatomic) double dampenedStaticMultiplier;
@property (nonatomic) double staticMultiplier;
@property (nonatomic) double seenPenalty;
@property (nonatomic) double readPenalty;
@property (nonatomic) double sparseTagsPenalty;
@property (nonatomic) double timeDecayPenalty;
@property (nonatomic) double nicheContentMultiplier;
@property (nonatomic) double qualitativeMultiplier;
@property (nonatomic) double halfLifeCoefficient;
@property (retain, nonatomic) NSDictionary *nicheContentScores;
@property (nonatomic) double contentTriggerDampener;
@property (nonatomic) double multiplierDampener;
@property (nonatomic) double mutedVoteDampener;
@property (retain, nonatomic) NSDictionary *contentTriggerScores;
@property (retain, nonatomic) NSDictionary *cohortMemberships;
@property (nonatomic) unsigned long long groupingReason;
@property (retain, nonatomic) NSDictionary *tagWeightsByID;
@property (retain, nonatomic) NSDictionary *featureWeightsByID;
@property (nonatomic) unsigned long long scoringType;
@property (nonatomic) long long scoringContext;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;

@end
