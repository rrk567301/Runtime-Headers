@class NSArray, NSData;

@interface ORCHSchemaORCHAssetsReported : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *assets;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addAssets:(id)a0;
- (unsigned long long)assetsCount;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)assetsAtIndex:(unsigned long long)a0;
- (void)clearAssets;
- (void)deleteAssets;
- (id)suppressMessageUnderConditions;

@end
