@class SISchemaInstrumentationMessage, ACTVSchemaACTVButtonInteractionDetected, NSData, ACTVSchemaACTVTurnActivated, ACTVSchemaACTVClientEventMetadata;

@interface ACTVSchemaACTVClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) ACTVSchemaACTVClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) ACTVSchemaACTVButtonInteractionDetected *buttonInteractionDetected;
@property (nonatomic) BOOL hasButtonInteractionDetected;
@property (retain, nonatomic) ACTVSchemaACTVTurnActivated *turnActivated;
@property (nonatomic) BOOL hasTurnActivated;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

+ (id)getInnerTypeStringByTag:(unsigned long long)a0;
+ (int)joinability;

- (id)applySensitiveConditionsPolicy:(id)a0;
- (int)componentName;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (id)initWithJSON:(id)a0;
- (id)qualifiedMessageName;
- (int)getAnyEventType;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)deleteButtonInteractionDetected;
- (void)deleteEventMetadata;
- (void)deleteTurnActivated;
- (id)getComponentId;
- (unsigned long long)whichInnerEventType;

@end
