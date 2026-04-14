@class NSData, IDENTITYSchemaIDENTITYIdentityRequestContext, SISchemaInstrumentationMessage, IDENTITYSchemaIDENTITYResultCandidateReceived, IDENTITYSchemaIDENTITYFirstVoiceObservationSubmitted, IDENTITYSchemaIDENTITYAskUserForDisambiguationDecisionReported, IDENTITYSchemaIDENTITYFirstIdentityReceived, IDENTITYSchemaIDENTITYUsersPresencesCaptured, IDENTITYSchemaIDENTITYClientEventMetadata, IDENTITYSchemaIDENTITYScoreCardsGenerated, IDENTITYSchemaIDENTITYUserPresenceSourceCaptured;

@interface IDENTITYSchemaIDENTITYClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) IDENTITYSchemaIDENTITYClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) IDENTITYSchemaIDENTITYScoreCardsGenerated *scoreCardsGenerated;
@property (nonatomic) BOOL hasScoreCardsGenerated;
@property (retain, nonatomic) IDENTITYSchemaIDENTITYIdentityRequestContext *entityKitRequestContext;
@property (nonatomic) BOOL hasEntityKitRequestContext;
@property (retain, nonatomic) IDENTITYSchemaIDENTITYFirstVoiceObservationSubmitted *firstVoiceIdSubmitted;
@property (nonatomic) BOOL hasFirstVoiceIdSubmitted;
@property (retain, nonatomic) IDENTITYSchemaIDENTITYFirstIdentityReceived *firstIdentityReceived;
@property (nonatomic) BOOL hasFirstIdentityReceived;
@property (retain, nonatomic) IDENTITYSchemaIDENTITYResultCandidateReceived *resultCandidateReceived;
@property (nonatomic) BOOL hasResultCandidateReceived;
@property (retain, nonatomic) IDENTITYSchemaIDENTITYUserPresenceSourceCaptured *userPresenceSourceCaptured;
@property (nonatomic) BOOL hasUserPresenceSourceCaptured;
@property (retain, nonatomic) IDENTITYSchemaIDENTITYAskUserForDisambiguationDecisionReported *userDisambiguationDecisionReported;
@property (nonatomic) BOOL hasUserDisambiguationDecisionReported;
@property (retain, nonatomic) IDENTITYSchemaIDENTITYUsersPresencesCaptured *usersPresencesCaptured;
@property (nonatomic) BOOL hasUsersPresencesCaptured;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

+ (id)getInnerTypeStringByTag:(unsigned long long)a0;
+ (int)joinability;

- (id)suppressMessageUnderConditions;
- (int)getAnyEventType;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (int)componentName;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (id)qualifiedMessageName;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteEntityKitRequestContext;
- (void)deleteEventMetadata;
- (void)deleteFirstIdentityReceived;
- (void)deleteFirstVoiceIdSubmitted;
- (void)deleteResultCandidateReceived;
- (void)deleteScoreCardsGenerated;
- (void)deleteUserDisambiguationDecisionReported;
- (void)deleteUserPresenceSourceCaptured;
- (void)deleteUsersPresencesCaptured;
- (id)getComponentId;
- (unsigned long long)whichInnerEventType;

@end
