@class RRSchemaProvisionalRRUsoGraphTier1, RRSchemaProvisionalPullerContext, NSData, RRSchemaProvisionalRREntityPoolResolveContext, RRSchemaProvisionalRRClientEventMetadata, RRSchemaProvisionalRREntityPoolReturned;

@interface RRSchemaProvisionalRRClientEvent : SISchemaTopLevelUnionType

@property (retain, nonatomic) RRSchemaProvisionalRRClientEventMetadata *eventMetadata;
@property (nonatomic) char hasEventMetadata;
@property (retain, nonatomic) RRSchemaProvisionalPullerContext *pullerContext;
@property (nonatomic) char hasPullerContext;
@property (retain, nonatomic) RRSchemaProvisionalRREntityPoolReturned *entityPoolReturned;
@property (nonatomic) char hasEntityPoolReturned;
@property (retain, nonatomic) RRSchemaProvisionalRREntityPoolResolveContext *entityPoolResolveContext;
@property (nonatomic) char hasEntityPoolResolveContext;
@property (retain, nonatomic) RRSchemaProvisionalRRUsoGraphTier1 *rrUsoGraphTier1;
@property (nonatomic) char hasRrUsoGraphTier1;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)getVersion;
- (id)initWithJSON:(id)a0;
- (char)isProvisional;
- (int)getAnyEventType;
- (id)getTypeId;
- (id)qualifiedMessageName;

@end
