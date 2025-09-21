@class NSData;

@interface NLXSchemaCDMSiriVocabularySpanDataTier1 : SISchemaInstrumentationMessage {
    struct { unsigned char priorOrdinality : 1; unsigned char priorScore : 1; } _has;
}

@property (nonatomic) unsigned int priorOrdinality;
@property (nonatomic) char hasPriorOrdinality;
@property (nonatomic) double priorScore;
@property (nonatomic) char hasPriorScore;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deletePriorOrdinality;
- (void)deletePriorScore;
- (id)suppressMessageUnderConditions;

@end
