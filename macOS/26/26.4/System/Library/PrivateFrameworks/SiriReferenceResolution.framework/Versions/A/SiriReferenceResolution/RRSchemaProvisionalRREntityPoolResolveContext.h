@class RRSchemaProvisionalRREntityPoolResolveEnded, RRSchemaProvisionalRREntityPoolResolveStarted, NSData, RRSchemaProvisionalRREntityPoolResolveFailed;

@interface RRSchemaProvisionalRREntityPoolResolveContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) RRSchemaProvisionalRREntityPoolResolveStarted *startedOrChanged;
@property (nonatomic) BOOL hasStartedOrChanged;
@property (retain, nonatomic) RRSchemaProvisionalRREntityPoolResolveEnded *ended;
@property (nonatomic) BOOL hasEnded;
@property (retain, nonatomic) RRSchemaProvisionalRREntityPoolResolveFailed *failed;
@property (nonatomic) BOOL hasFailed;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichContextevent;

- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;

@end
