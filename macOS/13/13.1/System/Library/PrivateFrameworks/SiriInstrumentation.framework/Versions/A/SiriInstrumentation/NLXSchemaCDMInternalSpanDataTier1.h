@class NLXSchemaCDMSiriVocabularySpanDataTier1, NSData;

@interface NLXSchemaCDMInternalSpanDataTier1 : SISchemaInstrumentationMessage

@property (retain, nonatomic) NLXSchemaCDMSiriVocabularySpanDataTier1 *siriVocabularySpanData;
@property (nonatomic) BOOL hasSiriVocabularySpanData;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteSiriVocabularySpanData;

@end
