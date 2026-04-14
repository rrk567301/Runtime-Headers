@class CDMAssetSetToFactorsConfig;

@interface CDMServiceAssetConfig : NSObject {
    CDMAssetSetToFactorsConfig *_assetSetToFactorsConfig;
    BOOL _isAssetRequiredForSetup;
}

- (void).cxx_destruct;
- (id)init;
- (id)getAllAssetSets;
- (void)addCDMFactorToFoldersMapping:(id)a0 forAssetSet:(long long)a1;
- (id)getAllFactors;
- (id)getCDMAssetFactorToFoldersMappingForAssetSet:(long long)a0;
- (id)getCDMAssetSetToFactorsConfig;
- (id)getCDMAssetsFactorConfigForAssetSet:(long long)a0;
- (BOOL)isAssetRequiredForSetup;
- (void)setIsAssetRequiredForSetup:(BOOL)a0;

@end
