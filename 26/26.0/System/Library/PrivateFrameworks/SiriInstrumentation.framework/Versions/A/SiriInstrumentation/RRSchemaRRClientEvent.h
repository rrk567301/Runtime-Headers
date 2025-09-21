@class SISchemaInstrumentationMessage, RRSchemaRREntityPoolReturned, RRSchemaRREntityPoolResolveContext, RRSchemaRRUsoGraphTier1, RRSchemaRRPullerContext, NSData, RRSchemaRRClientEventMetadata;

@interface RRSchemaRRClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) RRSchemaRRClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) RRSchemaRREntityPoolReturned *entityPoolReturned;
@property (nonatomic) BOOL hasEntityPoolReturned;
@property (retain, nonatomic) RRSchemaRREntityPoolResolveContext *entityPoolResolveContext;
@property (nonatomic) BOOL hasEntityPoolResolveContext;
@property (retain, nonatomic) RRSchemaRRUsoGraphTier1 *rrUsoGraphTier1;
@property (nonatomic) BOOL hasRrUsoGraphTier1;
@property (retain, nonatomic) RRSchemaRRPullerContext *pullerContext;
@property (nonatomic) BOOL hasPullerContext;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

+ (id)getInnerTypeStringByTag:(unsigned long long)a0;
+ (int)joinability;

- (int)componentName;
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
- (void)deleteEntityPoolResolveContext;
- (void)deleteEntityPoolReturned;
- (void)deleteEventMetadata;
- (void)deletePullerContext;
- (void)deleteRrUsoGraphTier1;
- (id)getComponentId;
- (unsigned long long)whichInnerEventType;

@end
