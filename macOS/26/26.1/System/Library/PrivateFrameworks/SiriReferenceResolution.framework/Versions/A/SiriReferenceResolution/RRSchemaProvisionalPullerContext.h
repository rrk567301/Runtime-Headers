@class RRSchemaProvisionalPullerStarted, NSData, RRSchemaProvisionalPullerEnded, RRSchemaProvisionalPullerFailed;

@interface RRSchemaProvisionalPullerContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) RRSchemaProvisionalPullerStarted *started;
@property (nonatomic) BOOL hasStarted;
@property (retain, nonatomic) RRSchemaProvisionalPullerEnded *ended;
@property (nonatomic) BOOL hasEnded;
@property (retain, nonatomic) RRSchemaProvisionalPullerFailed *failed;
@property (nonatomic) BOOL hasFailed;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichContextevent;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
