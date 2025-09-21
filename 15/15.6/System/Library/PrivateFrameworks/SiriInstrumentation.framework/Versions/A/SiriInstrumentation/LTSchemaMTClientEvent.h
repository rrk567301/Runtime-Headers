@class NSData, LTSchemaSpeechTranslationEvent, SISchemaInstrumentationMessage, LTSchemaDisambiguationSpeechTranslationEvent, LTSchemaASRSpeechTranslationEvent, LTSchemaSafariFeedbackEvent, LTSchemaTTSSpeechTranslationEvent, LTSchemaBatchTranslationEvent, LTSchemaLIDSpeechTranslationEvent, LTSchemaMTSpeechTranslationEvent;

@interface LTSchemaMTClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) LTSchemaSafariFeedbackEvent *safariFeedbackEvent;
@property (nonatomic) char hasSafariFeedbackEvent;
@property (retain, nonatomic) LTSchemaBatchTranslationEvent *batchTranslationEvent;
@property (nonatomic) char hasBatchTranslationEvent;
@property (retain, nonatomic) LTSchemaSpeechTranslationEvent *speechTranslationEvent;
@property (nonatomic) char hasSpeechTranslationEvent;
@property (retain, nonatomic) LTSchemaLIDSpeechTranslationEvent *lidSpeechTranslationEvent;
@property (nonatomic) char hasLidSpeechTranslationEvent;
@property (retain, nonatomic) LTSchemaDisambiguationSpeechTranslationEvent *disambiguationSpeechTranslationEvent;
@property (nonatomic) char hasDisambiguationSpeechTranslationEvent;
@property (retain, nonatomic) LTSchemaASRSpeechTranslationEvent *asrSpeechTranslationEvent;
@property (nonatomic) char hasAsrSpeechTranslationEvent;
@property (retain, nonatomic) LTSchemaMTSpeechTranslationEvent *mtSpeechTranslationEvent;
@property (nonatomic) char hasMtSpeechTranslationEvent;
@property (retain, nonatomic) LTSchemaTTSSpeechTranslationEvent *ttsspeechTranslationEvent;
@property (nonatomic) char hasTtsspeechTranslationEvent;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

+ (id)getInnerTypeStringByTag:(unsigned long long)a0;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAsrSpeechTranslationEvent;
- (void)deleteTtsspeechTranslationEvent;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteLidSpeechTranslationEvent;
- (int)getAnyEventType;
- (void)deleteBatchTranslationEvent;
- (void)deleteDisambiguationSpeechTranslationEvent;
- (void)deleteMtSpeechTranslationEvent;
- (void)deleteSafariFeedbackEvent;
- (void)deleteSpeechTranslationEvent;
- (id)qualifiedMessageName;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichInnerEventType;

@end
