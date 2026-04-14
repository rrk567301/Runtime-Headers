@class NLXSchemaMentionResolverSpanData, NLXSchemaCDMSiriVocabularySpanData, NSData, NLXSchemaPLUMSpanData, NLXSchemaMentionDetectorSpanData;

@interface NLXSchemaCDMInternalSpanData : SISchemaInstrumentationMessage

@property (retain, nonatomic) NLXSchemaCDMSiriVocabularySpanData *siriVocabularySpanData;
@property (nonatomic) BOOL hasSiriVocabularySpanData;
@property (retain, nonatomic) NLXSchemaPLUMSpanData *plumSpanData;
@property (nonatomic) BOOL hasPlumSpanData;
@property (retain, nonatomic) NLXSchemaMentionDetectorSpanData *mentionDetectorSpanData;
@property (nonatomic) BOOL hasMentionDetectorSpanData;
@property (retain, nonatomic) NLXSchemaMentionResolverSpanData *mentionResolverSpanData;
@property (nonatomic) BOOL hasMentionResolverSpanData;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteSiriVocabularySpanData;
- (void)deletePlumSpanData;
- (void)deleteMentionDetectorSpanData;
- (void)deleteMentionResolverSpanData;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;

@end
