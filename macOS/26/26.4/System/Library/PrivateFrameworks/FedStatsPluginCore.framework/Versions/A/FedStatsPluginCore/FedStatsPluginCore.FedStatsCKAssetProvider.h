@interface FedStatsPluginCore.FedStatsCKAssetProvider : NSObject <FedStatsPluginAssetProviderProtocol> {
    void /* unknown type, empty encoding */ accessLevel;
    void /* unknown type, empty encoding */ recipes;
    void /* unknown type, empty encoding */ experimentCfgs;
    void /* unknown type, empty encoding */ assetURLs;
    void /* unknown type, empty encoding */ attachmentIDMaps;
    void /* unknown type, empty encoding */ ckContainer;
    void /* unknown type, empty encoding */ containerConfig;
}

- (void).cxx_destruct;
- (id)init;
- (id)assetURLForRecipe:(id)a0 forKey:(id)a1 error:(id *)a2;
- (id)deploymentIdentifierForRecipe:(id)a0;
- (id)experimentIdentifierForRecipe:(id)a0;
- (BOOL)fetchAssets:(id)a0 error:(id *)a1;
- (id)namespaceIdentifierForRecipe:(id)a0;
- (id)recipeDictionaryForRecipe:(id)a0 error:(id *)a1;
- (id)recipeIdentifiers;
- (void)removeAssets;
- (id)treatmentIdentifierForRecipe:(id)a0;

@end
