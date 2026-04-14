@class NSData, SISchemaInstrumentationMessage, SISchemaDeviceFixedContext, SISchemaServerGeneratedDismissal, SISchemaUserSpeechDuration, SISchemaServerEventMetadata, SISchemaTurnInteraction, SISchemaConversationTrace, SISchemaSpeechResultSelected;

@interface SISchemaServerEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) SISchemaServerEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) SISchemaUserSpeechDuration *userSpeechDuration;
@property (nonatomic) BOOL hasUserSpeechDuration;
@property (retain, nonatomic) SISchemaConversationTrace *serverConversationTrace;
@property (nonatomic) BOOL hasServerConversationTrace;
@property (retain, nonatomic) SISchemaTurnInteraction *turnInteraction;
@property (nonatomic) BOOL hasTurnInteraction;
@property (retain, nonatomic) SISchemaSpeechResultSelected *speechResultSelected;
@property (nonatomic) BOOL hasSpeechResultSelected;
@property (retain, nonatomic) SISchemaDeviceFixedContext *serverDeviceFixedContext;
@property (nonatomic) BOOL hasServerDeviceFixedContext;
@property (retain, nonatomic) SISchemaServerGeneratedDismissal *serverGeneratedDismissal;
@property (nonatomic) BOOL hasServerGeneratedDismissal;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

+ (int)joinability;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (int)componentName;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (int)getAnyEventType;
- (id)qualifiedMessageName;
- (id)getComponentId;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteEventMetadata;
- (void)deleteUserSpeechDuration;
- (void)deleteServerConversationTrace;
- (void)deleteTurnInteraction;
- (void)deleteSpeechResultSelected;
- (void)deleteServerDeviceFixedContext;
- (void)deleteServerGeneratedDismissal;

@end
