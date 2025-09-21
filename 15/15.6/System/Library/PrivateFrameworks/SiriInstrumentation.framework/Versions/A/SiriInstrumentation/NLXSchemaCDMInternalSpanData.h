@class NLXSchemaMentionResolverSpanData, NLXSchemaCDMSiriVocabularySpanData, NSData, NLXSchemaContextualSpanData, NLXSchemaPLUMSpanData, NLXSchemaMentionDetectorSpanData;

@interface NLXSchemaCDMInternalSpanData : SISchemaInstrumentationMessage

@property (retain, nonatomic) NLXSchemaCDMSiriVocabularySpanData *siriVocabularySpanData;
@property (nonatomic) char hasSiriVocabularySpanData;
@property (retain, nonatomic) NLXSchemaPLUMSpanData *plumSpanData;
@property (nonatomic) char hasPlumSpanData;
@property (retain, nonatomic) NLXSchemaMentionDetectorSpanData *mentionDetectorSpanData;
@property (nonatomic) char hasMentionDetectorSpanData;
@property (retain, nonatomic) NLXSchemaMentionResolverSpanData *mentionResolverSpanData;
@property (nonatomic) char hasMentionResolverSpanData;
@property (retain, nonatomic) NLXSchemaContextualSpanData *contextualSpanData;
@property (nonatomic) char hasContextualSpanData;
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
- (void)deleteContextualSpanData;
- (void)deleteMentionDetectorSpanData;
- (void)deleteMentionResolverSpanData;
- (void)deletePlumSpanData;
- (void)deleteSiriVocabularySpanData;
- (id)suppressMessageUnderConditions;

@end
