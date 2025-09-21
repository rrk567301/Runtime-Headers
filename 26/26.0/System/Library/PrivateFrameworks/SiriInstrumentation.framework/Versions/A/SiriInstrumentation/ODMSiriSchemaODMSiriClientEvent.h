@class SISchemaInstrumentationMessage, ODMSiriSchemaODMSiriCountsReported, NSData, ODMSiriSchemaODMSiriEventMetadata, ODMSiriSchemaODMSiriTaskCountsReported, ODMSiriSchemaODMSiriCountsReportedAll, ODMSiriSchemaODMSiriTurnRestatementScoresReported;

@interface ODMSiriSchemaODMSiriClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) ODMSiriSchemaODMSiriEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) ODMSiriSchemaODMSiriTaskCountsReported *taskCountsReported;
@property (nonatomic) BOOL hasTaskCountsReported;
@property (retain, nonatomic) ODMSiriSchemaODMSiriCountsReported *countsReported;
@property (nonatomic) BOOL hasCountsReported;
@property (retain, nonatomic) ODMSiriSchemaODMSiriCountsReportedAll *countsReportedAll;
@property (nonatomic) BOOL hasCountsReportedAll;
@property (retain, nonatomic) ODMSiriSchemaODMSiriTurnRestatementScoresReported *turnRestatementScoresReported;
@property (nonatomic) BOOL hasTurnRestatementScoresReported;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

+ (id)getInnerTypeStringByTag:(unsigned long long)a0;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (int)getAnyEventType;
- (id)dictionaryRepresentation;
- (id)qualifiedMessageName;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (int)clockIsolationLevel;
- (void)deleteCountsReported;
- (void)deleteCountsReportedAll;
- (void)deleteEventMetadata;
- (void)deleteTaskCountsReported;
- (void)deleteTurnRestatementScoresReported;
- (unsigned long long)whichInnerEventType;

@end
