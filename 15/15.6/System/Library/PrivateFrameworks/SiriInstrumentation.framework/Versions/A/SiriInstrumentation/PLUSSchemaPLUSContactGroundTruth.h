@class NSData, SISchemaUUID;

@interface PLUSSchemaPLUSContactGroundTruth : SISchemaInstrumentationMessage {
    struct { unsigned char groundTruthSource : 1; unsigned char hasSiriResolvedContactForEntity : 1; unsigned char siriResolvedAndPlusInferredContactComparison : 1; unsigned char contactSuggestionUsedBySiri : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *groundTruthId;
@property (nonatomic) char hasGroundTruthId;
@property (nonatomic) int groundTruthSource;
@property (nonatomic) char hasGroundTruthSource;
@property (nonatomic) char hasSiriResolvedContactForEntity;
@property (nonatomic) char hasHasSiriResolvedContactForEntity;
@property (nonatomic) int siriResolvedAndPlusInferredContactComparison;
@property (nonatomic) char hasSiriResolvedAndPlusInferredContactComparison;
@property (nonatomic) int contactSuggestionUsedBySiri;
@property (nonatomic) char hasContactSuggestionUsedBySiri;
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
- (void)deleteContactSuggestionUsedBySiri;
- (void)deleteGroundTruthId;
- (void)deleteGroundTruthSource;
- (void)deleteHasSiriResolvedContactForEntity;
- (void)deleteSiriResolvedAndPlusInferredContactComparison;
- (id)suppressMessageUnderConditions;

@end
