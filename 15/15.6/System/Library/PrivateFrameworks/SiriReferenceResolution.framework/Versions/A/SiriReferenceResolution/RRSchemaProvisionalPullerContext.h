@class RRSchemaProvisionalPullerStarted, NSData, RRSchemaProvisionalPullerEnded, RRSchemaProvisionalPullerFailed;

@interface RRSchemaProvisionalPullerContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) RRSchemaProvisionalPullerStarted *started;
@property (nonatomic) char hasStarted;
@property (retain, nonatomic) RRSchemaProvisionalPullerEnded *ended;
@property (nonatomic) char hasEnded;
@property (retain, nonatomic) RRSchemaProvisionalPullerFailed *failed;
@property (nonatomic) char hasFailed;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichContextevent;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;

@end
