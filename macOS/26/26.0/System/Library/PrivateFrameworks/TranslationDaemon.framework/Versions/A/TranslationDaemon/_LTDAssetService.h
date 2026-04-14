@protocol _LTDAssetCleanupScheduling;

@interface _LTDAssetService : NSObject <_LTDAssetServiceProtocol>

@property (class, retain) Class assetProviderFixture;
@property (class, weak, nonatomic) id<_LTDAssetCleanupScheduling> cleanupScheduler;

+ (void)bootstrapWithCompletion:(id /* block */)a0;
+ (id)queue;
+ (id)assetDirectoryURL;
+ (void)_installConfigAsset:(id)a0 completion:(id /* block */)a1;
+ (void)_addSyntheticASREntriesToAssets:(id)a0;
+ (unsigned long long)_assetProviderForAssetType:(id)a0;
+ (id)_assetsIdentifiersForPairNames:(id)a0 error:(id *)a1;
+ (id)_assetsSortedByVersion:(id)a0;
+ (BOOL)_awaitDownloadForAsset:(id)a0;
+ (BOOL)_awaitDownloadOfTTSAssets;
+ (id)_errorForAssetProviderResolutionForAssetType:(id)a0;
+ (id)_libraryDirectory;
+ (void)_refreshHotfixWithCompletion:(id /* block */)a0;
+ (Class)_serviceProviderForAssetType:(id)a0;
+ (id)_symlinkAssetsForLocalePair:(id)a0 fromAssets:(id)a1;
+ (id)_symlinkPairNamesForLocales:(id)a0;
+ (id)_ttsAssetsForLocales:(id)a0;
+ (void)assetsForLocales:(id)a0 includeTTS:(BOOL)a1 completion:(id /* block */)a2;
+ (id)assetsForLocales:(id)a0 includeTTS:(BOOL)a1 error:(id *)a2;
+ (void)catalogAssetsWithCompletion:(id /* block */)a0;
+ (id)catalogAssetsWithError:(id *)a0;
+ (id)configAssetIfAvailableWithError:(id *)a0;
+ (void)configAssetWithCompletion:(id /* block */)a0;
+ (id)defaultCatalogTypeWithError:(id *)a0;
+ (void)downloadAsset:(id)a0 options:(unsigned long long)a1 progress:(id /* block */)a2 completion:(id /* block */)a3;
+ (void)downloadAssets:(id)a0 forLocales:(id)a1 options:(unsigned long long)a2 progress:(id /* block */)a3 completion:(id /* block */)a4;
+ (void)downloadCatalogForAssetType:(id)a0 completion:(id /* block */)a1;
+ (id)filterAssets:(id)a0 forLocales:(id)a1 error:(id *)a2;
+ (id)filterConfigAssetFromAssets:(id)a0;
+ (void)installedAssetsWithCompletion:(id /* block */)a0;
+ (id)installedAssetsWithError:(id *)a0;
+ (id)matchingASRAssetForLocale:(id)a0 error:(id *)a1;
+ (id)matchingASRAssetInAssets:(id)a0 forLocale:(id)a1;
+ (BOOL)preflightCheckForLocalePair:(id)a0 withModelURLs:(id)a1;
+ (void)purgeAsset:(id)a0 completion:(id /* block */)a1;
+ (void)queryAssetType:(id)a0 filter:(unsigned long long)a1 completion:(id /* block */)a2;
+ (id)queryAssetType:(id)a0 filter:(unsigned long long)a1 error:(id *)a2;

@end
