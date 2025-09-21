@class NSString, NSArray;

@interface BMUAFAssetSetSubscription : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *subscriptionName;
@property (readonly, nonatomic) NSArray *assetSetIndices;
@property (readonly, nonatomic) NSArray *assetSetUsages;
@property (readonly, nonatomic) NSArray *usageAliases;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)columns;
+ (id)protoFields;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)validKeyPaths;

- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)serialize;
- (id)initByReadFrom:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_assetSetIndicesJSONArray;
- (id)_assetSetUsagesJSONArray;
- (id)_usageAliasesJSONArray;
- (id)initWithSubscriptionName:(id)a0 assetSetIndices:(id)a1 assetSetUsages:(id)a2 usageAliases:(id)a3;

@end
