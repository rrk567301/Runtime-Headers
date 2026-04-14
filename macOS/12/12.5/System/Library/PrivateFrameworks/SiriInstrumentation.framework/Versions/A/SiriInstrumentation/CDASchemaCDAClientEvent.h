@class CDASchemaCDAElectionDecisionMade, CDASchemaCDADeviceAdvertisingStartContext, CDASchemaCDAClientEventMetadata, CDASchemaCDADeviceAdvertisingEndContext, CDASchemaCDAElectionTimerEnded, NSData, CDASchemaCDADebugElectionDecisionMade, CDASchemaCDADeviceStateContext;

@interface CDASchemaCDAClientEvent : SISchemaTopLevelUnionType

@property (retain, nonatomic) CDASchemaCDAClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) CDASchemaCDAElectionDecisionMade *electionDecisionMade;
@property (nonatomic) BOOL hasElectionDecisionMade;
@property (retain, nonatomic) CDASchemaCDADebugElectionDecisionMade *debugElectionDecisionMade;
@property (nonatomic) BOOL hasDebugElectionDecisionMade;
@property (retain, nonatomic) CDASchemaCDADeviceStateContext *deviceElectionStateContext;
@property (nonatomic) BOOL hasDeviceElectionStateContext;
@property (retain, nonatomic) CDASchemaCDADeviceAdvertisingStartContext *cdaAdvertisingStartChanged;
@property (nonatomic) BOOL hasCdaAdvertisingStartChanged;
@property (retain, nonatomic) CDASchemaCDADeviceAdvertisingEndContext *cdaAdvertisingEndChanged;
@property (nonatomic) BOOL hasCdaAdvertisingEndChanged;
@property (retain, nonatomic) CDASchemaCDAElectionTimerEnded *electionTimerEnded;
@property (nonatomic) BOOL hasElectionTimerEnded;
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
- (void)deleteEventMetadata;
- (void)deleteElectionDecisionMade;
- (void)deleteDebugElectionDecisionMade;
- (void)deleteDeviceElectionStateContext;
- (void)deleteCdaAdvertisingStartChanged;
- (void)deleteCdaAdvertisingEndChanged;
- (void)deleteElectionTimerEnded;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;

@end
