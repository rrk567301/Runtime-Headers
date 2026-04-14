@class NSMutableDictionary;

@interface CDMAssetSetToFactorsConfig : NSObject {
    NSMutableDictionary *_assetSetToFactorsMapping;
}

- (void).cxx_destruct;
- (id)init;
- (id)getAllAssetSets;
- (id)getAllFactors;
- (id)getAssetSetToFactorsConfigMapping;
- (id)getCDMFactorConfigForAssetSet:(long long)a0;
- (BOOL)hasAssetSetToFactorsMapping;
- (void)setCDMAssetsFactorConfig:(id)a0 forAssetSet:(long long)a1;

@end
