@class NSData, USOSchemaUSOGraphTier1;

@interface RRSchemaProvisionalRRUsoGraphTier1 : SISchemaInstrumentationMessage

@property (retain, nonatomic) USOSchemaUSOGraphTier1 *usoGraphTier1;
@property (nonatomic) BOOL hasUsoGraphTier1;
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
