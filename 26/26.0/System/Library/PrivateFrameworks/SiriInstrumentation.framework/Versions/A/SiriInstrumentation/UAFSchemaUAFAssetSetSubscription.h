@class NSString, NSArray, NSData;

@interface UAFSchemaUAFAssetSetSubscription : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *subscriptionName;
@property (nonatomic) BOOL hasSubscriptionName;
@property (copy, nonatomic) NSArray *assetSetIndices;
@property (copy, nonatomic) NSArray *assetSetUsages;
@property (copy, nonatomic) NSArray *usageAliases;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addAssetSetIndices:(unsigned int)a0;
- (void)addAssetSetUsages:(id)a0;
- (void)addUsageAliases:(id)a0;
- (unsigned int)assetSetIndicesAtIndex:(unsigned long long)a0;
- (unsigned long long)assetSetIndicesCount;
- (id)assetSetUsagesAtIndex:(unsigned long long)a0;
- (unsigned long long)assetSetUsagesCount;
- (void)clearAssetSetIndices;
- (void)clearAssetSetUsages;
- (void)clearUsageAliases;
- (void)deleteAssetSetIndices;
- (void)deleteAssetSetUsages;
- (void)deleteSubscriptionName;
- (void)deleteUsageAliases;
- (id)usageAliasesAtIndex:(unsigned long long)a0;
- (unsigned long long)usageAliasesCount;

@end
