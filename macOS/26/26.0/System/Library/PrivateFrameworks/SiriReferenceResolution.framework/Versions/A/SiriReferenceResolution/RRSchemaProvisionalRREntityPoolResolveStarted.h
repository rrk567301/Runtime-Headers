@class NSData, USOSchemaUSOGraph;

@interface RRSchemaProvisionalRREntityPoolResolveStarted : SISchemaInstrumentationMessage

@property (retain, nonatomic) USOSchemaUSOGraph *usoQuery;
@property (nonatomic) BOOL hasUsoQuery;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
