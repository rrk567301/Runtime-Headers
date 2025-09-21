@class CDMAssetSetToFactorsConfig;

@interface CDMServiceAssetConfig : NSObject {
    CDMAssetSetToFactorsConfig *_assetSetToFactorsConfig;
    char _isAssetRequiredForSetup;
}

- (id)init;
- (void).cxx_destruct;
- (id)getAllAssetSets;
- (void)addCDMFactorToFoldersMapping:(id)a0 forAssetSet:(long long)a1;
- (id)getAllFactors;
- (id)getCDMAssetFactorToFoldersMappingForAssetSet:(long long)a0;
- (id)getCDMAssetSetToFactorsConfig;
- (id)getCDMAssetsFactorConfigForAssetSet:(long long)a0;
- (char)isAssetRequiredForSetup;
- (void)setIsAssetRequiredForSetup:(char)a0;

@end
