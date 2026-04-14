@class RRSchemaProvisionalRRUsoGraphTier1, RRSchemaProvisionalPullerContext, NSData, RRSchemaProvisionalRREntityPoolResolveContext, RRSchemaProvisionalRRClientEventMetadata, RRSchemaProvisionalRREntityPoolReturned;

@interface RRSchemaProvisionalRRClientEvent : SISchemaTopLevelUnionType

@property (retain, nonatomic) RRSchemaProvisionalRRClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) RRSchemaProvisionalPullerContext *pullerContext;
@property (nonatomic) BOOL hasPullerContext;
@property (retain, nonatomic) RRSchemaProvisionalRREntityPoolReturned *entityPoolReturned;
@property (nonatomic) BOOL hasEntityPoolReturned;
@property (retain, nonatomic) RRSchemaProvisionalRREntityPoolResolveContext *entityPoolResolveContext;
@property (nonatomic) BOOL hasEntityPoolResolveContext;
@property (retain, nonatomic) RRSchemaProvisionalRRUsoGraphTier1 *rrUsoGraphTier1;
@property (nonatomic) BOOL hasRrUsoGraphTier1;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

- (id)getVersion;
- (id)initWithJSON:(id)a0;
- (BOOL)isProvisional;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (id)qualifiedMessageName;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (int)getAnyEventType;
- (id)initWithDictionary:(id)a0;
- (id)getTypeId;
- (id)dictionaryRepresentation;

@end
