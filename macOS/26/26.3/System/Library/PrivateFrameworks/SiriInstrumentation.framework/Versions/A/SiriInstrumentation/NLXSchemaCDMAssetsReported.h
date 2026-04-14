@class NSArray, NSData;

@interface NLXSchemaCDMAssetsReported : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *assets;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)assetsCount;
- (void)addAssets:(id)a0;
- (id)assetsAtIndex:(unsigned long long)a0;
- (void)clearAssets;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteAssets;

@end
