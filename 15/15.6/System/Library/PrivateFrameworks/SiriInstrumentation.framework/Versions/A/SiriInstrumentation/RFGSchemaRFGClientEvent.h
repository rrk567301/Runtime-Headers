@class RFSchemaRFGClientEventMetadata, SISchemaInstrumentationMessage, RFSchemaRFGVisualResponseShownTier1, NSData, RFSchemaRFGVisualResponseShownLink;

@interface RFGSchemaRFGClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) RFSchemaRFGClientEventMetadata *eventMetadata;
@property (nonatomic) char hasEventMetadata;
@property (retain, nonatomic) RFSchemaRFGVisualResponseShownTier1 *visualResponseShownTier1;
@property (nonatomic) char hasVisualResponseShownTier1;
@property (retain, nonatomic) RFSchemaRFGVisualResponseShownLink *visualResponseShownLink;
@property (nonatomic) char hasVisualResponseShownLink;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

+ (id)getInnerTypeStringByTag:(unsigned long long)a0;
+ (int)joinability;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (int)componentName;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (int)getAnyEventType;
- (void)deleteEventMetadata;
- (void)deleteVisualResponseShownLink;
- (void)deleteVisualResponseShownTier1;
- (id)getComponentId;
- (id)qualifiedMessageName;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichInnerEventType;

@end
