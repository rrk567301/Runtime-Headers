@class NSString, NSArray;

@interface BMUAFAssetSetSubscription : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *subscriptionName;
@property (readonly, nonatomic) NSArray *assetSetIndices;
@property (readonly, nonatomic) NSArray *assetSetUsages;
@property (readonly, nonatomic) NSArray *usageAliases;
@property (readonly, nonatomic) NSArray *alteredAssetSets;
@property (readonly, nonatomic) NSArray *eliminatedAssetSets;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)columns;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)protoFields;
+ (id)validKeyPaths;

- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initByReadFrom:(id)a0;
- (id)serialize;
- (id)jsonDictionary;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)writeTo:(id)a0;
- (id)_alteredAssetSetsJSONArray;
- (id)_assetSetIndicesJSONArray;
- (id)_assetSetUsagesJSONArray;
- (id)_eliminatedAssetSetsJSONArray;
- (id)_usageAliasesJSONArray;
- (id)initWithSubscriptionName:(id)a0 assetSetIndices:(id)a1 assetSetUsages:(id)a2 usageAliases:(id)a3;
- (id)initWithSubscriptionName:(id)a0 assetSetIndices:(id)a1 assetSetUsages:(id)a2 usageAliases:(id)a3 alteredAssetSets:(id)a4 eliminatedAssetSets:(id)a5;

@end
