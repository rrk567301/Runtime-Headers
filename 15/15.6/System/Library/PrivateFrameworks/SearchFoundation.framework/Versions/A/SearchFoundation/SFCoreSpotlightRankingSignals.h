@class NSString, NSDictionary, NSData, NSNumber;

@interface SFCoreSpotlightRankingSignals : NSObject <SFCoreSpotlightRankingSignals, NSSecureCoding, NSCopying> {
    struct { unsigned char wasNominatedAsTopHit : 1; unsigned char isExactMatchOfLaunchString : 1; unsigned char wasEngagedInSpotlight : 1; unsigned char resultQueryRecency : 1; unsigned char isSemanticMatch : 1; unsigned char isSyntacticMatch : 1; unsigned char embeddingStatus : 1; unsigned char itemAgeInDays : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSNumber *topicalityScore;
@property (copy, nonatomic) NSNumber *freshness;
@property (copy, nonatomic) NSNumber *engagementScore;
@property (copy, nonatomic) NSNumber *predictedLikelihoodOfEngagement;
@property (nonatomic) char wasNominatedAsTopHit;
@property (copy, nonatomic) NSNumber *sodiumL2Score;
@property (nonatomic) char isExactMatchOfLaunchString;
@property (nonatomic) char wasEngagedInSpotlight;
@property (nonatomic) int resultQueryRecency;
@property (copy, nonatomic) NSNumber *pommesL2Score;
@property (nonatomic) char isSemanticMatch;
@property (copy, nonatomic) NSNumber *semanticScore;
@property (nonatomic) char isSyntacticMatch;
@property (copy, nonatomic) NSNumber *syntacticScore;
@property (nonatomic) int embeddingStatus;
@property (nonatomic) unsigned long long itemAgeInDays;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithProtobuf:(id)a0;
- (char)hasEmbeddingStatus;
- (char)hasIsExactMatchOfLaunchString;
- (char)hasIsSemanticMatch;
- (char)hasIsSyntacticMatch;
- (char)hasItemAgeInDays;
- (char)hasResultQueryRecency;
- (char)hasWasEngagedInSpotlight;
- (char)hasWasNominatedAsTopHit;

@end
