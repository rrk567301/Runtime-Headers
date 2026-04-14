@class FLOWSchemaFLOWEventMetadata, FLOWSchemaFLOWStep, NSData;

@interface FLOWSchemaFLOWServerEvent : SISchemaTopLevelUnionType

@property (retain, nonatomic) FLOWSchemaFLOWEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) FLOWSchemaFLOWStep *flowStep;
@property (nonatomic) BOOL hasFlowStep;
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
- (void)deleteFlowStep;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;

@end
