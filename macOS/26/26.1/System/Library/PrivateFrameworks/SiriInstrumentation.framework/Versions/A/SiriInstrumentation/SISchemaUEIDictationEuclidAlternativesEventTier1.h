@class SISchemaEuclidConfusionPair, NSData;

@interface SISchemaUEIDictationEuclidAlternativesEventTier1 : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaEuclidConfusionPair *confusionPair;
@property (nonatomic) BOOL hasConfusionPair;
@property (readonly, nonatomic) NSData *jsonData;

- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)deleteConfusionPair;

@end
