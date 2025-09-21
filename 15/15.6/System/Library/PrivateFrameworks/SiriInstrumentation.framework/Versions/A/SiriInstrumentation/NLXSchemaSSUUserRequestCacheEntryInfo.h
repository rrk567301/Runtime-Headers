@class NSData, NLXSchemaSSUUserRequestMatchInfo;

@interface NLXSchemaSSUUserRequestCacheEntryInfo : SISchemaInstrumentationMessage {
    struct { unsigned char triggerReason : 1; unsigned char categoryType : 1; unsigned char numEncodingSimilarityScoreComparisons : 1; unsigned char closestNegativeExampleScore : 1; unsigned char closestPositiveExampleScore : 1; } _has;
}

@property (nonatomic) int triggerReason;
@property (nonatomic) char hasTriggerReason;
@property (nonatomic) int categoryType;
@property (nonatomic) char hasCategoryType;
@property (nonatomic) unsigned int numEncodingSimilarityScoreComparisons;
@property (nonatomic) char hasNumEncodingSimilarityScoreComparisons;
@property (nonatomic) double closestNegativeExampleScore;
@property (nonatomic) char hasClosestNegativeExampleScore;
@property (nonatomic) double closestPositiveExampleScore;
@property (nonatomic) char hasClosestPositiveExampleScore;
@property (retain, nonatomic) NLXSchemaSSUUserRequestMatchInfo *matchInfo;
@property (nonatomic) char hasMatchInfo;
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
- (void)deleteMatchInfo;
- (void)deleteCategoryType;
- (void)deleteClosestNegativeExampleScore;
- (void)deleteClosestPositiveExampleScore;
- (void)deleteNumEncodingSimilarityScoreComparisons;
- (void)deleteTriggerReason;
- (id)suppressMessageUnderConditions;

@end
