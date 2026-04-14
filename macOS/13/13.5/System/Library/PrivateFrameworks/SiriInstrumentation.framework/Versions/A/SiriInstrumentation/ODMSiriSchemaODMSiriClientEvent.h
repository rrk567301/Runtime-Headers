@class SISchemaInstrumentationMessage, ODMSiriSchemaODMSiriCountsReported, ODMSiriSchemaODMSiriEventMetadata, ODMSiriSchemaODMSiriTaskCountsReported, NSData;

@interface ODMSiriSchemaODMSiriClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) ODMSiriSchemaODMSiriEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) ODMSiriSchemaODMSiriTaskCountsReported *taskCountsReported;
@property (nonatomic) BOOL hasTaskCountsReported;
@property (retain, nonatomic) ODMSiriSchemaODMSiriCountsReported *countsReported;
@property (nonatomic) BOOL hasCountsReported;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (int)getAnyEventType;
- (int)clockIsolationLevel;
- (void)deleteCountsReported;
- (void)deleteEventMetadata;
- (void)deleteTaskCountsReported;
- (id)qualifiedMessageName;
- (id)suppressMessageUnderConditions;

@end
