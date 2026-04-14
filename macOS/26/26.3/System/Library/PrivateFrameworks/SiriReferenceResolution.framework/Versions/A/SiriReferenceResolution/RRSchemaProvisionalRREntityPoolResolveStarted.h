@class NSData, USOSchemaUSOGraph;

@interface RRSchemaProvisionalRREntityPoolResolveStarted : SISchemaInstrumentationMessage

@property (retain, nonatomic) USOSchemaUSOGraph *usoQuery;
@property (nonatomic) BOOL hasUsoQuery;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
