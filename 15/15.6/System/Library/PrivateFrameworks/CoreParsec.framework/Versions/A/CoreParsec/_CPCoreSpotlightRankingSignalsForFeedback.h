@class NSData, NSString;

@interface _CPCoreSpotlightRankingSignalsForFeedback : PBCodable <_CPCoreSpotlightRankingSignalsForFeedback, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) float topicalityScore;
@property (nonatomic) float freshness;
@property (nonatomic) float engagementScore;
@property (nonatomic) float predictedLikelihoodOfEngagement;
@property (nonatomic) char wasNominatedAsTopHit;
@property (nonatomic) float sodiumL2Score;
@property (nonatomic) char isExactMatchOfLaunchString;
@property (nonatomic) char wasEngagedInSpotlight;
@property (nonatomic) int resultQueryRecency;
@property (nonatomic) float pommesL2Score;
@property (nonatomic) char isSemanticMatch;
@property (nonatomic) float semanticScore;
@property (nonatomic) char isSyntacticMatch;
@property (nonatomic) float syntacticScore;
@property (nonatomic) int embeddingStatus;
@property (nonatomic) unsigned int itemAgeInDays;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (char)isEqual:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithFacade:(id)a0;

@end
