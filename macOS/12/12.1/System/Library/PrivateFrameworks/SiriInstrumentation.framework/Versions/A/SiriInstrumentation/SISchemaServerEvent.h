@class NSData, SISchemaServerGeneratedDismissal, SISchemaDeviceFixedContext, SISchemaUserSpeechDuration, SISchemaServerEventMetadata, SISchemaTurnInteraction, SISchemaConversationTrace, SISchemaSpeechResultSelected;

@interface SISchemaServerEvent : SISchemaTopLevelUnionType

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

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (int)getAnyEventType;
- (id)qualifiedMessageName;

@end
