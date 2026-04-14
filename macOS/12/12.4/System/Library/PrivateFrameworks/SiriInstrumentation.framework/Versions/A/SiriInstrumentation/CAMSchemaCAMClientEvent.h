@class CAMSchemaCAMResponseGenerated, CAMSchemaCAMClientEventMetadata, NSData, CAMSchemaCAMModelExecuted, CAMSchemaCAMRequestReceived;

@interface CAMSchemaCAMClientEvent : SISchemaTopLevelUnionType

@property (retain, nonatomic) CAMSchemaCAMClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) CAMSchemaCAMRequestReceived *requestReceived;
@property (nonatomic) BOOL hasRequestReceived;
@property (retain, nonatomic) CAMSchemaCAMModelExecuted *modelExecuted;
@property (nonatomic) BOOL hasModelExecuted;
@property (retain, nonatomic) CAMSchemaCAMResponseGenerated *responseGenerated;
@property (nonatomic) BOOL hasResponseGenerated;
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
- (void)deleteRequestReceived;
- (void)deleteModelExecuted;
- (void)deleteResponseGenerated;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;

@end
