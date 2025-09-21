@class NSData, NSString, STSchemaQUTokenParseInfo, STSchemaDocumentAttributes, STSchemaQueryAttributes, STSchemaTopicalityAttributes;

@interface STSchemaSTSpotlightResult : SISchemaInstrumentationMessage {
    struct { unsigned char retrievalType : 1; unsigned char likelihood : 1; unsigned char topicality : 1; unsigned char pommesL1Score : 1; unsigned char pommesAdjustedL1Score : 1; unsigned char pommesCalibratedL1Score : 1; unsigned char embeddingSimilarity : 1; unsigned char keywordMatchScore : 1; unsigned char freshness : 1; } _has;
}

@property (nonatomic) int retrievalType;
@property (nonatomic) char hasRetrievalType;
@property (copy, nonatomic) NSString *bundleId;
@property (nonatomic) char hasBundleId;
@property (nonatomic) float likelihood;
@property (nonatomic) char hasLikelihood;
@property (nonatomic) float topicality;
@property (nonatomic) char hasTopicality;
@property (nonatomic) float pommesL1Score;
@property (nonatomic) char hasPommesL1Score;
@property (nonatomic) float pommesAdjustedL1Score;
@property (nonatomic) char hasPommesAdjustedL1Score;
@property (nonatomic) float pommesCalibratedL1Score;
@property (nonatomic) char hasPommesCalibratedL1Score;
@property (nonatomic) float embeddingSimilarity;
@property (nonatomic) char hasEmbeddingSimilarity;
@property (nonatomic) float keywordMatchScore;
@property (nonatomic) char hasKeywordMatchScore;
@property (nonatomic) float freshness;
@property (nonatomic) char hasFreshness;
@property (retain, nonatomic) STSchemaQueryAttributes *queryAttributes;
@property (nonatomic) char hasQueryAttributes;
@property (retain, nonatomic) STSchemaQUTokenParseInfo *quTokenParseInfo;
@property (nonatomic) char hasQuTokenParseInfo;
@property (retain, nonatomic) STSchemaDocumentAttributes *documentAttributes;
@property (nonatomic) char hasDocumentAttributes;
@property (retain, nonatomic) STSchemaTopicalityAttributes *topicalityAttributes;
@property (nonatomic) char hasTopicalityAttributes;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteFreshness;
- (void)deleteBundleId;
- (void)deleteDocumentAttributes;
- (void)deleteEmbeddingSimilarity;
- (void)deleteKeywordMatchScore;
- (void)deleteLikelihood;
- (void)deletePommesAdjustedL1Score;
- (void)deletePommesCalibratedL1Score;
- (void)deletePommesL1Score;
- (void)deleteQuTokenParseInfo;
- (void)deleteQueryAttributes;
- (void)deleteRetrievalType;
- (void)deleteTopicality;
- (void)deleteTopicalityAttributes;
- (id)suppressMessageUnderConditions;

@end
