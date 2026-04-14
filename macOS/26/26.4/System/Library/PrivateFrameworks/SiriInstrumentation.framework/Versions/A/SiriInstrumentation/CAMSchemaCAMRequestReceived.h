@class NSArray, NSData;

@interface CAMSchemaCAMRequestReceived : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *features;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)featureAtIndex:(unsigned long long)a0;
- (void)addFeature:(id)a0;
- (void)clearFeature;
- (void)deleteFeature;
- (unsigned long long)featureCount;

@end
