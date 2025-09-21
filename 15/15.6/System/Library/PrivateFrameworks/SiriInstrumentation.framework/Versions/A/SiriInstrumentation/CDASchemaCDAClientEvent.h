@class CDASchemaCDADeviceStateContext, CDASchemaCDADeviceAdvertisingStartContext, SISchemaInstrumentationMessage, CDASchemaCDAClientEventMetadata, CDASchemaCDADeviceAdvertisingEndContext, CDASchemaCDAElectionTimerEnded, CDASchemaCDAUserFeedbackCompleted, CDASchemaCDAUserFeedbackParticipantCollectionReported, NSData, CDASchemaCDADebugElectionDecisionMade, CDASchemaCDAElectionDecisionMade;

@interface CDASchemaCDAClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) CDASchemaCDAClientEventMetadata *eventMetadata;
@property (nonatomic) char hasEventMetadata;
@property (retain, nonatomic) CDASchemaCDAElectionDecisionMade *electionDecisionMade;
@property (nonatomic) char hasElectionDecisionMade;
@property (retain, nonatomic) CDASchemaCDADebugElectionDecisionMade *debugElectionDecisionMade;
@property (nonatomic) char hasDebugElectionDecisionMade;
@property (retain, nonatomic) CDASchemaCDADeviceStateContext *deviceElectionStateContext;
@property (nonatomic) char hasDeviceElectionStateContext;
@property (retain, nonatomic) CDASchemaCDADeviceAdvertisingStartContext *cdaAdvertisingStartChanged;
@property (nonatomic) char hasCdaAdvertisingStartChanged;
@property (retain, nonatomic) CDASchemaCDADeviceAdvertisingEndContext *cdaAdvertisingEndChanged;
@property (nonatomic) char hasCdaAdvertisingEndChanged;
@property (retain, nonatomic) CDASchemaCDAElectionTimerEnded *electionTimerEnded;
@property (nonatomic) char hasElectionTimerEnded;
@property (retain, nonatomic) CDASchemaCDAUserFeedbackCompleted *userFeedbackCompleted;
@property (nonatomic) char hasUserFeedbackCompleted;
@property (retain, nonatomic) CDASchemaCDAUserFeedbackParticipantCollectionReported *userFeedbackParticipantCollectionReported;
@property (nonatomic) char hasUserFeedbackParticipantCollectionReported;
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
- (void)deleteDebugElectionDecisionMade;
- (int)getAnyEventType;
- (int)clockIsolationLevel;
- (void)deleteCdaAdvertisingEndChanged;
- (void)deleteCdaAdvertisingStartChanged;
- (void)deleteDeviceElectionStateContext;
- (void)deleteElectionDecisionMade;
- (void)deleteElectionTimerEnded;
- (void)deleteEventMetadata;
- (void)deleteUserFeedbackCompleted;
- (void)deleteUserFeedbackParticipantCollectionReported;
- (id)getComponentId;
- (id)qualifiedMessageName;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichInnerEventType;

@end
