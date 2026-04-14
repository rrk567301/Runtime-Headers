@class _LTHotfixManager;

@interface _LTOfflineAssetManager : NSObject {
    _LTHotfixManager *_hotfixMgr;
}

+ (void)initialize;
+ (id)assetDirectory;
+ (id)fallBackAssetResourcePath;

- (void)purgeAllAssetsExcludingConfig:(BOOL)a0 completion:(id /* block */)a1;
- (id)speechTranslationAssetInfoForLocalePair:(id)a0 taskHint:(long long)a1 error:(id *)a2;
- (id)getEndpointerAssetWithType:(unsigned long long)a0 error:(id *)a1;
- (id)endpointAssetInfoWithContext:(id)a0 error:(id *)a1;
- (void)_downloadPassthroughAssetForLocale:(id)a0 userInitiated:(BOOL)a1 completion:(id /* block */)a2;
- (id)_assetIdentifiersForLanguagePairDirectory:(id)a0;
- (void)removeObsoleteAssets;
- (void)_removeOldAssetDirectory;
- (id)assetIdentifierReferenceCountDictionary;
- (void)deleteAsset:(id)a0 completion:(id /* block */)a1;
- (void)offlineLanguageStatus:(id /* block */)a0;
- (void)downloadAssetsForLanguagePair:(id)a0 userInitiated:(BOOL)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)updateAllAssets:(id /* block */)a0;
- (id)modelURLsForLanguagePair:(id)a0;
- (id)init;
- (void)purgeAssetForLanguagePair:(id)a0 userInitiated:(BOOL)a1 completion:(id /* block */)a2;
- (void)updateAssetSymLinksForLocalePairs:(id)a0;
- (id)_speechTranslationAssetInfoForLocalePair:(id)a0 error:(id *)a1;
- (id)languageDetectorAssetWithError:(id *)a0;
- (void)_updateAsset:(id)a0 catalogAssets:(id)a1 downloadGroup:(id)a2 completion:(id /* block */)a3;
- (void)assetSize:(id /* block */)a0;
- (id)_speechTranslationAssetInfoForLocalePair:(id)a0 installedAssets:(id)a1 catalogAssets:(id)a2 offlineConfig:(id)a3 error:(id *)a4;
- (void)debugDumpAssets:(id)a0;
- (void)_queryLanguagePairStatusWithCompletion:(id /* block */)a0;

@end
