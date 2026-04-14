@class SISchemaInstrumentationMessage, ASRSpeechProfileSchemaASRSpeechProfileUpdateContext, ASRSpeechProfileSchemaASRSpeechProfileClientEventMetadata, NSData;

@interface ASRSpeechProfileSchemaASRSpeechProfileClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) ASRSpeechProfileSchemaASRSpeechProfileClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) ASRSpeechProfileSchemaASRSpeechProfileUpdateContext *speechProfileUpdateContext;
@property (nonatomic) BOOL hasSpeechProfileUpdateContext;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

+ (id)getInnerTypeStringByTag:(unsigned long long)a0;

- (id)suppressMessageUnderConditions;
- (int)getAnyEventType;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (id)qualifiedMessageName;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (int)clockIsolationLevel;
- (void)deleteEventMetadata;
- (void)deleteSpeechProfileUpdateContext;
- (unsigned long long)whichInnerEventType;

@end
