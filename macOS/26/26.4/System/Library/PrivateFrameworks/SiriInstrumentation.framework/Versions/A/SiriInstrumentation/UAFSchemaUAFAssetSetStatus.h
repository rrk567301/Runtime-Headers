@class NSArray, NSData;

@interface UAFSchemaUAFAssetSetStatus : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *uafAssetSets;
@property (copy, nonatomic) NSArray *uafAssetSubscriptions;
@property (copy, nonatomic) NSArray *allAssets;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAllAssets;
- (void)addAllAssets:(id)a0;
- (void)addUafAssetSets:(id)a0;
- (void)addUafAssetSubscriptions:(id)a0;
- (id)allAssetsAtIndex:(unsigned long long)a0;
- (unsigned long long)allAssetsCount;
- (void)clearAllAssets;
- (void)clearUafAssetSets;
- (void)clearUafAssetSubscriptions;
- (void)deleteUafAssetSets;
- (void)deleteUafAssetSubscriptions;
- (id)uafAssetSetsAtIndex:(unsigned long long)a0;
- (unsigned long long)uafAssetSetsCount;
- (id)uafAssetSubscriptionsAtIndex:(unsigned long long)a0;
- (unsigned long long)uafAssetSubscriptionsCount;

@end
