@class NSArray, NSData;

@interface ORCHSchemaORCHAssetsReported : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *assets;
@property (readonly, nonatomic) NSData *jsonData;

- (void)addAssets:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)assetsAtIndex:(unsigned long long)a0;
- (void)clearAssets;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)assetsCount;
- (id)initWithJSON:(id)a0;
- (void)deleteAssets;

@end
