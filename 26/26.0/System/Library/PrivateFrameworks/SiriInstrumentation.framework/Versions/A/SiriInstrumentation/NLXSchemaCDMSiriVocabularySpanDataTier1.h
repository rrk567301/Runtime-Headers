@class NSData;

@interface NLXSchemaCDMSiriVocabularySpanDataTier1 : SISchemaInstrumentationMessage {
    struct { unsigned char priorOrdinality : 1; unsigned char priorScore : 1; } _has;
}

@property (nonatomic) unsigned int priorOrdinality;
@property (nonatomic) BOOL hasPriorOrdinality;
@property (nonatomic) double priorScore;
@property (nonatomic) BOOL hasPriorScore;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)deletePriorOrdinality;
- (void)deletePriorScore;

@end
