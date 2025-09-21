@interface CDMEmbeddingServiceGraph : CDMServiceGraph

+ (int)getNLXSchemaCDMServiceGraphName;
+ (id)getUsageForAssetSetName:(long long)a0 withLocale:(id)a1;
+ (id)requiredDAGServices;
+ (char)requiresAssets;
+ (id)responseFeatureStoreStreamId;
+ (id)serializeFeatureStoreWithResponseCmd:(id)a0;

- (void)buildGraph;
- (Class)supportedGraphInputType;

@end
