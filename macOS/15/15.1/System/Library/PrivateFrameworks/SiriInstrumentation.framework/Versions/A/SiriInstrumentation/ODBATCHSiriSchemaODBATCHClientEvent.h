@class ODBATCHSiriSchemaODBATCHDataReported, SISchemaInstrumentationMessage, NSData, ODBATCHSiriSchemaODBATCHClientEventMetadata;

@interface ODBATCHSiriSchemaODBATCHClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) ODBATCHSiriSchemaODBATCHClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) ODBATCHSiriSchemaODBATCHDataReported *odbatchDataReported;
@property (nonatomic) BOOL hasOdbatchDataReported;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

+ (id)getInnerTypeStringByTag:(unsigned long long)a0;

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
- (void)deleteEventMetadata;
- (void)deleteOdbatchDataReported;
- (id)qualifiedMessageName;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichInnerEventType;

@end
