@class NSArray, NSData;

@interface CAMSchemaCAMRequestReceived : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *features;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)featureAtIndex:(unsigned long long)a0;
- (void)addFeature:(id)a0;
- (void)clearFeature;
- (void)deleteFeature;
- (unsigned long long)featureCount;

@end
