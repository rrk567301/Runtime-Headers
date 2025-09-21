@class SISchemaInstrumentationMessage, RRSchemaRREntityPoolReturned, RRSchemaRREntityPoolResolveContext, RRSchemaRRUsoGraphTier1, RRSchemaRRPullerContext, NSData, RRSchemaRRClientEventMetadata;

@interface RRSchemaRRClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) RRSchemaRRClientEventMetadata *eventMetadata;
@property (nonatomic) char hasEventMetadata;
@property (retain, nonatomic) RRSchemaRREntityPoolReturned *entityPoolReturned;
@property (nonatomic) char hasEntityPoolReturned;
@property (retain, nonatomic) RRSchemaRREntityPoolResolveContext *entityPoolResolveContext;
@property (nonatomic) char hasEntityPoolResolveContext;
@property (retain, nonatomic) RRSchemaRRUsoGraphTier1 *rrUsoGraphTier1;
@property (nonatomic) char hasRrUsoGraphTier1;
@property (retain, nonatomic) RRSchemaRRPullerContext *pullerContext;
@property (nonatomic) char hasPullerContext;
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
- (void)deleteEntityPoolResolveContext;
- (void)deleteEntityPoolReturned;
- (void)deleteEventMetadata;
- (void)deletePullerContext;
- (void)deleteRrUsoGraphTier1;
- (id)getComponentId;
- (id)qualifiedMessageName;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichInnerEventType;

@end
