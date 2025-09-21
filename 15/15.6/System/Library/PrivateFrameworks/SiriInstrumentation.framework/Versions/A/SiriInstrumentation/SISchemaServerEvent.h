@class NSData, SISchemaInstrumentationMessage, SISchemaDeviceFixedContext, SISchemaServerGeneratedDismissal, SISchemaUserSpeechDuration, SISchemaServerEventMetadata, SISchemaTurnInteraction, SISchemaConversationTrace, SISchemaSpeechResultSelected;

@interface SISchemaServerEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) SISchemaServerEventMetadata *eventMetadata;
@property (nonatomic) char hasEventMetadata;
@property (retain, nonatomic) SISchemaUserSpeechDuration *userSpeechDuration;
@property (nonatomic) char hasUserSpeechDuration;
@property (retain, nonatomic) SISchemaConversationTrace *serverConversationTrace;
@property (nonatomic) char hasServerConversationTrace;
@property (retain, nonatomic) SISchemaTurnInteraction *turnInteraction;
@property (nonatomic) char hasTurnInteraction;
@property (retain, nonatomic) SISchemaSpeechResultSelected *speechResultSelected;
@property (nonatomic) char hasSpeechResultSelected;
@property (retain, nonatomic) SISchemaDeviceFixedContext *serverDeviceFixedContext;
@property (nonatomic) char hasServerDeviceFixedContext;
@property (retain, nonatomic) SISchemaServerGeneratedDismissal *serverGeneratedDismissal;
@property (nonatomic) char hasServerGeneratedDismissal;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

+ (id)getInnerTypeStringByTag:(unsigned long long)a0;
+ (int)joinability;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (int)componentName;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (int)getAnyEventType;
- (void)deleteEventMetadata;
- (void)deleteServerConversationTrace;
- (void)deleteServerDeviceFixedContext;
- (void)deleteServerGeneratedDismissal;
- (void)deleteSpeechResultSelected;
- (void)deleteTurnInteraction;
- (void)deleteUserSpeechDuration;
- (id)getComponentId;
- (id)qualifiedMessageName;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichInnerEventType;

@end
