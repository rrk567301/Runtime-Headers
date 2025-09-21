@class NTPBScoreProfileDebug, NTPBScoringCohort, NTPBCoefficients, NSMutableArray;

@interface NTPBScoreProfile : PBCodable <NSCopying> {
    struct { unsigned char agedPersonalizationScore : 1; unsigned char autoSubscribeCtr : 1; unsigned char computedGlobalScoreCoefficient : 1; unsigned char contentTriggerDampener : 1; unsigned char conversionMultiplier : 1; unsigned char dampenedStaticMultiplier : 1; unsigned char democratizationFactor : 1; unsigned char embeddingScore : 1; unsigned char featureCtr : 1; unsigned char multiplier : 1; unsigned char nicheContentMultiplier : 1; unsigned char paidNonpaidSubscriptionCtr : 1; unsigned char personalizationScore : 1; unsigned char publisherDampener : 1; unsigned char publisherFavorability : 1; unsigned char qualitativeMultiplier : 1; unsigned char rawPersonalizationScore : 1; unsigned char rawUserFeedbackScore : 1; unsigned char scoringVersion : 1; unsigned char serverScoreDemocratizationFactor : 1; unsigned char shadowAgedPersonalizationScore : 1; unsigned char shadowTabiScore : 1; unsigned char staticMultiplier : 1; unsigned char subscribedChannelCtr : 1; unsigned char tabiScore : 1; unsigned char userFeedbackScore : 1; unsigned char isCoread : 1; unsigned char isEvergreen : 1; } _has;
}

@property (nonatomic) char hasFeatureCtr;
@property (nonatomic) double featureCtr;
@property (nonatomic) char hasSubscribedChannelCtr;
@property (nonatomic) double subscribedChannelCtr;
@property (nonatomic) char hasPaidNonpaidSubscriptionCtr;
@property (nonatomic) double paidNonpaidSubscriptionCtr;
@property (nonatomic) char hasAutoSubscribeCtr;
@property (nonatomic) double autoSubscribeCtr;
@property (nonatomic) char hasComputedGlobalScoreCoefficient;
@property (nonatomic) double computedGlobalScoreCoefficient;
@property (nonatomic) char hasUserFeedbackScore;
@property (nonatomic) double userFeedbackScore;
@property (nonatomic) char hasRawUserFeedbackScore;
@property (nonatomic) double rawUserFeedbackScore;
@property (nonatomic) char hasRawPersonalizationScore;
@property (nonatomic) double rawPersonalizationScore;
@property (nonatomic) char hasPersonalizationScore;
@property (nonatomic) double personalizationScore;
@property (nonatomic) char hasAgedPersonalizationScore;
@property (nonatomic) double agedPersonalizationScore;
@property (nonatomic) char hasConversionMultiplier;
@property (nonatomic) double conversionMultiplier;
@property (nonatomic) char hasDampenedStaticMultiplier;
@property (nonatomic) double dampenedStaticMultiplier;
@property (nonatomic) char hasStaticMultiplier;
@property (nonatomic) double staticMultiplier;
@property (nonatomic) char hasQualitativeMultiplier;
@property (nonatomic) double qualitativeMultiplier;
@property (retain, nonatomic) NSMutableArray *cohortMemberships;
@property (nonatomic) char hasEmbeddingScore;
@property (nonatomic) double embeddingScore;
@property (nonatomic) char hasPublisherDampener;
@property (nonatomic) double publisherDampener;
@property (nonatomic) char hasTabiScore;
@property (nonatomic) double tabiScore;
@property (nonatomic) char hasPublisherFavorability;
@property (nonatomic) double publisherFavorability;
@property (nonatomic) char hasIsEvergreen;
@property (nonatomic) char isEvergreen;
@property (readonly, nonatomic) char hasGlobalCohort;
@property (retain, nonatomic) NTPBScoringCohort *globalCohort;
@property (readonly, nonatomic) char hasCoefficients;
@property (retain, nonatomic) NTPBCoefficients *coefficients;
@property (nonatomic) char hasScoringVersion;
@property (nonatomic) unsigned long long scoringVersion;
@property (nonatomic) char hasShadowTabiScore;
@property (nonatomic) double shadowTabiScore;
@property (nonatomic) char hasShadowAgedPersonalizationScore;
@property (nonatomic) double shadowAgedPersonalizationScore;
@property (nonatomic) char hasMultiplier;
@property (nonatomic) double multiplier;
@property (nonatomic) char hasDemocratizationFactor;
@property (nonatomic) double democratizationFactor;
@property (nonatomic) char hasNicheContentMultiplier;
@property (nonatomic) double nicheContentMultiplier;
@property (nonatomic) char hasContentTriggerDampener;
@property (nonatomic) double contentTriggerDampener;
@property (nonatomic) char hasServerScoreDemocratizationFactor;
@property (nonatomic) double serverScoreDemocratizationFactor;
@property (nonatomic) char hasIsCoread;
@property (nonatomic) char isCoread;
@property (readonly, nonatomic) char hasDebugFields;
@property (retain, nonatomic) NTPBScoreProfileDebug *debugFields;

+ (Class)cohortMembershipsType;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addCohortMemberships:(id)a0;
- (void)clearCohortMemberships;
- (id)cohortMembershipsAtIndex:(unsigned long long)a0;
- (unsigned long long)cohortMembershipsCount;

@end
