@class NLXSchemaMentionResolverSpanData, NLXSchemaCDMSiriVocabularySpanData, NSData, NLXSchemaContextualSpanData, NLXSchemaPLUMSpanData, NLXSchemaMentionDetectorSpanData;

@interface NLXSchemaCDMInternalSpanData : SISchemaInstrumentationMessage

@property (retain, nonatomic) NLXSchemaCDMSiriVocabularySpanData *siriVocabularySpanData;
@property (nonatomic) BOOL hasSiriVocabularySpanData;
@property (retain, nonatomic) NLXSchemaPLUMSpanData *plumSpanData;
@property (nonatomic) BOOL hasPlumSpanData;
@property (retain, nonatomic) NLXSchemaMentionDetectorSpanData *mentionDetectorSpanData;
@property (nonatomic) BOOL hasMentionDetectorSpanData;
@property (retain, nonatomic) NLXSchemaMentionResolverSpanData *mentionResolverSpanData;
@property (nonatomic) BOOL hasMentionResolverSpanData;
@property (retain, nonatomic) NLXSchemaContextualSpanData *contextualSpanData;
@property (nonatomic) BOOL hasContextualSpanData;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteContextualSpanData;
- (void)deleteMentionDetectorSpanData;
- (void)deleteMentionResolverSpanData;
- (void)deletePlumSpanData;
- (void)deleteSiriVocabularySpanData;

@end
