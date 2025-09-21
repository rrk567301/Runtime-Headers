@class NSString;

@interface ATXMPBAnchorModelEngagementTracker : PBCodable <NSCopying> {
    struct { unsigned char anchorPopularity : 1; unsigned char classConditionalProbability : 1; unsigned char globalPopularity : 1; unsigned char posteriorProbability : 1; unsigned char score : 1; unsigned char standardDeviationOfOffsetFromAnchor : 1; unsigned char engagementType : 1; unsigned char numPredictionsforAnchor : 1; unsigned char numUniqueOccurrencesAfterAnchor : 1; unsigned char secondsAfterAnchor : 1; } _has;
}

@property (readonly, nonatomic) char hasAnchorType;
@property (retain, nonatomic) NSString *anchorType;
@property (nonatomic) char hasScore;
@property (nonatomic) double score;
@property (readonly, nonatomic) char hasCandidateType;
@property (retain, nonatomic) NSString *candidateType;
@property (nonatomic) char hasSecondsAfterAnchor;
@property (nonatomic) unsigned int secondsAfterAnchor;
@property (nonatomic) char hasNumPredictionsforAnchor;
@property (nonatomic) unsigned int numPredictionsforAnchor;
@property (nonatomic) char hasEngagementType;
@property (nonatomic) int engagementType;
@property (readonly, nonatomic) char hasConsumerSubType;
@property (retain, nonatomic) NSString *consumerSubType;
@property (readonly, nonatomic) char hasAbGroup;
@property (retain, nonatomic) NSString *abGroup;
@property (readonly, nonatomic) char hasExecutableObject;
@property (retain, nonatomic) NSString *executableObject;
@property (nonatomic) char hasPosteriorProbability;
@property (nonatomic) double posteriorProbability;
@property (nonatomic) char hasClassConditionalProbability;
@property (nonatomic) double classConditionalProbability;
@property (nonatomic) char hasStandardDeviationOfOffsetFromAnchor;
@property (nonatomic) double standardDeviationOfOffsetFromAnchor;
@property (nonatomic) char hasNumUniqueOccurrencesAfterAnchor;
@property (nonatomic) unsigned int numUniqueOccurrencesAfterAnchor;
@property (nonatomic) char hasAnchorPopularity;
@property (nonatomic) double anchorPopularity;
@property (nonatomic) char hasGlobalPopularity;
@property (nonatomic) double globalPopularity;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsEngagementType:(id)a0;
- (id)engagementTypeAsString:(int)a0;

@end
