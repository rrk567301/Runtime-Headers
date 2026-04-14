@class NSArray, NSString;

@interface BMUAFAssetSetStatus : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSArray *uafAssetSets;
@property (readonly, nonatomic) NSArray *uafAssetSubscriptions;
@property (readonly, nonatomic) NSArray *allAssets;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)columns;
+ (id)validKeyPaths;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)protoFields;

- (id)initByReadFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)serialize;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)_uafAssetSubscriptionsJSONArray;
- (id)_allAssetsJSONArray;
- (id)_uafAssetSetsJSONArray;
- (id)initWithUafAssetSets:(id)a0 uafAssetSubscriptions:(id)a1 allAssets:(id)a2;

@end
