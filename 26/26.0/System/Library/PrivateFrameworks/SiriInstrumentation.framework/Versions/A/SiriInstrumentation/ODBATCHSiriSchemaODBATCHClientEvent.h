@class ODBATCHSiriSchemaODBATCHDataReported, SISchemaInstrumentationMessage, ODBATCHSiriSchemaODBATCHTurnRestatementScoresReported, NSData, ODBATCHSiriSchemaODBATCHClientEventMetadata;

@interface ODBATCHSiriSchemaODBATCHClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) ODBATCHSiriSchemaODBATCHClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) ODBATCHSiriSchemaODBATCHDataReported *odbatchDataReported;
@property (nonatomic) BOOL hasOdbatchDataReported;
@property (retain, nonatomic) ODBATCHSiriSchemaODBATCHTurnRestatementScoresReported *turnRestatementScoresReported;
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
- (void)deleteEventMetadata;
- (void)deleteOdbatchDataReported;
- (void)deleteTurnRestatementScoresReported;
- (unsigned long long)whichInnerEventType;

@end
