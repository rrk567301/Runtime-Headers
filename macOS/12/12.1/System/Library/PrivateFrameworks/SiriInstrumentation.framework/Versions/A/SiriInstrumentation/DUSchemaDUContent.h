@class NSData;

@interface DUSchemaDUContent : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSData *dataPayload;
@property (nonatomic) BOOL hasDataPayload;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;

@end
