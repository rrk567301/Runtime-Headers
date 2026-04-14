@class NSString, NSArray, NSData;

@interface UAFSchemaUAFAssetSetSubscription : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *subscriptionName;
@property (nonatomic) BOOL hasSubscriptionName;
@property (copy, nonatomic) NSArray *assetSetIndices;
@property (copy, nonatomic) NSArray *assetSetUsages;
@property (copy, nonatomic) NSArray *usageAliases;
@property (copy, nonatomic) NSArray *alteredAssetSets;
@property (copy, nonatomic) NSArray *eliminatedAssetSets;
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
- (void)addAlteredAssetSets:(id)a0;
- (void)addAssetSetIndices:(unsigned int)a0;
- (void)addAssetSetUsages:(id)a0;
- (void)addEliminatedAssetSets:(id)a0;
- (void)addUsageAliases:(id)a0;
- (id)alteredAssetSetsAtIndex:(unsigned long long)a0;
- (unsigned long long)alteredAssetSetsCount;
- (unsigned int)assetSetIndicesAtIndex:(unsigned long long)a0;
- (unsigned long long)assetSetIndicesCount;
- (id)assetSetUsagesAtIndex:(unsigned long long)a0;
- (unsigned long long)assetSetUsagesCount;
- (void)clearAlteredAssetSets;
- (void)clearAssetSetIndices;
- (void)clearAssetSetUsages;
- (void)clearEliminatedAssetSets;
- (void)clearUsageAliases;
- (void)deleteAlteredAssetSets;
- (void)deleteAssetSetIndices;
- (void)deleteAssetSetUsages;
- (void)deleteEliminatedAssetSets;
- (void)deleteSubscriptionName;
- (void)deleteUsageAliases;
- (id)eliminatedAssetSetsAtIndex:(unsigned long long)a0;
- (unsigned long long)eliminatedAssetSetsCount;
- (id)usageAliasesAtIndex:(unsigned long long)a0;
- (unsigned long long)usageAliasesCount;

@end
