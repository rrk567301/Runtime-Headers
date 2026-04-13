@class NLXSchemaPLUMSpanData, NSData, NLXSchemaCDMSiriVocabularySpanData;

@interface NLXSchemaCDMInternalSpanData : SISchemaInstrumentationMessage

@property (retain, nonatomic) NLXSchemaCDMSiriVocabularySpanData *siriVocabularySpanData;
@property (nonatomic) BOOL hasSiriVocabularySpanData;
@property (retain, nonatomic) NLXSchemaPLUMSpanData *plumSpanData;
@property (nonatomic) BOOL hasPlumSpanData;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;

@end
