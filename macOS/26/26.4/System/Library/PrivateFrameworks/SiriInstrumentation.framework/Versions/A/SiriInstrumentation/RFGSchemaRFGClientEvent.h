@class RFSchemaRFGClientEventMetadata, SISchemaInstrumentationMessage, RFSchemaRFGVisualResponseShownTier1, NSData, RFSchemaRFGVisualResponseShownLink;

@interface RFGSchemaRFGClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) RFSchemaRFGClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) RFSchemaRFGVisualResponseShownTier1 *visualResponseShownTier1;
@property (nonatomic) BOOL hasVisualResponseShownTier1;
@property (retain, nonatomic) RFSchemaRFGVisualResponseShownLink *visualResponseShownLink;
@property (nonatomic) BOOL hasVisualResponseShownLink;
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
- (void)deleteEventMetadata;
- (void)deleteVisualResponseShownLink;
- (void)deleteVisualResponseShownTier1;
- (id)getComponentId;
- (unsigned long long)whichInnerEventType;

@end
